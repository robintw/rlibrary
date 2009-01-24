#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Library {

	/// <summary>
	/// Summary for frmEditBook
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmEditBook : public System::Windows::Forms::Form
	{
	public:
		frmEditBook(void)
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
		~frmEditBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtKeywords1;
	private: System::Windows::Forms::CheckBox^  chkRead;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::RadioButton^  radPaperback;
	private: System::Windows::Forms::TextBox^  txtPriceBought;
	private: System::Windows::Forms::LinkLabel^  llbAmazon;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtPubDate;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtEdition;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtPages;
	private: System::Windows::Forms::TextBox^  txtISBN;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radHardback;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtDewey;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radNonFiction;
	private: System::Windows::Forms::RadioButton^  radFiction;
	private: System::Windows::Forms::PictureBox^  picImage;
	private: System::Windows::Forms::TextBox^  txtPublisher;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtAuthor;
	private: System::Windows::Forms::TextBox^  txtTitle;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtKeywords1 = (gcnew System::Windows::Forms::TextBox());
			this->chkRead = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->radPaperback = (gcnew System::Windows::Forms::RadioButton());
			this->txtPriceBought = (gcnew System::Windows::Forms::TextBox());
			this->llbAmazon = (gcnew System::Windows::Forms::LinkLabel());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtPubDate = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtEdition = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPages = (gcnew System::Windows::Forms::TextBox());
			this->txtISBN = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radHardback = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtDewey = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radNonFiction = (gcnew System::Windows::Forms::RadioButton());
			this->radFiction = (gcnew System::Windows::Forms::RadioButton());
			this->picImage = (gcnew System::Windows::Forms::PictureBox());
			this->txtPublisher = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picImage))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(-84, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 30;
			this->label1->Text = L"ISBN:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(-84, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Title:";
			// 
			// txtKeywords1
			// 
			this->txtKeywords1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->txtKeywords1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->txtKeywords1->Location = System::Drawing::Point(571, 18);
			this->txtKeywords1->Name = L"txtKeywords1";
			this->txtKeywords1->Size = System::Drawing::Size(156, 20);
			this->txtKeywords1->TabIndex = 60;
			// 
			// chkRead
			// 
			this->chkRead->AutoSize = true;
			this->chkRead->Location = System::Drawing::Point(11, 334);
			this->chkRead->Name = L"chkRead";
			this->chkRead->Size = System::Drawing::Size(52, 17);
			this->chkRead->TabIndex = 47;
			this->chkRead->Text = L"Read";
			this->chkRead->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(80, 309);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 59;
			this->label10->Text = L"£";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 309);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 13);
			this->label9->TabIndex = 58;
			this->label9->Text = L"Price Bought:";
			// 
			// radPaperback
			// 
			this->radPaperback->AutoSize = true;
			this->radPaperback->Location = System::Drawing::Point(109, 19);
			this->radPaperback->Name = L"radPaperback";
			this->radPaperback->Size = System::Drawing::Size(77, 17);
			this->radPaperback->TabIndex = 10;
			this->radPaperback->TabStop = true;
			this->radPaperback->Text = L"Paperback";
			this->radPaperback->UseVisualStyleBackColor = true;
			// 
			// txtPriceBought
			// 
			this->txtPriceBought->Location = System::Drawing::Point(93, 306);
			this->txtPriceBought->Name = L"txtPriceBought";
			this->txtPriceBought->Size = System::Drawing::Size(70, 20);
			this->txtPriceBought->TabIndex = 45;
			// 
			// llbAmazon
			// 
			this->llbAmazon->AutoSize = true;
			this->llbAmazon->Location = System::Drawing::Point(97, 335);
			this->llbAmazon->Name = L"llbAmazon";
			this->llbAmazon->Size = System::Drawing::Size(108, 13);
			this->llbAmazon->TabIndex = 57;
			this->llbAmazon->TabStop = true;
			this->llbAmazon->Text = L"Amazon Details Page";
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(467, 328);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(95, 32);
			this->btnCancel->TabIndex = 56;
			this->btnCancel->Text = L"&Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(366, 328);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(95, 32);
			this->btnDelete->TabIndex = 55;
			this->btnDelete->Text = L"&Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(265, 328);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(95, 32);
			this->btnAdd->TabIndex = 48;
			this->btnAdd->Text = L"&Save";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 235);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 13);
			this->label8->TabIndex = 54;
			this->label8->Text = L"Publication Date:";
			// 
			// txtPubDate
			// 
			this->txtPubDate->Location = System::Drawing::Point(102, 232);
			this->txtPubDate->Name = L"txtPubDate";
			this->txtPubDate->Size = System::Drawing::Size(103, 20);
			this->txtPubDate->TabIndex = 44;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(105, 209);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 53;
			this->label7->Text = L"Edition:";
			// 
			// txtEdition
			// 
			this->txtEdition->Location = System::Drawing::Point(160, 206);
			this->txtEdition->Name = L"txtEdition";
			this->txtEdition->Size = System::Drawing::Size(45, 20);
			this->txtEdition->TabIndex = 42;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Pages:";
			// 
			// txtPages
			// 
			this->txtPages->Location = System::Drawing::Point(54, 206);
			this->txtPages->Name = L"txtPages";
			this->txtPages->Size = System::Drawing::Size(45, 20);
			this->txtPages->TabIndex = 40;
			// 
			// txtISBN
			// 
			this->txtISBN->Location = System::Drawing::Point(64, 2);
			this->txtISBN->Name = L"txtISBN";
			this->txtISBN->Size = System::Drawing::Size(68, 20);
			this->txtISBN->TabIndex = 33;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(568, 2);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 13);
			this->label11->TabIndex = 61;
			this->label11->Text = L"Keywords:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radPaperback);
			this->groupBox2->Controls->Add(this->radHardback);
			this->groupBox2->Location = System::Drawing::Point(11, 158);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(194, 42);
			this->groupBox2->TabIndex = 51;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Binding:";
			// 
			// radHardback
			// 
			this->radHardback->AutoSize = true;
			this->radHardback->Location = System::Drawing::Point(6, 19);
			this->radHardback->Name = L"radHardback";
			this->radHardback->Size = System::Drawing::Size(72, 17);
			this->radHardback->TabIndex = 0;
			this->radHardback->TabStop = true;
			this->radHardback->Text = L"Hardback";
			this->radHardback->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 13);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Dewey Decimal Number:";
			// 
			// txtDewey
			// 
			this->txtDewey->Location = System::Drawing::Point(135, 122);
			this->txtDewey->Name = L"txtDewey";
			this->txtDewey->Size = System::Drawing::Size(70, 20);
			this->txtDewey->TabIndex = 39;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radNonFiction);
			this->groupBox1->Controls->Add(this->radFiction);
			this->groupBox1->Location = System::Drawing::Point(11, 258);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(194, 42);
			this->groupBox1->TabIndex = 49;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Type:";
			// 
			// radNonFiction
			// 
			this->radNonFiction->AutoSize = true;
			this->radNonFiction->Location = System::Drawing::Point(109, 19);
			this->radNonFiction->Name = L"radNonFiction";
			this->radNonFiction->Size = System::Drawing::Size(79, 17);
			this->radNonFiction->TabIndex = 10;
			this->radNonFiction->TabStop = true;
			this->radNonFiction->Text = L"Non-Fiction";
			this->radNonFiction->UseVisualStyleBackColor = true;
			// 
			// radFiction
			// 
			this->radFiction->AutoSize = true;
			this->radFiction->Location = System::Drawing::Point(6, 19);
			this->radFiction->Name = L"radFiction";
			this->radFiction->Size = System::Drawing::Size(56, 17);
			this->radFiction->TabIndex = 0;
			this->radFiction->TabStop = true;
			this->radFiction->Text = L"Fiction";
			this->radFiction->UseVisualStyleBackColor = true;
			// 
			// picImage
			// 
			this->picImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picImage->Location = System::Drawing::Point(265, 2);
			this->picImage->Name = L"picImage";
			this->picImage->Size = System::Drawing::Size(297, 320);
			this->picImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picImage->TabIndex = 46;
			this->picImage->TabStop = false;
			// 
			// txtPublisher
			// 
			this->txtPublisher->Location = System::Drawing::Point(64, 96);
			this->txtPublisher->Name = L"txtPublisher";
			this->txtPublisher->Size = System::Drawing::Size(141, 20);
			this->txtPublisher->TabIndex = 38;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Publisher:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Author:";
			// 
			// txtAuthor
			// 
			this->txtAuthor->Location = System::Drawing::Point(64, 70);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(141, 20);
			this->txtAuthor->TabIndex = 36;
			// 
			// txtTitle
			// 
			this->txtTitle->Location = System::Drawing::Point(64, 44);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(195, 20);
			this->txtTitle->TabIndex = 34;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(8, 5);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 13);
			this->label12->TabIndex = 35;
			this->label12->Text = L"ISBN:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(8, 47);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(30, 13);
			this->label13->TabIndex = 37;
			this->label13->Text = L"Title:";
			// 
			// frmEditBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 364);
			this->Controls->Add(this->txtKeywords1);
			this->Controls->Add(this->chkRead);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtPriceBought);
			this->Controls->Add(this->llbAmazon);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtPubDate);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtEdition);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtPages);
			this->Controls->Add(this->txtISBN);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtDewey);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->picImage);
			this->Controls->Add(this->txtPublisher);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtAuthor);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Name = L"frmEditBook";
			this->Text = L"Library - Edit Book";
			this->Load += gcnew System::EventHandler(this, &frmEditBook::frmEditBook_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmEditBook_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
