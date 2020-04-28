namespace LabOdb5
{
    partial class Form_Project
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form_Project));
            this.comboBox_WorkName = new System.Windows.Forms.ComboBox();
            this.workBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.dbDataSet = new LabOdb5.dbDataSet();
            this.comboBox_Surname = new System.Windows.Forms.ComboBox();
            this.executorBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.DeleteButton = new System.Windows.Forms.Button();
            this.AddButton = new System.Windows.Forms.Button();
            this.workTableAdapter = new LabOdb5.dbDataSetTableAdapters.WorkTableAdapter();
            this.executorTableAdapter = new LabOdb5.dbDataSetTableAdapters.ExecutorTableAdapter();
            ((System.ComponentModel.ISupportInitialize)(this.workBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dbDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.executorBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // comboBox_WorkName
            // 
            this.comboBox_WorkName.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.comboBox_WorkName.DataSource = this.workBindingSource;
            this.comboBox_WorkName.DisplayMember = "Work_Name";
            this.comboBox_WorkName.FormattingEnabled = true;
            this.comboBox_WorkName.Location = new System.Drawing.Point(100, 12);
            this.comboBox_WorkName.Name = "comboBox_WorkName";
            this.comboBox_WorkName.Size = new System.Drawing.Size(304, 21);
            this.comboBox_WorkName.TabIndex = 0;
            this.comboBox_WorkName.ValueMember = "Work_ID";
            // 
            // workBindingSource
            // 
            this.workBindingSource.DataMember = "Work";
            this.workBindingSource.DataSource = this.dbDataSet;
            // 
            // dbDataSet
            // 
            this.dbDataSet.DataSetName = "dbDataSet";
            this.dbDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // comboBox_Surname
            // 
            this.comboBox_Surname.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.comboBox_Surname.DataSource = this.executorBindingSource;
            this.comboBox_Surname.DisplayMember = "Executor_Surname";
            this.comboBox_Surname.FormattingEnabled = true;
            this.comboBox_Surname.Location = new System.Drawing.Point(100, 49);
            this.comboBox_Surname.Name = "comboBox_Surname";
            this.comboBox_Surname.Size = new System.Drawing.Size(304, 21);
            this.comboBox_Surname.TabIndex = 1;
            this.comboBox_Surname.ValueMember = "Executor_ID";
            // 
            // executorBindingSource
            // 
            this.executorBindingSource.DataMember = "Executor";
            this.executorBindingSource.DataSource = this.dbDataSet;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 19);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(43, 13);
            this.label1.TabIndex = 2;
            this.label1.Text = "Работа";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(13, 57);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(60, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Сотрудник";
            // 
            // DeleteButton
            // 
            this.DeleteButton.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left)));
            this.DeleteButton.Location = new System.Drawing.Point(16, 93);
            this.DeleteButton.Name = "DeleteButton";
            this.DeleteButton.Size = new System.Drawing.Size(75, 23);
            this.DeleteButton.TabIndex = 4;
            this.DeleteButton.Text = "Удалить";
            this.DeleteButton.UseVisualStyleBackColor = true;
            this.DeleteButton.Click += new System.EventHandler(this.DeleteButton_Click);
            // 
            // AddButton
            // 
            this.AddButton.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.AddButton.Location = new System.Drawing.Point(329, 93);
            this.AddButton.Name = "AddButton";
            this.AddButton.Size = new System.Drawing.Size(75, 23);
            this.AddButton.TabIndex = 5;
            this.AddButton.Text = "Добавить";
            this.AddButton.UseVisualStyleBackColor = true;
            this.AddButton.Click += new System.EventHandler(this.AddButton_Click);
            // 
            // workTableAdapter
            // 
            this.workTableAdapter.ClearBeforeFill = true;
            // 
            // executorTableAdapter
            // 
            this.executorTableAdapter.ClearBeforeFill = true;
            // 
            // Form_Project
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::LabOdb5.Properties.Resources.Preview_Image;
            this.ClientSize = new System.Drawing.Size(416, 128);
            this.Controls.Add(this.AddButton);
            this.Controls.Add(this.DeleteButton);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.comboBox_Surname);
            this.Controls.Add(this.comboBox_WorkName);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximumSize = new System.Drawing.Size(432, 170);
            this.MinimumSize = new System.Drawing.Size(432, 167);
            this.Name = "Form_Project";
            this.Text = "Проекты";
            this.Load += new System.EventHandler(this.Form_Project_Load);
            ((System.ComponentModel.ISupportInitialize)(this.workBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dbDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.executorBindingSource)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox comboBox_WorkName;
        private System.Windows.Forms.ComboBox comboBox_Surname;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button DeleteButton;
        private System.Windows.Forms.Button AddButton;
        private dbDataSet dbDataSet;
        private System.Windows.Forms.BindingSource workBindingSource;
        private dbDataSetTableAdapters.WorkTableAdapter workTableAdapter;
        private System.Windows.Forms.BindingSource executorBindingSource;
        private dbDataSetTableAdapters.ExecutorTableAdapter executorTableAdapter;
    }
}