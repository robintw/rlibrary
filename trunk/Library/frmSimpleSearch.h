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
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lblKeywords;
	private: System::Windows::Forms::Label^  lblDatePublished;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lblDewey;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lblEdition;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  lblPages;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  lblType;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  lblBinding;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  lblISBN;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  lblDateAdded;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  lblPriceBought;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  lblRead;





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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblKeywords = (gcnew System::Windows::Forms::Label());
			this->lblDatePublished = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblDewey = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblEdition = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lblPages = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblBinding = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lblISBN = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lblDateAdded = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->lblPriceBought = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->lblRead = (gcnew System::Windows::Forms::Label());
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
			this->picCoverImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picCoverImage->Location = System::Drawing::Point(695, 340);
			this->picCoverImage->Name = L"picCoverImage";
			this->picCoverImage->Size = System::Drawing::Size(259, 247);
			this->picCoverImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picCoverImage->TabIndex = 4;
			this->picCoverImage->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 366);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Title:";
			// 
			// lblTitle
			// 
			this->lblTitle->Location = System::Drawing::Point(74, 366);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(343, 13);
			this->lblTitle->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 392);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Author:";
			// 
			// lblAuthor
			// 
			this->lblAuthor->Location = System::Drawing::Point(74, 392);
			this->lblAuthor->Name = L"lblAuthor";
			this->lblAuthor->Size = System::Drawing::Size(343, 13);
			this->lblAuthor->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 418);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Publisher";
			// 
			// lblPublisher
			// 
			this->lblPublisher->Location = System::Drawing::Point(74, 418);
			this->lblPublisher->Name = L"lblPublisher";
			this->lblPublisher->Size = System::Drawing::Size(343, 13);
			this->lblPublisher->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(9, 340);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"ID";
			// 
			// lblCopyID
			// 
			this->lblCopyID->Location = System::Drawing::Point(74, 340);
			this->lblCopyID->Name = L"lblCopyID";
			this->lblCopyID->Size = System::Drawing::Size(143, 13);
			this->lblCopyID->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(9, 574);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Keywords:";
			// 
			// lblKeywords
			// 
			this->lblKeywords->Location = System::Drawing::Point(74, 574);
			this->lblKeywords->Name = L"lblKeywords";
			this->lblKeywords->Size = System::Drawing::Size(343, 13);
			this->lblKeywords->TabIndex = 7;
			// 
			// lblDatePublished
			// 
			this->lblDatePublished->Location = System::Drawing::Point(120, 444);
			this->lblDatePublished->Name = L"lblDatePublished";
			this->lblDatePublished->Size = System::Drawing::Size(343, 13);
			this->lblDatePublished->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(9, 444);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Publication Date:";
			// 
			// lblDewey
			// 
			this->lblDewey->Location = System::Drawing::Point(160, 522);
			this->lblDewey->Name = L"lblDewey";
			this->lblDewey->Size = System::Drawing::Size(143, 13);
			this->lblDewey->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(9, 522);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Dewey Decimal Number:";
			// 
			// lblEdition
			// 
			this->lblEdition->Location = System::Drawing::Point(65, 470);
			this->lblEdition->Name = L"lblEdition";
			this->lblEdition->Size = System::Drawing::Size(97, 13);
			this->lblEdition->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(9, 470);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Edition:";
			// 
			// lblPages
			// 
			this->lblPages->Location = System::Drawing::Point(282, 470);
			this->lblPages->Name = L"lblPages";
			this->lblPages->Size = System::Drawing::Size(97, 13);
			this->lblPages->TabIndex = 15;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(168, 470);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(108, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Number of Pages:";
			// 
			// lblType
			// 
			this->lblType->Location = System::Drawing::Point(65, 496);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(97, 13);
			this->lblType->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(9, 496);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Type:";
			// 
			// lblBinding
			// 
			this->lblBinding->Location = System::Drawing::Point(227, 496);
			this->lblBinding->Name = L"lblBinding";
			this->lblBinding->Size = System::Drawing::Size(97, 13);
			this->lblBinding->TabIndex = 19;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(168, 496);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 13);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Binding:";
			// 
			// lblISBN
			// 
			this->lblISBN->Location = System::Drawing::Point(514, 340);
			this->lblISBN->Name = L"lblISBN";
			this->lblISBN->Size = System::Drawing::Size(143, 13);
			this->lblISBN->TabIndex = 21;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(468, 340);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 20;
			this->label14->Text = L"ISBN:";
			// 
			// lblDateAdded
			// 
			this->lblDateAdded->Location = System::Drawing::Point(93, 548);
			this->lblDateAdded->Name = L"lblDateAdded";
			this->lblDateAdded->Size = System::Drawing::Size(183, 13);
			this->lblDateAdded->TabIndex = 23;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(9, 548);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(78, 13);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Date Added:";
			// 
			// lblPriceBought
			// 
			this->lblPriceBought->Location = System::Drawing::Point(558, 366);
			this->lblPriceBought->Name = L"lblPriceBought";
			this->lblPriceBought->Size = System::Drawing::Size(131, 13);
			this->lblPriceBought->TabIndex = 25;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(468, 366);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(84, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"Price Bought:";
			// 
			// lblRead
			// 
			this->lblRead->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblRead->Location = System::Drawing::Point(309, 522);
			this->lblRead->Name = L"lblRead";
			this->lblRead->Size = System::Drawing::Size(365, 13);
			this->lblRead->TabIndex = 26;
			// 
			// frmSimpleSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 596);
			this->Controls->Add(this->lblRead);
			this->Controls->Add(this->lblPriceBought);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->lblDateAdded);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->lblISBN);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->lblBinding);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->lblType);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->lblPages);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->lblEdition);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lblDewey);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->lblDatePublished);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lblKeywords);
			this->Controls->Add(this->lblCopyID);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblPublisher);
			this->Controls->Add(this->label4);
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
			this->Load += gcnew System::EventHandler(this, &frmSimpleSearch::frmSimpleSearch_Load);
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
				 lblDatePublished->Text = String::Format("{0:D}", reader["PublicationDate"]);
				 lblDewey->Text = reader["Dewey"]->ToString();
				 lblEdition->Text = reader["Edition"]->ToString();
				 lblPages->Text = reader["Pages"]->ToString();
				 lblISBN->Text = reader["ISBN"]->ToString();
				 lblDateAdded->Text = String::Format("{0:D}", reader["DateAdded"]);
				 lblPriceBought->Text = String::Format("{0:C}", reader["PriceBought"]);


				 if (reader["Type"]->ToString() == "0")
				 {
					 lblType->Text = "Fiction";
				 }
				 else
				 {
					 lblType->Text = "Nonfiction";
				 }

				 if (reader["Binding"]->ToString() == "0")
				 {
					 lblBinding->Text = "Paperback";
				 }
				 else
				 {
					 lblBinding->Text = "Hardback";
				 }

				 if (reader["HaveRead"]->ToString() == "0")
				 {
					 lblRead->Text = "This book has not been read.";
				 }
				 else
				 {
					 lblRead->Text = "This book has been read.";
				 }


				 KeywordsOps^ kwo = gcnew KeywordsOps();

				 array<String^>^ Keywords = kwo->GetKeywordsForBook(Convert::ToInt32(reader["CopyID"]));
				 lblKeywords->Text = "";
				 int i;
				 for (i = 0; i < Keywords->Length; i++)
				 {
					 lblKeywords->Text = String::Concat(lblKeywords->Text, Keywords[i], ", ");
				 }
				 


			 }
private: System::Void frmSimpleSearch_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
