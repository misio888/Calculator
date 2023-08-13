#pragma once
#include <cmath>
#define M_E 2.71828182845904523536
#define M_PI 3.14159265358979323846

namespace CalculatorUltimateByMisio {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			panel1->Hide();
			panel2->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ opcjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ naukowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wOknieToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lab2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;


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
		double FirstNum, SecondNum, Result;
		double FirstNum1, SecondNum1, Result1;
		char operation,operation1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ text2;

	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Button^ button61;
private: System::Windows::Forms::Button^ button60;
private: System::Windows::Forms::Button^ button59;
private: System::Windows::Forms::Button^ button58;
private: System::Windows::Forms::Button^ button57;
private: System::Windows::Forms::Button^ button56;
private: System::Windows::Forms::Button^ button55;
private: System::Windows::Forms::Button^ button54;
private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Label^ lab3;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Button^ button62;
private: System::Windows::Forms::Button^ button63;
private: System::Windows::Forms::Button^ button64;
private: System::Windows::Forms::Button^ button65;
private: System::Windows::Forms::Button^ button66;
private: System::Windows::Forms::Button^ button67;
private: System::Windows::Forms::Button^ button68;







	private: System::Windows::Forms::TextBox^ text1;

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->naukowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wOknieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lab2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->text1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->lab3 = (gcnew System::Windows::Forms::Label());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->text2 = (gcnew System::Windows::Forms::TextBox());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->opcjeToolStripMenuItem,
					this->widokToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(351, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// opcjeToolStripMenuItem
			// 
			this->opcjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->standardowyToolStripMenuItem,
					this->naukowyToolStripMenuItem
			});
			this->opcjeToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->opcjeToolStripMenuItem->Name = L"opcjeToolStripMenuItem";
			this->opcjeToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->opcjeToolStripMenuItem->Text = L"Kalkulator";
			this->opcjeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::opcjeToolStripMenuItem_Click);
			// 
			// standardowyToolStripMenuItem
			// 
			this->standardowyToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->standardowyToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->standardowyToolStripMenuItem->Name = L"standardowyToolStripMenuItem";
			this->standardowyToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->standardowyToolStripMenuItem->Text = L"Standardowy";
			this->standardowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardowyToolStripMenuItem_Click);
			// 
			// naukowyToolStripMenuItem
			// 
			this->naukowyToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->naukowyToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->naukowyToolStripMenuItem->Name = L"naukowyToolStripMenuItem";
			this->naukowyToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->naukowyToolStripMenuItem->Text = L"Naukowy";
			this->naukowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::naukowyToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->przypnijToolStripMenuItem,
					this->wOknieToolStripMenuItem
			});
			this->widokToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->przypnijToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::przypnijToolStripMenuItem_Click);
			// 
			// wOknieToolStripMenuItem
			// 
			this->wOknieToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(123)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(105)));
			this->wOknieToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->wOknieToolStripMenuItem->Name = L"wOknieToolStripMenuItem";
			this->wOknieToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->wOknieToolStripMenuItem->Text = L"W oknie";
			this->wOknieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::wOknieToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Subheading", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Standardowy";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// lab2
			// 
			this->lab2->AutoSize = true;
			this->lab2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lab2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lab2->ForeColor = System::Drawing::Color::White;
			this->lab2->Location = System::Drawing::Point(323, 43);
			this->lab2->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->lab2->Name = L"lab2";
			this->lab2->Size = System::Drawing::Size(0, 13);
			this->lab2->TabIndex = 2;
			this->lab2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(16, 74);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"%";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(97, 74);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"CE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(179, 73);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"C";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(261, 74);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"DEL";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(261, 103);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"÷";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(179, 102);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"²√";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(97, 103);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"x²";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(16, 102);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"¹/x";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(261, 132);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 14;
			this->button9->Text = L"x";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(179, 131);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 13;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			this->button10->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(97, 132);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 12;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			this->button11->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(16, 132);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 11;
			this->button12->Text = L"7";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			this->button12->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(261, 161);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 18;
			this->button13->Text = L"-";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(179, 160);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 17;
			this->button14->Text = L"6";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			this->button14->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(97, 161);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 16;
			this->button15->Text = L"5";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			this->button15->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(16, 161);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 15;
			this->button16->Text = L"4";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			this->button16->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(261, 190);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 22;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(179, 189);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 21;
			this->button18->Text = L"3";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			this->button18->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(97, 190);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 20;
			this->button19->Text = L"2";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			this->button19->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(16, 190);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 19;
			this->button20->Text = L"1";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click_1);
			this->button20->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(261, 219);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 26;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(179, 218);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 23);
			this->button22->TabIndex = 25;
			this->button22->Text = L",";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(97, 219);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 23);
			this->button23->TabIndex = 24;
			this->button23->Text = L"0";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->ForeColor = System::Drawing::Color::White;
			this->button24->Location = System::Drawing::Point(16, 219);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 23);
			this->button24->TabIndex = 23;
			this->button24->Text = L"±";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// text1
			// 
			this->text1->Location = System::Drawing::Point(127, 40);
			this->text1->MaxLength = 30;
			this->text1->Name = L"text1";
			this->text1->ReadOnly = true;
			this->text1->Size = System::Drawing::Size(194, 20);
			this->text1->TabIndex = 28;
			this->text1->Text = L"0";
			this->text1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->lab3);
			this->panel1->Controls->Add(this->button61);
			this->panel1->Controls->Add(this->button60);
			this->panel1->Controls->Add(this->button59);
			this->panel1->Controls->Add(this->button58);
			this->panel1->Controls->Add(this->button57);
			this->panel1->Controls->Add(this->button56);
			this->panel1->Controls->Add(this->button55);
			this->panel1->Controls->Add(this->button54);
			this->panel1->Controls->Add(this->button53);
			this->panel1->Controls->Add(this->button52);
			this->panel1->Controls->Add(this->button51);
			this->panel1->Controls->Add(this->button50);
			this->panel1->Controls->Add(this->button49);
			this->panel1->Controls->Add(this->text2);
			this->panel1->Controls->Add(this->button25);
			this->panel1->Controls->Add(this->button26);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->button29);
			this->panel1->Controls->Add(this->button30);
			this->panel1->Controls->Add(this->button31);
			this->panel1->Controls->Add(this->button32);
			this->panel1->Controls->Add(this->button33);
			this->panel1->Controls->Add(this->button34);
			this->panel1->Controls->Add(this->button35);
			this->panel1->Controls->Add(this->button36);
			this->panel1->Controls->Add(this->button37);
			this->panel1->Controls->Add(this->button38);
			this->panel1->Controls->Add(this->button39);
			this->panel1->Controls->Add(this->button40);
			this->panel1->Controls->Add(this->button41);
			this->panel1->Controls->Add(this->button42);
			this->panel1->Controls->Add(this->button43);
			this->panel1->Controls->Add(this->button44);
			this->panel1->Controls->Add(this->button45);
			this->panel1->Controls->Add(this->button46);
			this->panel1->Controls->Add(this->button47);
			this->panel1->Controls->Add(this->button48);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(363, 327);
			this->panel1->TabIndex = 29;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button62);
			this->panel2->Controls->Add(this->button63);
			this->panel2->Controls->Add(this->button64);
			this->panel2->Controls->Add(this->button65);
			this->panel2->Controls->Add(this->button66);
			this->panel2->Controls->Add(this->button67);
			this->panel2->Controls->Add(this->button68);
			this->panel2->Location = System::Drawing::Point(3, 68);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(71, 205);
			this->panel2->TabIndex = 70;
			// 
			// button62
			// 
			this->button62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button62->FlatAppearance->BorderSize = 0;
			this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button62->ForeColor = System::Drawing::Color::White;
			this->button62->Location = System::Drawing::Point(5, 6);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(60, 23);
			this->button62->TabIndex = 73;
			this->button62->Tag = L"";
			this->button62->Text = L"3nd";
			this->button62->UseVisualStyleBackColor = false;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::button62_Click);
			// 
			// button63
			// 
			this->button63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button63->FlatAppearance->BorderSize = 0;
			this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button63->ForeColor = System::Drawing::Color::White;
			this->button63->Location = System::Drawing::Point(5, 36);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(60, 23);
			this->button63->TabIndex = 72;
			this->button63->Text = L"x³";
			this->button63->UseVisualStyleBackColor = false;
			this->button63->Click += gcnew System::EventHandler(this, &MyForm::button63_Click);
			// 
			// button64
			// 
			this->button64->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button64->FlatAppearance->BorderSize = 0;
			this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button64->ForeColor = System::Drawing::Color::White;
			this->button64->Location = System::Drawing::Point(5, 66);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(60, 23);
			this->button64->TabIndex = 71;
			this->button64->Text = L"³√x";
			this->button64->UseVisualStyleBackColor = false;
			this->button64->Click += gcnew System::EventHandler(this, &MyForm::button64_Click);
			// 
			// button65
			// 
			this->button65->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button65->FlatAppearance->BorderSize = 0;
			this->button65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button65->ForeColor = System::Drawing::Color::White;
			this->button65->Location = System::Drawing::Point(5, 95);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(60, 23);
			this->button65->TabIndex = 70;
			this->button65->Text = L"y√x";
			this->button65->UseVisualStyleBackColor = false;
			this->button65->Click += gcnew System::EventHandler(this, &MyForm::button65_Click);
			// 
			// button66
			// 
			this->button66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button66->FlatAppearance->BorderSize = 0;
			this->button66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button66->ForeColor = System::Drawing::Color::White;
			this->button66->Location = System::Drawing::Point(5, 124);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(60, 21);
			this->button66->TabIndex = 69;
			this->button66->Text = L"2^x";
			this->button66->UseVisualStyleBackColor = false;
			this->button66->Click += gcnew System::EventHandler(this, &MyForm::button66_Click);
			// 
			// button67
			// 
			this->button67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button67->FlatAppearance->BorderSize = 0;
			this->button67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button67->ForeColor = System::Drawing::Color::White;
			this->button67->Location = System::Drawing::Point(5, 152);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(60, 22);
			this->button67->TabIndex = 68;
			this->button67->Text = L"logy x";
			this->button67->UseVisualStyleBackColor = false;
			this->button67->Click += gcnew System::EventHandler(this, &MyForm::button67_Click);
			// 
			// button68
			// 
			this->button68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button68->FlatAppearance->BorderSize = 0;
			this->button68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button68->ForeColor = System::Drawing::Color::White;
			this->button68->Location = System::Drawing::Point(5, 182);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(60, 23);
			this->button68->TabIndex = 67;
			this->button68->Text = L"e^x";
			this->button68->UseVisualStyleBackColor = false;
			this->button68->Click += gcnew System::EventHandler(this, &MyForm::button68_Click);
			// 
			// lab3
			// 
			this->lab3->AutoSize = true;
			this->lab3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lab3->Location = System::Drawing::Point(323, 17);
			this->lab3->Name = L"lab3";
			this->lab3->Size = System::Drawing::Size(0, 13);
			this->lab3->TabIndex = 69;
			// 
			// button61
			// 
			this->button61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button61->FlatAppearance->BorderSize = 0;
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button61->ForeColor = System::Drawing::Color::White;
			this->button61->Location = System::Drawing::Point(8, 45);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(60, 23);
			this->button61->TabIndex = 68;
			this->button61->Text = L"Trygonometria";
			this->button61->UseVisualStyleBackColor = false;
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button60->FlatAppearance->BorderSize = 0;
			this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button60->ForeColor = System::Drawing::Color::White;
			this->button60->Location = System::Drawing::Point(80, 45);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(60, 23);
			this->button60->TabIndex = 67;
			this->button60->Text = L"Funkcje";
			this->button60->UseVisualStyleBackColor = false;
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button59->FlatAppearance->BorderSize = 0;
			this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button59->ForeColor = System::Drawing::Color::White;
			this->button59->Location = System::Drawing::Point(8, 74);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(60, 23);
			this->button59->TabIndex = 66;
			this->button59->Tag = L"2^nd";
			this->button59->Text = L"2nd";
			this->button59->UseVisualStyleBackColor = false;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::button59_Click);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button58->FlatAppearance->BorderSize = 0;
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button58->ForeColor = System::Drawing::Color::White;
			this->button58->Location = System::Drawing::Point(8, 103);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(60, 25);
			this->button58->TabIndex = 65;
			this->button58->Text = L"x²";
			this->button58->UseVisualStyleBackColor = false;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button58_Click);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button57->FlatAppearance->BorderSize = 0;
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button57->ForeColor = System::Drawing::Color::White;
			this->button57->Location = System::Drawing::Point(8, 134);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(60, 23);
			this->button57->TabIndex = 64;
			this->button57->Text = L"²√x";
			this->button57->UseVisualStyleBackColor = false;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button56->FlatAppearance->BorderSize = 0;
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button56->ForeColor = System::Drawing::Color::White;
			this->button56->Location = System::Drawing::Point(8, 163);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(60, 23);
			this->button56->TabIndex = 63;
			this->button56->Text = L"x^y";
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button56_Click);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button55->FlatAppearance->BorderSize = 0;
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button55->ForeColor = System::Drawing::Color::White;
			this->button55->Location = System::Drawing::Point(8, 192);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(60, 21);
			this->button55->TabIndex = 62;
			this->button55->Text = L"10^x";
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button55_Click);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button54->FlatAppearance->BorderSize = 0;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button54->ForeColor = System::Drawing::Color::White;
			this->button54->Location = System::Drawing::Point(80, 74);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(60, 23);
			this->button54->TabIndex = 61;
			this->button54->Text = L"π";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button54_Click);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button53->FlatAppearance->BorderSize = 0;
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button53->ForeColor = System::Drawing::Color::White;
			this->button53->Location = System::Drawing::Point(8, 220);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(60, 22);
			this->button53->TabIndex = 60;
			this->button53->Text = L"log";
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::button53_Click);
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button52->FlatAppearance->BorderSize = 0;
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button52->ForeColor = System::Drawing::Color::White;
			this->button52->Location = System::Drawing::Point(8, 250);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(60, 23);
			this->button52->TabIndex = 59;
			this->button52->Text = L"ln";
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button51->FlatAppearance->BorderSize = 0;
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button51->ForeColor = System::Drawing::Color::White;
			this->button51->Location = System::Drawing::Point(146, 75);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(60, 23);
			this->button51->TabIndex = 58;
			this->button51->Text = L"e";
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button50->FlatAppearance->BorderSize = 0;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button50->ForeColor = System::Drawing::Color::White;
			this->button50->Location = System::Drawing::Point(212, 75);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(60, 23);
			this->button50->TabIndex = 57;
			this->button50->Text = L"C";
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button50_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button49->FlatAppearance->BorderSize = 0;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button49->ForeColor = System::Drawing::Color::White;
			this->button49->Location = System::Drawing::Point(279, 75);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(60, 23);
			this->button49->TabIndex = 56;
			this->button49->Text = L"DEL";
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button49_Click);
			// 
			// text2
			// 
			this->text2->Location = System::Drawing::Point(127, 13);
			this->text2->MaxLength = 30;
			this->text2->Name = L"text2";
			this->text2->ReadOnly = true;
			this->text2->Size = System::Drawing::Size(194, 20);
			this->text2->TabIndex = 55;
			this->text2->Text = L"0";
			this->text2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->ForeColor = System::Drawing::Color::White;
			this->button25->Location = System::Drawing::Point(279, 249);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(60, 23);
			this->button25->TabIndex = 54;
			this->button25->Text = L"=";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button26->ForeColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(212, 249);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(60, 23);
			this->button26->TabIndex = 53;
			this->button26->Text = L",";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button27->ForeColor = System::Drawing::Color::White;
			this->button27->Location = System::Drawing::Point(146, 250);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(60, 23);
			this->button27->TabIndex = 52;
			this->button27->Text = L"0";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button28->ForeColor = System::Drawing::Color::White;
			this->button28->Location = System::Drawing::Point(80, 250);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(60, 23);
			this->button28->TabIndex = 51;
			this->button28->Text = L"±";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button29->ForeColor = System::Drawing::Color::White;
			this->button29->Location = System::Drawing::Point(279, 221);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(60, 23);
			this->button29->TabIndex = 50;
			this->button29->Text = L"+";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button30->ForeColor = System::Drawing::Color::White;
			this->button30->Location = System::Drawing::Point(212, 220);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(60, 23);
			this->button30->TabIndex = 49;
			this->button30->Text = L"3";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button31->ForeColor = System::Drawing::Color::White;
			this->button31->Location = System::Drawing::Point(146, 220);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(60, 23);
			this->button31->TabIndex = 48;
			this->button31->Text = L"2";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button32->ForeColor = System::Drawing::Color::White;
			this->button32->Location = System::Drawing::Point(80, 220);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(60, 23);
			this->button32->TabIndex = 47;
			this->button32->Text = L"1";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button33->ForeColor = System::Drawing::Color::White;
			this->button33->Location = System::Drawing::Point(279, 192);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(60, 23);
			this->button33->TabIndex = 46;
			this->button33->Text = L"-";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button34->ForeColor = System::Drawing::Color::White;
			this->button34->Location = System::Drawing::Point(212, 192);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(60, 23);
			this->button34->TabIndex = 45;
			this->button34->Text = L"6";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button35->ForeColor = System::Drawing::Color::White;
			this->button35->Location = System::Drawing::Point(146, 192);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(60, 23);
			this->button35->TabIndex = 44;
			this->button35->Text = L"5";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button36->ForeColor = System::Drawing::Color::White;
			this->button36->Location = System::Drawing::Point(80, 192);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(60, 23);
			this->button36->TabIndex = 43;
			this->button36->Text = L"4";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button37->ForeColor = System::Drawing::Color::White;
			this->button37->Location = System::Drawing::Point(279, 163);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(60, 23);
			this->button37->TabIndex = 42;
			this->button37->Text = L"x";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button38->ForeColor = System::Drawing::Color::White;
			this->button38->Location = System::Drawing::Point(212, 163);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(60, 23);
			this->button38->TabIndex = 41;
			this->button38->Text = L"9";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button39->ForeColor = System::Drawing::Color::White;
			this->button39->Location = System::Drawing::Point(145, 163);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(61, 23);
			this->button39->TabIndex = 40;
			this->button39->Text = L"8";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button40->ForeColor = System::Drawing::Color::White;
			this->button40->Location = System::Drawing::Point(80, 163);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(60, 23);
			this->button40->TabIndex = 39;
			this->button40->Text = L"7";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button41->ForeColor = System::Drawing::Color::White;
			this->button41->Location = System::Drawing::Point(279, 134);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(60, 23);
			this->button41->TabIndex = 38;
			this->button41->Text = L"÷";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button42->ForeColor = System::Drawing::Color::White;
			this->button42->Location = System::Drawing::Point(212, 133);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(60, 23);
			this->button42->TabIndex = 37;
			this->button42->Text = L"n!";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button43->ForeColor = System::Drawing::Color::White;
			this->button43->Location = System::Drawing::Point(146, 133);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(60, 23);
			this->button43->TabIndex = 36;
			this->button43->Text = L")";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button44->ForeColor = System::Drawing::Color::White;
			this->button44->Location = System::Drawing::Point(80, 134);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(60, 23);
			this->button44->TabIndex = 35;
			this->button44->Text = L"(";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button45->FlatAppearance->BorderSize = 0;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button45->ForeColor = System::Drawing::Color::White;
			this->button45->Location = System::Drawing::Point(279, 105);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(60, 23);
			this->button45->TabIndex = 34;
			this->button45->Text = L"mod";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button46->FlatAppearance->BorderSize = 0;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button46->ForeColor = System::Drawing::Color::White;
			this->button46->Location = System::Drawing::Point(212, 104);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(60, 23);
			this->button46->TabIndex = 33;
			this->button46->Text = L"exp";
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button47->FlatAppearance->BorderSize = 0;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button47->ForeColor = System::Drawing::Color::White;
			this->button47->Location = System::Drawing::Point(146, 105);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(60, 23);
			this->button47->TabIndex = 32;
			this->button47->Text = L"|x|";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(92)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->button48->FlatAppearance->BorderSize = 0;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button48->ForeColor = System::Drawing::Color::White;
			this->button48->Location = System::Drawing::Point(80, 104);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(60, 23);
			this->button48->TabIndex = 31;
			this->button48->Text = L"¹/x";
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(323, 16);
			this->label2->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 30;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Subheading", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 23);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Naukowy";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(157)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->ClientSize = System::Drawing::Size(351, 311);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->text1);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lab2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(367, 350);
			this->MinimumSize = System::Drawing::Size(367, 292);
			this->Name = L"MyForm";
			this->Text = L"Kalkulator By Misio";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown_1);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void opcjeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void wOknieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
}
private: System::Void przypnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	text1->Text = "0";
	lab2->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text == "0") {
		text1->Text = "0";
		lab2->Text = "";
	}
	else if (text1->Text == "Niezdefiniowany") {
		text1->Text = "0";
	}
	else {
		text1->Text = ((String^)text1->Text)->Remove(text1->Text->Length - 1);
		if (text1->Text->Length == 0) {
			text1->Text = "0";
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	text1->Text = "0";
	lab2->Text = "";
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!text1->Text->Contains(",")) {
		text1->Text = text1->Text + ",";
	}
}
private: System::Void Sign(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum = Convert::ToDouble(text1->Text);
	text1->Text = "0";
	lab2->Text = "+";
	operation = '+';
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum = Convert::ToDouble(text1->Text);
	text1->Text = "0";
	lab2->Text = "-";
	operation = '-';
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum = Convert::ToDouble(text1->Text);
	text1->Text = "0";
	lab2->Text = "x";
	operation = '*';
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum = Convert::ToDouble(text1->Text);
	text1->Text = "0";
	lab2->Text = "÷";
	operation = '/';
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text == "Niezdefiniowany") {
		text1->Text = "0";
	}
	if (text1->Text == "Blad") {
		text1->Text = "0";
	}

		String^ Output;
		SecondNum = Convert::ToDouble(text1->Text);
		switch (operation) {
		case '+':
			Result = FirstNum + SecondNum;
			Output = System::Convert::ToString(Result);
			text1->Text = Output;
			lab2->Text = "";
			SecondNum = 0;
			break;
		case '-':
			Result = FirstNum - SecondNum;
			Output = System::Convert::ToString(Result);
			text1->Text = Output;
			lab2->Text = "";
			SecondNum = 0;
			break;
		case '*':
			Result = FirstNum * SecondNum;
			Output = System::Convert::ToString(Result);
			text1->Text = Output;
			lab2->Text = "";
			SecondNum = 0;
			break;

		case '/':
			if ((SecondNum == 0.0 )) {
				text1->Text = "Niezdefiniowany";
				lab2->Text = "";
				SecondNum = 0;
				break;
			}
			else {
				Result = FirstNum / SecondNum;
				Output = System::Convert::ToString(Result);
				text1->Text = Output;
				lab2->Text = "";
				break;
			}
		case '%':
			Result = fmod(FirstNum, SecondNum);
			text1->Text = Result.ToString();
			lab2->Text = "";
			break;
		}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum = Convert::ToDouble(text1->Text);
	text1->Text = "0";
	lab2->Text = "%";
	operation = '%';
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text != "0") {
		if (text1->Text->Contains("-")) {
			text1->Text = text1->Text->Remove(0, 1);
		}
		else {
			text1->Text = "-" + text1->Text;
		}
	}
	else {
		text1->Text = text1->Text;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text1->Text);
	Result = sqrt(Number1);
	text1->Text = Result.ToString();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text1-> Text);
	Result = Number1 * Number1;
	text1->Text = Result.ToString();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text1->Text);
	if (Number1 != 0) {
		Result = 1 / Number1;
		text1->Text = Result.ToString();
	}
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {

	if (text1->Text == "0") {
		text1->Text = "0";
	}
	else {
		text1->Text = text1->Text + "0";
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

	if (text1->Text == "0") {
		text1->Text = "3";
	}
	else {
		text1->Text = text1->Text + "3";
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text == "0") {
		text1->Text = "2";
	}
	else {
		text1->Text = text1->Text + "2";
	}
}
private: System::Void button20_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text == "0") {
		text1->Text = "1";
	}
	else {
		text1->Text = text1->Text + "1";
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text == "0") {
		text1->Text = "6";
	}
	else {
		text1->Text = text1->Text + "6";
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text == "0") {
		text1->Text = "5";
	}
	else {
		text1->Text = text1->Text + "5";
	}
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text == "0") {
		text1->Text = "4";
	}
	else {
		text1->Text = text1->Text + "4";
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text == "0") {
		text1->Text = "9";
	}
	else {
		text1->Text = text1->Text + "9";
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text == "0") {
		text1->Text = "8";
	}
	else {
		text1->Text = text1->Text + "8";
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text1->Text == "0") {
		text1->Text = "7";
	}
	else {
		text1->Text = text1->Text + "7";
	}
}
private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
}
private: System::Void MyForm_KeyDown_1(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::NumPad1 || e->KeyCode == Keys::D1) {
		button20->Focus();
		button20->PerformClick();
	}
	if (e->KeyCode == Keys::NumPad2 || e->KeyCode == Keys::D2) {
		button19->Focus();
		button19->PerformClick();
	}
	if (e->KeyCode == Keys::NumPad3 || e->KeyCode == Keys::D3) {
		button18->Focus();
		button18->PerformClick();
	}
	if (e->KeyCode == Keys::NumPad4 || e->KeyCode == Keys::D4) {
		button16->Focus();
		button16->PerformClick();
	}
	if (e->KeyCode == Keys::NumPad5 || e->KeyCode == Keys::D5) {
		button15->Focus();
		button15->PerformClick();
	}
	if (e->KeyCode == Keys::NumPad6 || e->KeyCode == Keys::D6) {
		button14->Focus();
		button14->PerformClick();
	}
	if (e->KeyCode == Keys::NumPad7 || e->KeyCode == Keys::D7) {
		button12->Focus();
		button12->PerformClick();
	}
	if (e->KeyCode == Keys::NumPad8 || e->KeyCode == Keys::D8) {
		button11->Focus();
		button11->PerformClick();
	}
	if (e->KeyCode == Keys::NumPad9 || e->KeyCode == Keys::D9) {
		button10->Focus();
		button10->PerformClick();
	}
	if (e->KeyCode == Keys::NumPad0 || e->KeyCode == Keys::D0) {
		button23->Focus();
		button23->PerformClick();
	}
	if (e->KeyCode == Keys::Add) {
		button17->Focus();
		button17->PerformClick();
	}
	if (e->KeyCode == Keys::Subtract) {
		button13->Focus();
		button13->PerformClick();
	}
	if (e->KeyCode == Keys::Multiply) {
		button9->Focus();
		button9->PerformClick();
	}
	if (e->KeyCode == Keys::Divide) {
		button5->Focus();
		button5->PerformClick();
	}
	if (e->KeyCode == Keys::Back) {
		button3->Focus();
		button3->PerformClick();
	}
	if (e->KeyCode == Keys::Delete) {
		button2->Focus();
		button2->PerformClick();
	}
	if (e->KeyCode == Keys::Enter) {
		
		button21->Focus();
		button21->PerformClick();
	}
}
private: System::Void standardowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
}
private: System::Void naukowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Show();
}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	if (Number1 != 0) {
		Result1 = 1 / Number1;
		text2->Text = Result1.ToString();
	}
}
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text != "0") {
		if (text2->Text->Contains("-")) {
			text2->Text = text2->Text->Remove(0, 1);
		}
	}
	else {
		text2->Text = text2->Text;
	}
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text != "0") {
		if (text2->Text->Contains("-")) {
			text2->Text = text2->Text->Remove(0, 1);
		}
		else {
			text2->Text = "-" + text2->Text;
		}
	}
	else {
		text2->Text = text2->Text;
	}
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	if(text2->Text == "0") {
		text2->Text = "1";
	}
	else{
		text2->Text = text2->Text + "1";
		}
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "2";
	}
	else {
		text2->Text = text2->Text + "2";
	}
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "3";
	}
	else {
		text2->Text = text2->Text + "3";
	}
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "4";
	}
	else {
		text2->Text = text2->Text + "4";
	}
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "5";
	}
	else {
		text2->Text = text2->Text + "5";
	}
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "6";
	}
	else {
		text2->Text = text2->Text + "6";
	}
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "7";
	}
	else {
		text2->Text = text2->Text + "7";
	}
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "8";
	}
	else {
		text2->Text = text2->Text + "8";
	}
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "9";
	}
	else {
		text2->Text = text2->Text + "9";
	}
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "0";
	}
	else {
		text2->Text = text2->Text + "0";
	}
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!text2->Text->Contains(",")) {
		text2->Text = text2->Text + ",";
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum1 = Convert::ToDouble(text2->Text);
	text2->Text = "0";
	lab3->Text = "+";
	operation1 = '+';
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum1 = Convert::ToDouble(text2->Text);
	text2->Text = "0";
	lab3->Text = "-";
	operation1 = '-';
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum1 = Convert::ToDouble(text2->Text);
	text2->Text = "0";
	lab3->Text = "x";
	operation1 = '*';
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum1 = Convert::ToDouble(text2->Text);
	text2->Text = "0";
	lab3->Text = "÷";
	operation1 = '/';
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum1 = Convert::ToDouble(text2->Text);
	text2->Text = "0";
	lab3->Text = "%";
	operation1 = '%';
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "Niezdefiniowany") {
		text2->Text = "0";
	}
	if (text2->Text == "Blad") {
		text2->Text = "0";
	}

	String^ Output;
	SecondNum1 = Convert::ToDouble(text2->Text);
	switch (operation1) {
	case '+':
		Result1 = FirstNum1 + SecondNum1;
		Output = System::Convert::ToString(Result1);
		text2->Text = Output;
		lab3->Text = "";
		SecondNum1 = 0;
		break;
	case '-':
		Result1 = FirstNum1 - SecondNum1;
		Output = System::Convert::ToString(Result1);
		text2->Text = Output;
		lab3->Text = "";
		SecondNum1 = 0;
		break;
	case '*':
		Result1 = FirstNum1 * SecondNum1;
		Output = System::Convert::ToString(Result1);
		text2->Text = Output;
		lab3->Text = "";
		SecondNum1 = 0;
		break;
	case '/':
		if ((SecondNum1 == 0.0)) {
			text2->Text = "Niezdefiniowany";
			lab3->Text = "";
			SecondNum1 = 0;
			break;
		}
		else {
			Result1 = FirstNum1 / SecondNum1;
			Output = System::Convert::ToString(Result1);
			text2->Text = Output;
			lab3->Text = "";
			break;
		}
	case '%':
		Result1 = fmod(FirstNum1,SecondNum1);
		text2->Text = Result1.ToString();
		lab3->Text= "";
		break;
	case '^':
		Result1 = pow(FirstNum1,SecondNum1);
		Output = System::Convert::ToString(Result1);
		text2->Text = Output;
		lab3->Text = "";
		SecondNum1 = 0;
		break;
	case 'p':
		Result1 = pow(SecondNum1, 1/double(FirstNum1));
		Output = System::Convert::ToString(Result1);
		text2->Text = Output;
		lab3->Text = "";
		SecondNum1 = 0;
		break;
	case 'l':
		Result1 = log2(SecondNum1)/ log2(FirstNum1);
		Output = System::Convert::ToString(Result1);
		text2->Text = Output;
		lab3->Text = "";
		SecondNum1 = 0;
		break;
	}
}
private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
	text2->Text = "0";
	lab3->Text = "";
}
private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "0";
		lab3->Text = "";
	}
	else if (text2->Text == "Niezdefiniowany") {
		text2->Text = "0";
	}
	else {
		text2->Text = ((String^)text2->Text)->Remove(text2->Text->Length - 1);
		if (text2->Text->Length == 0) {
			text2->Text = "0";
		}
	}
}
private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Show();
}
private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	Result1 = Number1 * Number1;
	text2->Text = Result1.ToString();
}
private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	Result1 = sqrt(Number1);
	text2->Text = Result1.ToString();
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = "(";
	}
	else {
		text2->Text = text2->Text + "(";
	}
}
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
	if (text2->Text == "0") {
		text2->Text = ")";
	}
	else {
		text2->Text = text2->Text + ")";
	}
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	Result1 = exp(Number1)/Number1;
	text2->Text = Result1.ToString();
}
private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
	Result1 = M_E;
	text2->Text = Result1.ToString();
}
private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
	Result1 = M_PI;
	text2->Text = Result1.ToString();
}
private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	Result1 = log10(Number1);
	text2->Text = Result1.ToString();
}
private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	Result1 = log(Number1);
	text2->Text = Result1.ToString();
}
private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	Result1 = pow(10,Number1);
	text2->Text = Result1.ToString();
}
private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum1 = Convert::ToDouble(text2->Text);
	text2->Text = "0";
	lab3->Text = "^";
	operation1 = '^';
}
private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide();
}
private: System::Void button63_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	Result1 = Number1 * Number1 * Number1;
	text2->Text = Result1.ToString();
}
private: System::Void button64_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	Result1 = pow(Number1,1/double(3));
	text2->Text = Result1.ToString();
}
private: System::Void button65_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum1 = Convert::ToDouble(text2->Text);
	text2->Text = "0";
	lab3->Text = "v-";
	operation1 = 'p';
}
private: System::Void button66_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	Result1 = pow(2,Number1);
	text2->Text = Result1.ToString();
}
private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
	FirstNum1 = Convert::ToDouble(text2->Text);
	text2->Text = "0";
	lab3->Text = "log";
	operation1 = 'l';
}
private: System::Void button68_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = Double::Parse(text2->Text);
	Result1 = pow(M_E, Number1);
	text2->Text = Result1.ToString();
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
	double Number1 = double::Parse(text2->Text);
	double Silnia =1;
	for (int i = Number1; i>=1; i--) {
		Silnia *= i;}
	Result1 = Silnia;
	text2->Text = Result1.ToString();
}
};
}
