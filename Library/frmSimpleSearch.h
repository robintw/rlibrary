#pragma once

#include "GlobalConnection.h"
#include "KeywordsOps.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::Odbc;
using namespace System::IO;


namespace Library {

	/// <summary>
	/// Summary for frmSimpleSearch
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmSimpleSearch : public System::Windows::Forms::Form
	{
	public:
		frmSimpleSearch(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmSimpleSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtSearch;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  btnSearch;
	private: System::Windows::Forms::ListView^  lvResults;

	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  picCoverImage;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblAuthor;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblPublisher;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lblCopyID;

	private: System::Windows::Forms::TextBox^  txtKeywords;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->lvResults = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->picCoverImage = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblAuthor = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblPublisher = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblCopyID = (gcnew System::Windows::Forms::Label());
			this->txtKeywords = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picCoverImage))->BeginInit();
			this->SuspendLayout();
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(89, 11);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(254, 20);
			this->txtSearch->TabIndex = 0;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(349, 9);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &frmSimpleSearch::btnSearch_Click);
			// 
			// lvResults
			// 
			this->lvResults->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader5, this->columnHeader6, 
				this->columnHeader7, this->columnHeader8});
			this->lvResults->FullRowSelect = true;
			this->lvResults->HideSelection = false;
			this->lvResults->Location = System::Drawing::Point(12, 38);
			this->lvResults->MultiSelect = false;
			this->lvResults->Name = L"lvResults";
			this->lvResults->Size = System::Drawing::Size(942, 296);
			this->lvResults->TabIndex = 2;
			this->lvResults->UseCompatibleStateImageBehavior = false;
			this->lvResults->View = System::Windows::Forms::View::Details;
			this->lvResults->SelectedIndexChanged += gcnew System::EventHandler(this, &frmSimpleSearch::lvResults_SelectedIndexChanged);
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"ISBN";
			this->columnHeader5->Width = 89;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Title";
			this->columnHeader6->Width = 301;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Author";
			this->columnHeader7->Width = 226;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Publisher";
			this->columnHeader8->Width = 159;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Search Term:";
			// 
			// picCoverImage
			// 
			this->picCoverImage->Location = System::Drawing::Point(707, 340);
			this->picCoverImage->Name = L"picCoverImage";
			this->picCoverImage->Size = System::Drawing::Size(247, 220);
			this->picCoverImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picCoverImage->TabIndex = 4;
			this->picCoverImage->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 340);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Title:";
			// 
			// lblTitle
			// 
			this->lblTitle->Location = System::Drawing::Point(68, 340);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(343, 13);
			this->lblTitle->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 359);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Author:";
			// 
			// lblAuthor
			// 
			this->lblAuthor->Location = System::Drawing::Point(68, 359);
			this->lblAuthor->Name = L"lblAuthor";
			this->lblAuthor->Size = System::Drawing::Size(343, 13);
			this->lblAuthor->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 380);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Publisher";
			// 
			// lblPublisher
			// 
			this->lblPublisher->Location = System::Drawing::Point(68, 380);
			this->lblPublisher->Name = L"lblPublisher";
			this->lblPublisher->Size = System::Drawing::Size(343, 10);
			this->lblPublisher->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 404);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"ID";
			// 
			// lblCopyID
			// 
			this->lblCopyID->Location = System::Drawing::Point(48, 404);
			this->lblCopyID->Name = L"lblCopyID";
			this->lblCopyID->Size = System::Drawing::Size(343, 13);
			this->lblCopyID->TabIndex = 6;
			// 
			// txtKeywords
			// 
			this->txtKeywords->Location = System::Drawing::Point(12, 429);
			this->txtKeywords->Multiline = true;
			this->txtKeywords->Name = L"txtKeywords";
			this->txtKeywords->Size = System::Drawing::Size(379, 131);
			this->txtKeywords->TabIndex = 7;
			// 
			// frmSimpleSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 572);
			this->Controls->Add(this->txtKeywords);
			this->Controls->Add(this->lblCopyID);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblPublisher);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lblAuthor);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->picCoverImage);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lvResults);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtSearch);
			this->Name = L"frmSimpleSearch";
			this->Text = L"Library - Simple Search";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picCoverImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e) {
				 lvResults->Items->Clear();

				 Odbc::OdbcCommand^ cmd = gcnew Odbc::OdbcCommand("SELECT CopyID, ISBN, Title, Author, Publisher FROM Books WHERE ISBN LIKE ? OR Title LIKE ? OR Author LIKE ? OR Publisher LIKE ?;", GlobalConnection::conn);

				 OdbcParameter^ paramISBN = gcnew OdbcParameter("@ISBN", String::Concat("%", txtSearch->Text, "%"));
				 cmd->Parameters->Add(paramISBN);

				 OdbcParameter^ paramTitle = gcnew OdbcParameter("@Title", String::Concat("%", txtSearch->Text, "%"));
				 cmd->Parameters->Add(paramTitle);

				 OdbcParameter^ paramAuthor = gcnew OdbcParameter("@Author", String::Concat("%", txtSearch->Text, "%"));
				 cmd->Parameters->Add(paramAuthor);

				 OdbcParameter^ paramPublisher = gcnew OdbcParameter("@Publisher", String::Concat("%", txtSearch->Text, "%"));
				 cmd->Parameters->Add(paramPublisher);

				 OdbcDataReader^ rdr = cmd->ExecuteReader();

				 while (rdr->Read())
				 {
					 ListViewItem^ lvi = lvResults->Items->Add(rdr["ISBN"]->ToString());
					 lvi->Tag = rdr["CopyID"]->ToString();
					 lvi->SubItems->Add(rdr["Title"]->ToString());
					 lvi->SubItems->Add(rdr["Author"]->ToString());
					 lvi->SubItems->Add(rdr["Publisher"]->ToString());
				 }
			 }
	private: System::Void lvResults_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (lvResults->SelectedItems->Count < 1)
				 {
					 return;
				 }
				 String^ CopyID = lvResults->SelectedItems[0]->Tag->ToString();

				 String^ CommandString = "SELECT * FROM Books WHERE CopyID = ?;";

				 OdbcCommand^ cmd = gcnew OdbcCommand(CommandString, GlobalConnection::conn);

				 OdbcParameter^ paramCopyID = gcnew OdbcParameter("@CopyID", CopyID);

				 cmd->Parameters->Add(paramCopyID);

				 OdbcDataReader^ reader = cmd->ExecuteReader();

				 reader->Read();

				 array<Byte>^ ByteArray = gcnew array<Byte>(reader->GetBytes(12, 0, nullptr, 0, Int32::MaxValue));

				 reader->GetBytes(12, 0, ByteArray, 0, ByteArray->Length);

				 IO::MemoryStream^ ms = gcnew IO::MemoryStream(ByteArray);

				 picCoverImage->Image = Image::FromStream(ms);

				 lblTitle->Text = reader["Title"]->ToString();
				 lblAuthor->Text = reader["Author"]->ToString();
				 lblPublisher->Text = reader["Publisher"]->ToString();
				 lblCopyID->Text = reader["CopyID"]->ToString();

				 KeywordsOps^ kwo = gcnew KeywordsOps();

				 array<String^>^ Keywords = kwo->GetKeywordsForBook(Convert::ToInt32(reader["CopyID"]));

				 int i;
				 for (i = 0; i < Keywords->Length; i++)
				 {
					 txtKeywords->AppendText(String::Concat(Keywords[i], Environment::NewLine));
				 }
				 


			 }
};
}
