#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Library {

	/// <summary>
	/// Summary for frmAdvSearch
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmAdvSearch : public System::Windows::Forms::Form
	{
	public:
		frmAdvSearch(void)
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
		~frmAdvSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: BookDetails::BookDetailsControl^  ctrlBookDetails;
	protected: 
	private: System::Windows::Forms::ListView^  lvResults;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ComboBox^  cmbField0;

	private: System::Windows::Forms::TextBox^  txtCondition0;
	private: System::Windows::Forms::Button^  btnAdd0;
	private: System::Windows::Forms::Button^  btnDel0;


	private: ArrayList^ ArrayCombo;
	private: ArrayList^ ArrayTextBox;
	private: ArrayList^ ArrayAddButton;
	private: ArrayList^ ArrayDelButton;
	private: System::Windows::Forms::Button^  btnSearch;

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
			this->ctrlBookDetails = (gcnew BookDetails::BookDetailsControl());
			this->lvResults = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->cmbField0 = (gcnew System::Windows::Forms::ComboBox());
			this->txtCondition0 = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd0 = (gcnew System::Windows::Forms::Button());
			this->btnDel0 = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ctrlBookDetails
			// 
			this->ctrlBookDetails->Location = System::Drawing::Point(4, 404);
			this->ctrlBookDetails->Name = L"ctrlBookDetails";
			this->ctrlBookDetails->Size = System::Drawing::Size(955, 269);
			this->ctrlBookDetails->TabIndex = 6;
			// 
			// lvResults
			// 
			this->lvResults->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader5, this->columnHeader6, 
				this->columnHeader7, this->columnHeader8});
			this->lvResults->FullRowSelect = true;
			this->lvResults->HideSelection = false;
			this->lvResults->Location = System::Drawing::Point(12, 136);
			this->lvResults->MultiSelect = false;
			this->lvResults->Name = L"lvResults";
			this->lvResults->Size = System::Drawing::Size(942, 267);
			this->lvResults->TabIndex = 5;
			this->lvResults->UseCompatibleStateImageBehavior = false;
			this->lvResults->View = System::Windows::Forms::View::Details;
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
			// cmbField0
			// 
			this->cmbField0->FormattingEnabled = true;
			this->cmbField0->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Title", L"Author", L"Publisher"});
			this->cmbField0->Location = System::Drawing::Point(12, 12);
			this->cmbField0->Name = L"cmbField0";
			this->cmbField0->Size = System::Drawing::Size(121, 21);
			this->cmbField0->TabIndex = 7;
			this->cmbField0->Text = L"Title";
			// 
			// txtCondition0
			// 
			this->txtCondition0->Location = System::Drawing::Point(139, 13);
			this->txtCondition0->Name = L"txtCondition0";
			this->txtCondition0->Size = System::Drawing::Size(728, 20);
			this->txtCondition0->TabIndex = 8;
			// 
			// btnAdd0
			// 
			this->btnAdd0->Location = System::Drawing::Point(873, 10);
			this->btnAdd0->Name = L"btnAdd0";
			this->btnAdd0->Size = System::Drawing::Size(36, 23);
			this->btnAdd0->TabIndex = 9;
			this->btnAdd0->Text = L"+";
			this->btnAdd0->UseVisualStyleBackColor = true;
			this->btnAdd0->Click += gcnew System::EventHandler(this, &frmAdvSearch::btnAdd0_Click);
			// 
			// btnDel0
			// 
			this->btnDel0->Enabled = false;
			this->btnDel0->Location = System::Drawing::Point(915, 10);
			this->btnDel0->Name = L"btnDel0";
			this->btnDel0->Size = System::Drawing::Size(36, 23);
			this->btnDel0->TabIndex = 9;
			this->btnDel0->Text = L"-";
			this->btnDel0->UseVisualStyleBackColor = true;
			this->btnDel0->Click += gcnew System::EventHandler(this, &frmAdvSearch::btnDel0_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(873, 107);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(75, 23);
			this->btnSearch->TabIndex = 10;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &frmAdvSearch::btnSearch_Click);
			// 
			// frmAdvSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(963, 664);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnDel0);
			this->Controls->Add(this->btnAdd0);
			this->Controls->Add(this->txtCondition0);
			this->Controls->Add(this->cmbField0);
			this->Controls->Add(this->ctrlBookDetails);
			this->Controls->Add(this->lvResults);
			this->Name = L"frmAdvSearch";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Library - Advanced Search";
			this->Load += gcnew System::EventHandler(this, &frmAdvSearch::frmAdvSearch_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdd0_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Add new ComboBox
				 ComboBox^ newCombo = gcnew ComboBox();

				 newCombo->FormattingEnabled = true;
				 newCombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Title", L"Author", L"Publisher"});
				 newCombo->Text = L"Title";
				 newCombo->Size = System::Drawing::Size(121, 21);
				 newCombo->TabIndex = 7;

				 newCombo->Name = String::Format("cmbField{0}", ArrayCombo->Count);
				 newCombo->Location = System::Drawing::Point(12, 12 + (2 * ArrayCombo->Count) + (newCombo->Size.Height * ArrayCombo->Count));

				 this->Controls->Add(newCombo);
				 ArrayCombo->Add(newCombo);

				 // Add new TextBox
				 TextBox^ newTextBox = gcnew TextBox();

				 newTextBox->Size = System::Drawing::Size(728, 20);
				 newTextBox->TabIndex = 8;

				 newTextBox->Location = System::Drawing::Point(139, 12 + (2 * ArrayTextBox->Count) + (newTextBox->Size.Height * ArrayTextBox->Count));
				 newTextBox->Name = String::Format("txtCondition{0}", ArrayTextBox->Count);

				 this->Controls->Add(newTextBox);
				 ArrayTextBox->Add(newTextBox);

				 //Add new btnAdd
				 Button^ newBtnAdd = gcnew Button();

				 newBtnAdd->Size = System::Drawing::Size(36, 23);
				 newBtnAdd->TabIndex = 9;
				 newBtnAdd->Text = L"+";
				 newBtnAdd->UseVisualStyleBackColor = true;
				 newBtnAdd->Click += gcnew System::EventHandler(this, &frmAdvSearch::btnAdd0_Click);

				 newBtnAdd->Location = System::Drawing::Point(873, 10 + (2 * ArrayAddButton->Count) + (newBtnAdd->Size.Height * ArrayAddButton->Count));

				 newBtnAdd->Name = String::Format("btnAdd{0}", ArrayAddButton->Count);

				 // Disable previous Add button
				 Button^ LastAddButton = (Button^) ArrayAddButton[ArrayAddButton->Count - 1];
				 LastAddButton->Enabled = false;

				 this->Controls->Add(newBtnAdd);
				 ArrayAddButton->Add(newBtnAdd);

				 // Add new btnDel
				 Button^ newBtnDel = gcnew Button();

				 newBtnDel->Size = System::Drawing::Size(36, 23);
				 newBtnDel->TabIndex = 9;
				 newBtnDel->Text = L"-";
				 newBtnDel->UseVisualStyleBackColor = true;
				 newBtnDel->Click += gcnew System::EventHandler(this, &frmAdvSearch::btnDel0_Click);

				 newBtnDel->Location = System::Drawing::Point(915, 10 + (2 * ArrayDelButton->Count) + (newBtnDel->Size.Height * ArrayDelButton->Count));

				 newBtnDel->Name = String::Format("btnDel{0}", ArrayDelButton->Count);
				 
				 this->Controls->Add(newBtnDel);
				 ArrayDelButton->Add(newBtnDel);
			 }
private: System::Void frmAdvSearch_Load(System::Object^  sender, System::EventArgs^  e) {
			 // Initialise ArrayLists
			 ArrayCombo = gcnew ArrayList();
			 ArrayTextBox = gcnew ArrayList();
			 ArrayAddButton = gcnew ArrayList();
			 ArrayDelButton = gcnew ArrayList();

			 // Add the already existing controls to the ArrayList
			 ArrayCombo->Add(cmbField0);
			 ArrayTextBox->Add(txtCondition0);
			 ArrayAddButton->Add(btnAdd0);
			 ArrayDelButton->Add(btnDel0);
		 }
private: System::Void btnDel0_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Controls->RemoveAt(this->Controls->Count - 1);
			 this->Controls->RemoveAt(this->Controls->Count - 1);
			 this->Controls->RemoveAt(this->Controls->Count - 1);
			 this->Controls->RemoveAt(this->Controls->Count - 1);

			 ArrayCombo->RemoveAt(ArrayCombo->Count - 1);
			 ArrayTextBox->RemoveAt(ArrayTextBox->Count - 1);
			 ArrayAddButton->RemoveAt(ArrayAddButton->Count - 1);
			 ArrayDelButton->RemoveAt(ArrayDelButton->Count - 1);

			 Button^ LastAddButton = (Button^)ArrayAddButton[ArrayAddButton->Count - 1];
			 LastAddButton->Enabled = true;
		 }
private: System::Void btnSearch_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ CommandText = "SELECT * FROM Books WHERE ";

			 int i;

			 ArrayList^ Conditions = gcnew ArrayList;

			 for (i = 0; i < ArrayCombo->Count; i++)
			 {
				 ComboBox^ cmb = (ComboBox^)ArrayCombo[i];
				 if (cmb->Text == "Title")
				 {
					 TextBox^ txt = (TextBox^)ArrayTextBox[i];
					 Conditions->Add("Title LIKE \"%" + txt->Text + "%\"");
				 }
				 if (cmb->Text == "Author")
				 {
					 TextBox^ txt = (TextBox^)ArrayTextBox[i];
					 Conditions->Add("Author LIKE \"%" + txt->Text + "%\"");
				 }
				 if (cmb->Text == "Publisher")
				 {
					 TextBox^ txt = (TextBox^)ArrayTextBox[i];
					 Conditions->Add("Publisher LIKE \"%" + txt->Text + "%\"");
				 }
			 }

			 CommandText = CommandText + Conditions[0]->ToString();

			 for (i = 1; i < Conditions->Count; i++)
			 {
				 CommandText = CommandText + " AND " + Conditions[i]->ToString();
			 }
			 MessageBox::Show(CommandText);
		 }
};
}
