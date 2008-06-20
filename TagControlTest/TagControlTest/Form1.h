#pragma once


namespace TagControlTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: TagCloud::TagCloudControl^  tagCloudControl1;
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
			this->tagCloudControl1 = (gcnew TagCloud::TagCloudControl());
			this->SuspendLayout();
			// 
			// tagCloudControl1
			// 
			this->tagCloudControl1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tagCloudControl1->Location = System::Drawing::Point(12, 12);
			this->tagCloudControl1->Name = L"tagCloudControl1";
			this->tagCloudControl1->Size = System::Drawing::Size(529, 230);
			this->tagCloudControl1->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(845, 329);
			this->Controls->Add(this->tagCloudControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 tagCloudControl1->Keywords = gcnew array<String^> { "hello", "robin timothy wilson long long long blah", "olivia", "test", "chaplaincy", "christian", "good", "craftyness", "great book"};
				 tagCloudControl1->Values = gcnew array<int> { 3, 10, 30, 15, 20, 5, 23, 35, 1 };
				 tagCloudControl1->UpdateFromArrays();
			 }
	};
}

