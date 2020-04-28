using LabOdb5.Properties;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.OleDb;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LabOdb5
{
    public partial class FormMain : Form
    {
        public static string connectionString = Properties.Settings.Default.dbConnectionString;
        public static OleDbConnection database = new OleDbConnection(connectionString);
        public FormMain()
        {
            InitializeComponent();
        }
        private void QuitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Close();
        }
        private void AboutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Танасюк Владислав и бутылка пива", "Разработчики", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void MainForm_FormClosed(object sender, FormClosedEventArgs e)
        {
            executorTableAdapter.Update(dbDataSet.Executor);
            Settings.Default.Save();
        }

        private void MainForm_FormClosing(object sender, FormClosingEventArgs e)
        {

            e.Cancel = MessageBox.Show("Вы хотите закрыть программу?",
            "Внимание", MessageBoxButtons.YesNo, MessageBoxIcon.Question) != DialogResult.Yes;

        }

        private void AboutUsButton_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Танасюк Владислав и бутылка пива", "Разработчики", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void ExitButton_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void FormMain_Load(object sender, EventArgs e)
        {
            // TODO: данная строка кода позволяет загрузить данные в таблицу "dbDataSet.Executor". При необходимости она может быть перемещена или удалена.
            this.executorTableAdapter.Fill(this.dbDataSet.Executor);
        }

        private void button_SQL_Click(object sender, EventArgs e)
        {
            OleDbCommand cmd = new OleDbCommand(this.textBox_SQL.Text, database);
            DataSet dataSet = new DataSet();
            OleDbDataAdapter dataAdapter = new OleDbDataAdapter();

            try

            {

                dataAdapter.SelectCommand = cmd;
                dataAdapter.Fill(dataSet);
                this.dataGridView_SQL.DataSource = dataSet.Tables[0];
                this.dataGridView_SQL.Columns[0].Visible = false;
                this.dataGridView_SQL.RowHeadersVisible = false;
                this.dataGridView_SQL.Columns[1].HeaderText = "Имя Работника";
                this.dataGridView_SQL.Columns[2].HeaderText = "Фамилия Работника";
                this.dataGridView_SQL.Columns[3].HeaderText = "Отчество Работника";


            }
            catch (OleDbException ex)
            {
                MessageBox.Show(ex.Message + "\n" + cmd.CommandText, "Произошла ошибка при выполнении SQL - запроса!", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }

        }
        private void SaveDbButton_Click(object sender, EventArgs e)
        {
            executorTableAdapter.Update(dbDataSet.Executor);
        }
        private void ShowProjectButton_Click(object sender, EventArgs e)
        {
            Form_Project form_project = new Form_Project();
            form_project.ShowDialog();

        }

        private void Search_TextChanged_1(object sender, EventArgs e)
        {
            int i = this.executorBindingSource.Find("Executor_Name", Search.Text);
            if (i == -1)
            {
                DataView dv = new DataView(this.dbDataSet.Executor as DataTable);
                dv.RowFilter = string.Format("Executor_Name LIKE'{0}*'", this.Search.Text);
                if (dv.Count != 0)
                {
                    i = this.executorBindingSource.Find("Executor_Name", dv[0]["Executor_Name"]);
                }
                dv.Dispose();
                this.executorBindingSource.Position = i;
            }
            this.executorBindingSource.Position = i;
        }

        private void textBox_SQL_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                button_SQL_Click(sender, e);
            }
        }

        private void quitToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            Close();
        }

        private void projectToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form_Project form_project = new Form_Project();
            form_project.ShowDialog();
        }
    }
}
