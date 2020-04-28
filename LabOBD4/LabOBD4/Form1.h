#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Zusammenfassung f�r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			try
			{
				OleDbConnection^ connection = gcnew OleDbConnection();
				DataSet^ ds = gcnew DataSet();
				connection->ConnectionString =
					"Provider = Microsoft.Jet.OLEDB.4.0; " +
					"Data Source=db.mdb;" +
					"Persist Security Info=False";
				connection->Open();

				OleDbCommand^ com = gcnew OleDbCommand("SELECT Executor_Surname, Executor_Name, Executor_Patronymic, Project_Date  FROM Executor INNER JOIN Project ON Executor.Executor_ID=Project.Executor_ID");
				com->Connection = connection;

				OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(com);
				adapter->Fill(ds);
				connection->Close();
				datGridDBTables->DataSource = ds->Tables[0];
				datGridDBTables->Columns[0]->HeaderText = "�������";
				datGridDBTables->Columns[1]->HeaderText = "���";
				datGridDBTables->Columns[2]->HeaderText = "��������";
				datGridDBTables->Columns[3]->HeaderText = "���� ���������� ������";
			}
			catch (Exception ^ ex)
			{
				MessageBox::Show(ex->Message, L"������ ��� ������ ���� ������");
				Application::Exit();
			}

			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ datGridDBTables;
	private: System::Windows::Forms::MenuStrip^ menuStripMain;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ tbRequest;



	private: System::Windows::Forms::Button^ btnRequest;
	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->datGridDBTables = (gcnew System::Windows::Forms::DataGridView());
			this->menuStripMain = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tbRequest = (gcnew System::Windows::Forms::TextBox());
			this->btnRequest = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datGridDBTables))->BeginInit();
			this->menuStripMain->SuspendLayout();
			this->SuspendLayout();
			// 
			// datGridDBTables
			// 
			this->datGridDBTables->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->datGridDBTables->BackgroundColor = System::Drawing::SystemColors::Window;
			this->datGridDBTables->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datGridDBTables->Location = System::Drawing::Point(12, 36);
			this->datGridDBTables->Name = L"datGridDBTables";
			this->datGridDBTables->Size = System::Drawing::Size(342, 150);
			this->datGridDBTables->TabIndex = 0;
			// 
			// menuStripMain
			// 
			this->menuStripMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->menuStripMain->Location = System::Drawing::Point(0, 0);
			this->menuStripMain->Name = L"menuStripMain";
			this->menuStripMain->Size = System::Drawing::Size(366, 24);
			this->menuStripMain->TabIndex = 1;
			this->menuStripMain->Text = L"menuStripMain";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����������ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D1));
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(189, 22);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Space));
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�����ToolStripMenuItem_Click);
			// 
			// tbRequest
			// 
			this->tbRequest->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbRequest->BackColor = System::Drawing::SystemColors::Info;
			this->tbRequest->ForeColor = System::Drawing::Color::Blue;
			this->tbRequest->Location = System::Drawing::Point(13, 220);
			this->tbRequest->Name = L"tbRequest";
			this->tbRequest->Size = System::Drawing::Size(255, 20);
			this->tbRequest->TabIndex = 2;
			this->tbRequest->Text = L"SELECT * FROM Executor";
			this->tbRequest->TextChanged += gcnew System::EventHandler(this, &Form1::tbRequest_TextChanged);
			// 
			// btnRequest
			// 
			this->btnRequest->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnRequest->Location = System::Drawing::Point(274, 219);
			this->btnRequest->Name = L"btnRequest";
			this->btnRequest->Size = System::Drawing::Size(75, 23);
			this->btnRequest->TabIndex = 4;
			this->btnRequest->Text = L"����� ����";
			this->btnRequest->UseVisualStyleBackColor = true;
			this->btnRequest->Click += gcnew System::EventHandler(this, &Form1::btnRequest_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(366, 261);
			this->Controls->Add(this->btnRequest);
			this->Controls->Add(this->tbRequest);
			this->Controls->Add(this->datGridDBTables);
			this->Controls->Add(this->menuStripMain);
			this->Name = L"Form1";
			this->Text = L"��������� ��� ������ � ����� ������";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datGridDBTables))->EndInit();
			this->menuStripMain->ResumeLayout(false);
			this->menuStripMain->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("������� ���������", "�����������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	private: System::Void btnRequest_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			OleDbConnection^ connection = gcnew OleDbConnection();
			DataSet^ ds = gcnew DataSet();
			connection->ConnectionString =
				"Provider = Microsoft.Jet.OLEDB.4.0; " +
				"Data Source=db.mdb;" +
				"Persist Security Info=False";
			connection->Open();

			OleDbCommand^ com = gcnew OleDbCommand(this->tbRequest->Text);
			com->Connection = connection;

			OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(com);
			adapter->Fill(ds);
			connection->Close();
			datGridDBTables->DataSource = ds->Tables[0];
		}
		catch (Exception ^ ex)
		{
			MessageBox::Show(ex->Message, L"������ ��� ����� ������� SQL");
			
		}
	}
	private: System::Void tbRequest_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	
	}
};}
