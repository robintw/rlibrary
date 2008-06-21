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
	private: BookDetails::BookDetailsControl^  ctrlBookDetails;








































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
			this->ctrlBookDetails = (gcnew BookDetails::BookDetailsControl());
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
			this->btnSearch->Text = L"&Search";
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
			// ctrlBookDetails
			// 
			this->ctrlBookDetails->Location = System::Drawing::Point(4, 335);
			this->ctrlBookDetails->Name = L"ctrlBookDetails";
			this->ctrlBookDetails->Size = System::Drawing::Size(955, 269);
			this->ctrlBookDetails->TabIndex = 4;
			// 
			// frmSimpleSearch
			// 
			this->AcceptButton = this->btnSearch;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 596);
			this->Controls->Add(this->ctrlBookDetails);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lvResults);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtSearch);
			this->Name = L"frmSimpleSearch";
			this->Text = L"Library - Simple Search";
			this->Load += gcnew System::EventHandler(this, &frmSimpleSearch::frmSimpleSearch_Load);
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

				 KeywordsOps^ kwo = gcnew KeywordsOps();

				 array<String^>^ Keywords = kwo->GetKeywordsForBook(Convert::ToInt32(CopyID));
				 //array<String^>^ Keywords = { };

				 ctrlBookDetails->ShowDetails(reader, Keywords);


			 }
private: System::Void frmSimpleSearch_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
