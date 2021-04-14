#pragma once

namespace Clock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CLock
	/// </summary>
	public ref class CLock : public System::Windows::Forms::Form
	{
	public:
		CLock(void)
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
		~CLock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 78));
			this->label1->Location = System::Drawing::Point(59, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(410, 148);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &CLock::timer1_Tick);
			// 
			// CLock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(546, 384);
			this->Controls->Add(this->label1);
			this->Name = L"CLock";
			this->Text = L"CLock";
			this->Load += gcnew System::EventHandler(this, &CLock::CLock_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CLock_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();
		
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = (System::Convert::ToString(DateTime::Now))->Remove(0, 10);
	}
	};
}
