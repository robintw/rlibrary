#pragma once

#include "GlobalConnection.h"
#include "frmAddBook.h"
#include "frmSimpleSearch.h"
#include "frmAdvSearch.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Library {

	/// <summary>
	/// Summary for frmMain
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnSimpleSearch;
	private: System::Windows::Forms::Button^  btnAdvSearch;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSimpleSearch = (gcnew System::Windows::Forms::Button());
			this->btnAdvSearch = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(109, 317);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(118, 54);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"Add Book";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &frmMain::btnAdd_Click);
			// 
			// btnSimpleSearch
			// 
			this->btnSimpleSearch->Location = System::Drawing::Point(233, 317);
			this->btnSimpleSearch->Name = L"btnSimpleSearch";
			this->btnSimpleSearch->Size = System::Drawing::Size(118, 54);
			this->btnSimpleSearch->TabIndex = 1;
			this->btnSimpleSearch->Text = L"Simple Search";
			this->btnSimpleSearch->UseVisualStyleBackColor = true;
			this->btnSimpleSearch->Click += gcnew System::EventHandler(this, &frmMain::btnSimpleSearch_Click);
			// 
			// btnAdvSearch
			// 
			this->btnAdvSearch->Location = System::Drawing::Point(357, 317);
			this->btnAdvSearch->Name = L"btnAdvSearch";
			this->btnAdvSearch->Size = System::Drawing::Size(118, 54);
			this->btnAdvSearch->TabIndex = 1;
			this->btnAdvSearch->Text = L"Advanced Search";
			this->btnAdvSearch->UseVisualStyleBackColor = true;
			this->btnAdvSearch->Click += gcnew System::EventHandler(this, &frmMain::btnAdvSearch_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(77, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(431, 264);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 417);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnAdvSearch);
			this->Controls->Add(this->btnSimpleSearch);
			this->Controls->Add(this->btnAdd);
			this->Name = L"frmMain";
			this->Text = L"Library";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmAddBook^ frm = gcnew frmAddBook();
				 frm->Show();
			 }
	private: System::Void frmMain_Load(System::Object^  sender, System::EventArgs^  e) {
				 GlobalConnection::OpenConnection();
			 }
	private: System::Void btnSimpleSearch_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmSimpleSearch^ frm = gcnew frmSimpleSearch();
				 frm->Show();
			 }
	private: System::Void btnAdvSearch_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmAdvSearch^ frm = gcnew frmAdvSearch();
				 frm->Show();
			 }
};
}
