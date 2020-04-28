using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.OleDb;

namespace LabOdb5
{
    public partial class Form_Project : Form
    {
        public Form_Project()
        {
            InitializeComponent();
        }

        private void Form_Project_Load(object sender, EventArgs e)
        {
            // TODO: данная строка кода позволяет загрузить данные в таблицу "dbDataSet.Executor". При необходимости она может быть перемещена или удалена.
            this.executorTableAdapter.Fill(this.dbDataSet.Executor);
            // TODO: данная строка кода позволяет загрузить данные в таблицу "dbDataSet.Work". При необходимости она может быть перемещена или удалена.
            this.workTableAdapter.Fill(this.dbDataSet.Work);

        }

        private void AddButton_Click(object sender, EventArgs e)
        {
            FormMain.database.Open();
            OleDbCommand cmd = new OleDbCommand("INSERT INTO Project (Work_ID, Executor_ID) VALUES (" +
                                                comboBox_WorkName.SelectedValue + ", " +
                                                comboBox_Surname.SelectedValue +
                                                ")", FormMain.database);
            try
            {
                cmd.ExecuteNonQuery();
                MessageBox.Show("SQL-запрос: \n\n" + cmd.CommandText + "\n\nбыл выполнен успешно", "Запись успешно добaвлена", MessageBoxButtons.OK, MessageBoxIcon.Asterisk);
            }
            catch (OleDbException ex)
            {
                MessageBox.Show(ex.Message + "\n" + cmd.CommandText, "Произошла ошибка при добавлении данных", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            FormMain.database.Close();

        }

        private void DeleteButton_Click(object sender, EventArgs e)
        {
            FormMain.database.Open();
            OleDbCommand cmd = new OleDbCommand("DELETE FROM Project WHERE Work_ID = "
                                    + comboBox_WorkName.SelectedValue +
                                    " AND Executor_ID = " +
                                    comboBox_Surname.SelectedValue
                                    , FormMain.database);
            try
            {
                cmd.ExecuteNonQuery();
                MessageBox.Show("SQL-запрос: \n\n" + cmd.CommandText + "\n\nбыл выполнен успешно", "Запись успешно удалена", MessageBoxButtons.OK, MessageBoxIcon.Asterisk);
            }
            catch (OleDbException ex)
            {
                MessageBox.Show(ex.Message + "\n" + cmd.CommandText, "Произошла ошибка при удалении данных", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
            FormMain.database.Close();

        }
    }
}
