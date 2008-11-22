#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::Odbc;


namespace BookDetails {

	/// <summary>
	/// Summary for BookDetailsControl
	/// </summary>
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	public ref class BookDetailsControl : public System::Windows::Forms::UserControl
	{
	public:
		BookDetailsControl(void)
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
		~BookDetailsControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblRead;
	protected: 
	private: System::Windows::Forms::Label^  lblPriceBought;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  lblDateAdded;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  lblISBN;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  lblBinding;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  lblType;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  lblPages;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  lblEdition;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  lblDewey;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lblDatePublished;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lblKeywords;
	private: System::Windows::Forms::Label^  lblCopyID;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lblPublisher;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lblAuthor;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  picCoverImage;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblRead = (gcnew System::Windows::Forms::Label());
			this->lblPriceBought = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->lblDateAdded = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->lblISBN = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lblBinding = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lblType = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblPages = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lblEdition = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lblDewey = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lblDatePublished = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblKeywords = (gcnew System::Windows::Forms::Label());
			this->lblCopyID = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblPublisher = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lblAuthor = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->picCoverImage = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picCoverImage))->BeginInit();
			this->SuspendLayout();
			// 
			// lblRead
			// 
			this->lblRead->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblRead->Location = System::Drawing::Point(302, 182);
			this->lblRead->Name = L"lblRead";
			this->lblRead->Size = System::Drawing::Size(365, 13);
			this->lblRead->TabIndex = 56;
			// 
			// lblPriceBought
			// 
			this->lblPriceBought->Location = System::Drawing::Point(551, 26);
			this->lblPriceBought->Name = L"lblPriceBought";
			this->lblPriceBought->Size = System::Drawing::Size(131, 13);
			this->lblPriceBought->TabIndex = 55;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(461, 26);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(84, 13);
			this->label16->TabIndex = 54;
			this->label16->Text = L"Price Bought:";
			// 
			// lblDateAdded
			// 
			this->lblDateAdded->Location = System::Drawing::Point(86, 208);
			this->lblDateAdded->Name = L"lblDateAdded";
			this->lblDateAdded->Size = System::Drawing::Size(183, 13);
			this->lblDateAdded->TabIndex = 53;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(2, 208);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(78, 13);
			this->label15->TabIndex = 52;
			this->label15->Text = L"Date Added:";
			// 
			// lblISBN
			// 
			this->lblISBN->Location = System::Drawing::Point(507, 0);
			this->lblISBN->Name = L"lblISBN";
			this->lblISBN->Size = System::Drawing::Size(143, 13);
			this->lblISBN->TabIndex = 51;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(461, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(40, 13);
			this->label14->TabIndex = 50;
			this->label14->Text = L"ISBN:";
			// 
			// lblBinding
			// 
			this->lblBinding->Location = System::Drawing::Point(220, 156);
			this->lblBinding->Name = L"lblBinding";
			this->lblBinding->Size = System::Drawing::Size(97, 13);
			this->lblBinding->TabIndex = 49;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(161, 156);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 13);
			this->label13->TabIndex = 48;
			this->label13->Text = L"Binding:";
			// 
			// lblType
			// 
			this->lblType->Location = System::Drawing::Point(58, 156);
			this->lblType->Name = L"lblType";
			this->lblType->Size = System::Drawing::Size(97, 13);
			this->lblType->TabIndex = 47;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(2, 156);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 13);
			this->label11->TabIndex = 46;
			this->label11->Text = L"Type:";
			// 
			// lblPages
			// 
			this->lblPages->Location = System::Drawing::Point(275, 130);
			this->lblPages->Name = L"lblPages";
			this->lblPages->Size = System::Drawing::Size(97, 13);
			this->lblPages->TabIndex = 45;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(161, 130);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(108, 13);
			this->label12->TabIndex = 44;
			this->label12->Text = L"Number of Pages:";
			// 
			// lblEdition
			// 
			this->lblEdition->Location = System::Drawing::Point(58, 130);
			this->lblEdition->Name = L"lblEdition";
			this->lblEdition->Size = System::Drawing::Size(97, 13);
			this->lblEdition->TabIndex = 43;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(2, 130);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 13);
			this->label10->TabIndex = 42;
			this->label10->Text = L"Edition:";
			// 
			// lblDewey
			// 
			this->lblDewey->Location = System::Drawing::Point(153, 182);
			this->lblDewey->Name = L"lblDewey";
			this->lblDewey->Size = System::Drawing::Size(143, 13);
			this->lblDewey->TabIndex = 41;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(2, 182);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(145, 13);
			this->label9->TabIndex = 40;
			this->label9->Text = L"Dewey Decimal Number:";
			// 
			// lblDatePublished
			// 
			this->lblDatePublished->Location = System::Drawing::Point(113, 104);
			this->lblDatePublished->Name = L"lblDatePublished";
			this->lblDatePublished->Size = System::Drawing::Size(343, 13);
			this->lblDatePublished->TabIndex = 39;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(2, 104);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(105, 13);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Publication Date:";
			// 
			// lblKeywords
			// 
			this->lblKeywords->Location = System::Drawing::Point(67, 234);
			this->lblKeywords->Name = L"lblKeywords";
			this->lblKeywords->Size = System::Drawing::Size(343, 13);
			this->lblKeywords->TabIndex = 37;
			// 
			// lblCopyID
			// 
			this->lblCopyID->Location = System::Drawing::Point(67, 0);
			this->lblCopyID->Name = L"lblCopyID";
			this->lblCopyID->Size = System::Drawing::Size(143, 13);
			this->lblCopyID->TabIndex = 33;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"ID";
			// 
			// lblPublisher
			// 
			this->lblPublisher->Location = System::Drawing::Point(67, 78);
			this->lblPublisher->Name = L"lblPublisher";
			this->lblPublisher->Size = System::Drawing::Size(343, 13);
			this->lblPublisher->TabIndex = 34;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(2, 234);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Keywords:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(2, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Publisher";
			// 
			// lblAuthor
			// 
			this->lblAuthor->Location = System::Drawing::Point(67, 52);
			this->lblAuthor->Name = L"lblAuthor";
			this->lblAuthor->Size = System::Drawing::Size(343, 13);
			this->lblAuthor->TabIndex = 36;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(2, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Author:";
			// 
			// lblTitle
			// 
			this->lblTitle->Location = System::Drawing::Point(67, 26);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(343, 13);
			this->lblTitle->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(2, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Title:";
			// 
			// picCoverImage
			// 
			this->picCoverImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picCoverImage->Location = System::Drawing::Point(688, 0);
			this->picCoverImage->Name = L"picCoverImage";
			this->picCoverImage->Size = System::Drawing::Size(259, 247);
			this->picCoverImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picCoverImage->TabIndex = 27;
			this->picCoverImage->TabStop = false;
			// 
			// BookDetailsControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			this->Name = L"BookDetailsControl";
			this->Size = System::Drawing::Size(950, 250);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picCoverImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

public: void ShowDetails(OdbcDataReader^ reader, array<String^>^ Keywords)
{
		reader->Read();

		array<Byte>^ ByteArray = gcnew array<Byte>(reader->GetBytes(12, 0, nullptr, 0, Int32::MaxValue));

		reader->GetBytes(12, 0, ByteArray, 0, ByteArray->Length);

		IO::MemoryStream^ ms = gcnew IO::MemoryStream(ByteArray);

		if (ms->Length != 0)
		{
			picCoverImage->Image = Image::FromStream(ms);
		}
		else
		{
			picCoverImage->Image = nullptr;
		}

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


		lblKeywords->Text = "";
		int i;
		for (i = 0; i < Keywords->Length; i++)
		{
			lblKeywords->Text = String::Concat(lblKeywords->Text, Keywords[i], ", ");
		}
}
	};
}
