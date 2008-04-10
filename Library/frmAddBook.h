#include "GlobalConnection.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Xml;
using namespace System::IO;
using namespace System::Net;


namespace Library {

	/// <summary>
	/// Summary for frmAddBook
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmAddBook : public System::Windows::Forms::Form
	{
	public:
		frmAddBook(void)
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
		~frmAddBook()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ DetailsURL;

	private: System::Windows::Forms::TextBox^  txtISBN;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtTitle;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtAuthor;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtPublisher;
	private: System::Windows::Forms::PictureBox^  picImage;


	private: System::Windows::Forms::RadioButton^  radFiction;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radNonFiction;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtDewey;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radPaperback;

	private: System::Windows::Forms::RadioButton^  radHardback;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtPages;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtEdition;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtPubDate;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::LinkLabel^  llbAmazon;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txtPriceBought;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::CheckBox^  chkRead;
	private: System::Windows::Forms::Button^  btnClear;









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
			this->txtISBN = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtPublisher = (gcnew System::Windows::Forms::TextBox());
			this->picImage = (gcnew System::Windows::Forms::PictureBox());
			this->radFiction = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radNonFiction = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtDewey = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radPaperback = (gcnew System::Windows::Forms::RadioButton());
			this->radHardback = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPages = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtEdition = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtPubDate = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llbAmazon = (gcnew System::Windows::Forms::LinkLabel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtPriceBought = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->chkRead = (gcnew System::Windows::Forms::CheckBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picImage))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtISBN
			// 
			this->txtISBN->Location = System::Drawing::Point(68, 6);
			this->txtISBN->Name = L"txtISBN";
			this->txtISBN->Size = System::Drawing::Size(68, 20);
			this->txtISBN->TabIndex = 0;
			this->txtISBN->Text = L"1893115941";
			this->txtISBN->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &frmAddBook::txtISBN_KeyUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ISBN:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Title:";
			// 
			// txtTitle
			// 
			this->txtTitle->Location = System::Drawing::Point(68, 48);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(195, 20);
			this->txtTitle->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Author:";
			// 
			// txtAuthor
			// 
			this->txtAuthor->Location = System::Drawing::Point(68, 74);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(141, 20);
			this->txtAuthor->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Publisher:";
			// 
			// txtPublisher
			// 
			this->txtPublisher->Location = System::Drawing::Point(68, 100);
			this->txtPublisher->Name = L"txtPublisher";
			this->txtPublisher->Size = System::Drawing::Size(141, 20);
			this->txtPublisher->TabIndex = 6;
			// 
			// picImage
			// 
			this->picImage->Location = System::Drawing::Point(269, 6);
			this->picImage->Name = L"picImage";
			this->picImage->Size = System::Drawing::Size(297, 320);
			this->picImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picImage->TabIndex = 8;
			this->picImage->TabStop = false;
			// 
			// radFiction
			// 
			this->radFiction->AutoSize = true;
			this->radFiction->Location = System::Drawing::Point(6, 19);
			this->radFiction->Name = L"radFiction";
			this->radFiction->Size = System::Drawing::Size(56, 17);
			this->radFiction->TabIndex = 9;
			this->radFiction->TabStop = true;
			this->radFiction->Text = L"Fiction";
			this->radFiction->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radNonFiction);
			this->groupBox1->Controls->Add(this->radFiction);
			this->groupBox1->Location = System::Drawing::Point(15, 262);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(194, 42);
			this->groupBox1->TabIndex = 10;
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Dewey Decimal Number:";
			// 
			// txtDewey
			// 
			this->txtDewey->Location = System::Drawing::Point(139, 126);
			this->txtDewey->Name = L"txtDewey";
			this->txtDewey->Size = System::Drawing::Size(70, 20);
			this->txtDewey->TabIndex = 11;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radPaperback);
			this->groupBox2->Controls->Add(this->radHardback);
			this->groupBox2->Location = System::Drawing::Point(15, 162);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(194, 42);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Binding:";
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
			// radHardback
			// 
			this->radHardback->AutoSize = true;
			this->radHardback->Location = System::Drawing::Point(6, 19);
			this->radHardback->Name = L"radHardback";
			this->radHardback->Size = System::Drawing::Size(72, 17);
			this->radHardback->TabIndex = 9;
			this->radHardback->TabStop = true;
			this->radHardback->Text = L"Hardback";
			this->radHardback->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 213);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Pages:";
			// 
			// txtPages
			// 
			this->txtPages->Location = System::Drawing::Point(58, 210);
			this->txtPages->Name = L"txtPages";
			this->txtPages->Size = System::Drawing::Size(45, 20);
			this->txtPages->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(109, 213);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Edition:";
			// 
			// txtEdition
			// 
			this->txtEdition->Location = System::Drawing::Point(164, 210);
			this->txtEdition->Name = L"txtEdition";
			this->txtEdition->Size = System::Drawing::Size(45, 20);
			this->txtEdition->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 239);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Publication Date:";
			// 
			// txtPubDate
			// 
			this->txtPubDate->Location = System::Drawing::Point(106, 236);
			this->txtPubDate->Name = L"txtPubDate";
			this->txtPubDate->Size = System::Drawing::Size(103, 20);
			this->txtPubDate->TabIndex = 18;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(269, 332);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(95, 32);
			this->btnAdd->TabIndex = 20;
			this->btnAdd->Text = L"&Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &frmAddBook::btnAdd_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Location = System::Drawing::Point(471, 332);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(95, 32);
			this->btnCancel->TabIndex = 20;
			this->btnCancel->Text = L"&Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &frmAddBook::btnCancel_Click);
			// 
			// llbAmazon
			// 
			this->llbAmazon->AutoSize = true;
			this->llbAmazon->Location = System::Drawing::Point(101, 339);
			this->llbAmazon->Name = L"llbAmazon";
			this->llbAmazon->Size = System::Drawing::Size(108, 13);
			this->llbAmazon->TabIndex = 21;
			this->llbAmazon->TabStop = true;
			this->llbAmazon->Text = L"Amazon Details Page";
			this->llbAmazon->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &frmAddBook::llbAmazon_LinkClicked);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 313);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Price Bought:";
			// 
			// txtPriceBought
			// 
			this->txtPriceBought->Location = System::Drawing::Point(97, 310);
			this->txtPriceBought->Name = L"txtPriceBought";
			this->txtPriceBought->Size = System::Drawing::Size(70, 20);
			this->txtPriceBought->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(84, 313);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"£";
			// 
			// chkRead
			// 
			this->chkRead->AutoSize = true;
			this->chkRead->Location = System::Drawing::Point(15, 338);
			this->chkRead->Name = L"chkRead";
			this->chkRead->Size = System::Drawing::Size(52, 17);
			this->chkRead->TabIndex = 25;
			this->chkRead->Text = L"Read";
			this->chkRead->UseVisualStyleBackColor = true;
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(370, 332);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(95, 32);
			this->btnClear->TabIndex = 20;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &frmAddBook::btnClear_Click);
			// 
			// frmAddBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(576, 370);
			this->Controls->Add(this->chkRead);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtPriceBought);
			this->Controls->Add(this->llbAmazon);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtPubDate);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtEdition);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtPages);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtDewey);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->picImage);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtPublisher);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtAuthor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtTitle);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtISBN);
			this->KeyPreview = true;
			this->Name = L"frmAddBook";
			this->Text = L"Library - Add Book";
			this->Load += gcnew System::EventHandler(this, &frmAddBook::frmAddBook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picImage))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmAddBook_Load(System::Object^  sender, System::EventArgs^  e) {
				 
			 }

	 private: System::Void ClearAllFields()
			  {
				  txtTitle->Text = "";
				  txtAuthor->Text = "";
				  txtPublisher->Text = "";
				  txtPubDate->Text = "";
				  txtDewey->Text = "";
				  txtEdition->Text = "";
				  txtPages->Text = "";

				  radFiction->Checked = false;
				  radNonFiction->Checked = false;

				  radHardback->Checked = false;
				  radPaperback->Checked = false;

				  picImage->Image = nullptr;
			  }

	 private: System::Void GetDetailsFromInternet()
			  {
				  ClearAllFields();
				  String^ ISBN = txtISBN->Text;

				  XmlDocument^ xmldoc = gcnew XmlDocument();

				  String^ URL = String::Format("http://ecs.amazonaws.com/onca/xml?Service=AWSECommerceService&AWSAccessKeyId=1CE7SK4ZPTNDQZCWBP82&Operation=ItemLookup&AssociateTag=devconn-20&Version=2007-01-15&ItemId={0}&ResponseGroup=ItemAttributes,Images", ISBN);

				  xmldoc->Load(URL);

				  XmlNamespaceManager^ namesp = gcnew XmlNamespaceManager(xmldoc->NameTable);
				  namesp->AddNamespace("a", "http://webservices.amazon.com/AWSECommerceService/2007-01-15");

				  XmlNode^ nodDetails = xmldoc->SelectSingleNode("//a:DetailPageURL", namesp);
				  if (nodDetails != nullptr)
				  {
					  DetailsURL = nodDetails->InnerText->Replace(".com", ".co.uk");
				  }

				  XmlNode^ nodTitle = xmldoc->SelectSingleNode("//a:Title", namesp);
				  if (nodTitle != nullptr)
				  {
					  txtTitle->Text = nodTitle->InnerText;
				  }
				  else
				  {
					  //If there's no title then no data has been returned - so set focus to title field for manual input
					  txtTitle->Focus();
				  }

				  XmlNode^ nodAuthor = xmldoc->SelectSingleNode("//a:Author", namesp);
				  if (nodAuthor != nullptr)
				  {
					  txtAuthor->Text = nodAuthor->InnerText;
				  }

				  XmlNode^ nodPublisher = xmldoc->SelectSingleNode("//a:Publisher", namesp);
				  if (nodPublisher != nullptr)
				  {
					  txtPublisher->Text = nodPublisher->InnerText;
				  }

				  XmlNode^ nodDewey = xmldoc->SelectSingleNode("//a:DeweyDecimalNumber", namesp);
				  if (nodDewey != nullptr)
				  {
					  txtDewey->Text = nodDewey->InnerText;
				  }

				  XmlNode^ nodPages = xmldoc->SelectSingleNode("//a:NumberOfPages", namesp);
				  if (nodPages != nullptr)
				  {
					  txtPages->Text = nodPages->InnerText;
				  }

				  XmlNode^ nodEdition = xmldoc->SelectSingleNode("//a:Edition", namesp);
				  if (nodEdition != nullptr)
				  {
					  txtEdition->Text = nodEdition->InnerText;
				  }

				  XmlNode^ nodPubDate = xmldoc->SelectSingleNode("//a:PublicationDate", namesp);
				  if (nodPubDate != nullptr)
				  {
					  txtPubDate->Text = nodPubDate->InnerText;
				  }

				  XmlNode^ nodBinding = xmldoc->SelectSingleNode("//a:Binding", namesp);
				  if (nodBinding != nullptr)
				  {
					  if (nodBinding->InnerText == "Paperback")
					  {
						  radPaperback->Checked = true;
					  }
					  else
					  {
						  radHardback->Checked = true;
					  }
				  }

				  XmlNode^ nodImage = xmldoc->SelectSingleNode("//a:LargeImage/a:URL", namesp);
				  if (nodImage != nullptr)
				  {
					  picImage->Load(nodImage->InnerText);
				  }
				  else
				  {
					  Graphics^ g = picImage->CreateGraphics();
					  SizeF^ s = g->MeasureString("No image available", this->Font);
					  g->DrawString("No image available",this->Font, Brushes::Black, (picImage->Width / (float) 2) - (s->Width / (float) 2), picImage->Height / (float) 2);
					  
				  }

				  radFiction->Focus();


			  }
private: System::Void txtISBN_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if (e->KeyCode == Keys::Return)
			 {
				 GetDetailsFromInternet();
			 }
		 }
private: System::Void llbAmazon_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 System::Diagnostics::Process::Start(DetailsURL);
		 }
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ CommandText = "INSERT INTO Books (Title, Author, Publisher, Type, Dewey, Binding, Pages, Edition, PublicationDate, HaveRead, PriceBought, CoverImage) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?);";

			 OdbcCommand^ cmd = gcnew OdbcCommand(CommandText, GlobalConnection::conn);

			 OdbcParameter^ paramTitle = gcnew OdbcParameter("@Title", txtTitle->Text);
			 cmd->Parameters->Add(paramTitle);

			 OdbcParameter^ paramAuthor = gcnew OdbcParameter("@Author", txtAuthor->Text);
			 cmd->Parameters->Add(paramAuthor);

			 OdbcParameter^ paramPublisher = gcnew OdbcParameter("@Publisher", txtPublisher->Text);
			 cmd->Parameters->Add(paramPublisher);

			 OdbcParameter^ paramType = gcnew OdbcParameter("@Type", radNonFiction->Checked);
			 cmd->Parameters->Add(paramType);

			 OdbcParameter^ paramDewey = gcnew OdbcParameter("@Dewey", txtDewey->Text);
			 cmd->Parameters->Add(paramDewey);

			 OdbcParameter^ paramBinding = gcnew OdbcParameter("@Binding", radHardback->Checked);
			 cmd->Parameters->Add(paramBinding);

			 OdbcParameter^ paramPages = gcnew OdbcParameter("@Pages", txtPages->Text);
			 cmd->Parameters->Add(paramPages);

			 OdbcParameter^ paramEdition = gcnew OdbcParameter("@Edition", txtEdition->Text);
			 cmd->Parameters->Add(paramEdition);

			 array<String^>^ Formats = gcnew array<String^> { "yyyy", "yyyy-MM", "yyyy-MM-dd" };
			 DateTime date = DateTime::ParseExact(txtPubDate->Text,Formats, System::Globalization::CultureInfo::InvariantCulture, System::Globalization::DateTimeStyles::RoundtripKind);
			 OdbcParameter^ paramPubDate = gcnew OdbcParameter("@PublicationDate", date);
			 cmd->Parameters->Add(paramPubDate);



			 OdbcParameter^ paramRead = gcnew OdbcParameter("@HaveRead", chkRead->Checked);
			 cmd->Parameters->Add(paramRead);

			 OdbcParameter^ paramPriceBought = gcnew OdbcParameter("@PriceBought", txtPriceBought->Text);
			 cmd->Parameters->Add(paramPriceBought);

			 //Deal with inserting BLOB for CoverImage
			 WebResponse^ resp = WebRequest::Create(picImage->ImageLocation)->GetResponse();
			 IO::Stream^ s = resp->GetResponseStream();

			 array<System::Byte>^ ByteArray = gcnew array<System::Byte>(Int16::MaxValue * 20);

			 int BytesRead = s->Read(ByteArray, 0, 1);
			 int TotalBytesRead = BytesRead;

			 while (BytesRead != 0)
			 {
				 BytesRead = s->Read(ByteArray, TotalBytesRead, 1);
				 TotalBytesRead = TotalBytesRead + BytesRead;
			 }

			 Array::Resize(ByteArray, TotalBytesRead);

			 OdbcParameter^ paramCoverImage = gcnew OdbcParameter("@CoverImage", ByteArray);
			 
			 cmd->Parameters->Add(paramCoverImage);

			 cmd->ExecuteNonQuery();

			 ClearAllFields();
			 txtISBN->Focus();
		 }
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
			 ClearAllFields();
			 txtISBN->Focus();
		 }
};
}
