#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace ZedGraph;


namespace Library {

	/// <summary>
	/// Summary for frmFvsNFGraph
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class frmFvsNFGraph : public System::Windows::Forms::Form
	{
	public:
		frmFvsNFGraph(void)
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
		~frmFvsNFGraph()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  graph;
	protected: 

	protected: 
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->graph = (gcnew ZedGraph::ZedGraphControl());
			this->SuspendLayout();
			// 
			// graph
			// 
			this->graph->Location = System::Drawing::Point(12, 12);
			this->graph->Name = L"graph";
			this->graph->ScrollGrace = 0;
			this->graph->ScrollMaxX = 0;
			this->graph->ScrollMaxY = 0;
			this->graph->ScrollMaxY2 = 0;
			this->graph->ScrollMinX = 0;
			this->graph->ScrollMinY = 0;
			this->graph->ScrollMinY2 = 0;
			this->graph->Size = System::Drawing::Size(872, 406);
			this->graph->TabIndex = 0;
			// 
			// frmFvsNFGraph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 430);
			this->Controls->Add(this->graph);
			this->Name = L"frmFvsNFGraph";
			this->Text = L"frmFvsNFGraph";
			this->Load += gcnew System::EventHandler(this, &frmFvsNFGraph::frmFvsNFGraph_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmFvsNFGraph_Load(System::Object^  sender, System::EventArgs^  e) {
				 GraphPane^ pane = graph->GraphPane;

				 pane->Title->Text = "Test Pie Chart";

				 pane->Fill = gcnew Fill(Color::Red, Color::Blue);

				 pane->AddPieSlice(30.0, Color::Red, 0.0, "Robin");
				 pane->AddPieSlice(70.0, Color::Blue, 0.0, "Olivia");

				 pane->AxisChange();
			 }
	};
}
