#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TagCloud {

	/// <summary>
	/// Summary for TagCloudControl
	/// </summary>
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	public ref class TagCloudControl : public System::Windows::Forms::UserControl
	{
	public:
		TagCloudControl(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			ControlArray = gcnew ArrayList();
			//ControlArray->Add(llb0);

			Keywords = gcnew array<String^> { };
			Values = gcnew array<int> { };
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TagCloudControl()
		{
			if (components)
			{
				delete components;
			}
		}

	private: ArrayList^ ControlArray;
	private: System::Windows::Forms::LinkLabel^  llb0;
	private: int MinValue;
	private: int MaxValue;

	public: array<String^>^ Keywords;
	public: array<int>^ Values;

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
			this->llb0 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// llb0
			// 
			this->llb0->AutoSize = true;
			this->llb0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->llb0->LinkArea = System::Windows::Forms::LinkArea(0, 0);
			this->llb0->Location = System::Drawing::Point(405, 161);
			this->llb0->Name = L"llb0";
			this->llb0->Size = System::Drawing::Size(101, 55);
			this->llb0->TabIndex = 0;
			this->llb0->Text = L"test";
			// 
			// TagCloudControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->llb0);
			this->Name = L"TagCloudControl";
			this->Size = System::Drawing::Size(529, 230);
			this->Load += gcnew System::EventHandler(this, &TagCloudControl::TagCloudControl_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TagCloudControl::TagCloudControl_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TagCloudControl_Load(System::Object^  sender, System::EventArgs^  e) {
				 CalcMaxMin();
				 UpdateFromArrays();
			 }

	private: System::Void CalcMaxMin()
			 {
				 int i;
				 MinValue = Int32::MaxValue;
				 MaxValue = 0;
				 
				 for (i = 0; i < Values->Length; i++)
				 {
					 if (Values[i] < MinValue)
					 {
						 MinValue = Values[i];
					 }

					 if (Values[i] > MaxValue)
					 {
						 MaxValue = Values[i];
					 }
				 }
			 }

	public: System::Void UpdateFromArrays()
			{
				int i;

				

				// Location vars and consts
				int HorizSpacing = 3;
				int VertSpacing = 20;
				int StartX = 0;
				int StartBottomY = 50;
				int Rows;

				// Font size vars and consts
				float Percentage;
				int SmallestFontSize = 14;
				int LargestFontSize = 36;
				int FontSizeRange = LargestFontSize - SmallestFontSize;
				int FontSize;

				CalcMaxMin();

				int Range = MaxValue - MinValue;

				 for (i = 0; i < Keywords->Length; i++)
				 {
					LinkLabel^ newLinkLabel = gcnew LinkLabel();

					newLinkLabel->AutoSize = true;
					newLinkLabel->Name = String::Format("llb{0}", i);
					newLinkLabel->TabIndex = 0;
					newLinkLabel->TabStop = true;
					newLinkLabel->LinkArea = System::Windows::Forms::LinkArea(0, 0);
					newLinkLabel->Text = Keywords[i];

					newLinkLabel->BorderStyle = Windows::Forms::BorderStyle::FixedSingle;

					Percentage = ((float)Values[i] - (float)MinValue) / (float)Range;

					FontSize = SmallestFontSize + (Percentage * FontSizeRange);

					newLinkLabel->Font = gcnew Drawing::Font(FontFamily::GenericSansSerif, FontSize, FontStyle::Regular, GraphicsUnit::Pixel);


					this->Controls->Add(newLinkLabel);

					if (i == 0)
					{
						// If it's the first control just set the location because there is no previous control to refer
						// to
						newLinkLabel->Location = System::Drawing::Point(StartX, StartBottomY - newLinkLabel->Height);
						Rows = 1;
					}
					else
					{
						// Get last control info
						LinkLabel^ LastControl = (LinkLabel^)ControlArray[i-1];

						int LastSize = LastControl->Size.Width;
						int NewX = LastControl->Location.X + LastSize + HorizSpacing;
						int NewY = (Rows * StartBottomY) - newLinkLabel->Size.Height;

						if ((NewX + newLinkLabel->Size.Width) > this->Size.Width)
						{
							// NewX would send label off edge of control
							NewX = StartX;
							// Start a new row
							Rows++;
							NewY = (Rows * StartBottomY) - newLinkLabel->Size.Height;
						}

						// Set location for new control
						newLinkLabel->Location = System::Drawing::Point(NewX, NewY);
					}
					// Add controls to form and controls collection
					
					ControlArray->Add(newLinkLabel);
				 }
			}
	private: System::Void TagCloudControl_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				Graphics^ g = this->CreateGraphics();
				g->DrawLine(Pens::Red, 0, 50, this->Width, 50);
				//g->DrawLine(Pens::Blue, 0, 57, this->Width, 57);
			 }
};
}
