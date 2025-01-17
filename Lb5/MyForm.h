#pragma once

namespace Lb5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ колірToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ текстToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ червонийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зеленийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ синійToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ фонToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ червнийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ зеленийToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ синійToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ червонийToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ синійToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ зеленийToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ червонийToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ зеленийToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ синійToolStripMenuItem3;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->колірToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->текстToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->червонийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синійToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->фонToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->червнийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленийToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синійToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->червонийToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синійToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленийToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->червонийToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зеленийToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синійToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Linen;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->колірToolStripMenuItem,
					this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(944, 53);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// колірToolStripMenuItem
			// 
			this->колірToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->текстToolStripMenuItem,
					this->фонToolStripMenuItem
			});
			this->колірToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->колірToolStripMenuItem->Name = L"колірToolStripMenuItem";
			this->колірToolStripMenuItem->Size = System::Drawing::Size(126, 49);
			this->колірToolStripMenuItem->Text = L"Колір";
			// 
			// текстToolStripMenuItem
			// 
			this->текстToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->червонийToolStripMenuItem,
					this->зеленийToolStripMenuItem, this->синійToolStripMenuItem
			});
			this->текстToolStripMenuItem->Name = L"текстToolStripMenuItem";
			this->текстToolStripMenuItem->Size = System::Drawing::Size(246, 54);
			this->текстToolStripMenuItem->Text = L"Текст";
			// 
			// червонийToolStripMenuItem
			// 
			this->червонийToolStripMenuItem->Name = L"червонийToolStripMenuItem";
			this->червонийToolStripMenuItem->Size = System::Drawing::Size(321, 54);
			this->червонийToolStripMenuItem->Text = L"Червоний ";
			this->червонийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::червонийToolStripMenuItem_Click);
			// 
			// зеленийToolStripMenuItem
			// 
			this->зеленийToolStripMenuItem->Name = L"зеленийToolStripMenuItem";
			this->зеленийToolStripMenuItem->Size = System::Drawing::Size(321, 54);
			this->зеленийToolStripMenuItem->Text = L"Зелений";
			this->зеленийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зеленийToolStripMenuItem_Click);
			// 
			// синійToolStripMenuItem
			// 
			this->синійToolStripMenuItem->Name = L"синійToolStripMenuItem";
			this->синійToolStripMenuItem->Size = System::Drawing::Size(321, 54);
			this->синійToolStripMenuItem->Text = L"Синій";
			this->синійToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::синійToolStripMenuItem_Click);
			// 
			// фонToolStripMenuItem
			// 
			this->фонToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->червнийToolStripMenuItem,
					this->зеленийToolStripMenuItem1, this->синійToolStripMenuItem1
			});
			this->фонToolStripMenuItem->Name = L"фонToolStripMenuItem";
			this->фонToolStripMenuItem->Size = System::Drawing::Size(246, 54);
			this->фонToolStripMenuItem->Text = L"Фон";
			// 
			// червнийToolStripMenuItem
			// 
			this->червнийToolStripMenuItem->Name = L"червнийToolStripMenuItem";
			this->червнийToolStripMenuItem->Size = System::Drawing::Size(293, 54);
			this->червнийToolStripMenuItem->Text = L"Червний";
			this->червнийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::червнийToolStripMenuItem_Click);
			// 
			// зеленийToolStripMenuItem1
			// 
			this->зеленийToolStripMenuItem1->Name = L"зеленийToolStripMenuItem1";
			this->зеленийToolStripMenuItem1->Size = System::Drawing::Size(293, 54);
			this->зеленийToolStripMenuItem1->Text = L"Зелений";
			this->зеленийToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::зеленийToolStripMenuItem1_Click);
			// 
			// синійToolStripMenuItem1
			// 
			this->синійToolStripMenuItem1->Name = L"синійToolStripMenuItem1";
			this->синійToolStripMenuItem1->Size = System::Drawing::Size(293, 54);
			this->синійToolStripMenuItem1->Text = L"Синій";
			this->синійToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::синійToolStripMenuItem1_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(127, 49);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вихідToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->червонийToolStripMenuItem1,
					this->синійToolStripMenuItem2, this->зеленийToolStripMenuItem2
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(217, 136);
			// 
			// червонийToolStripMenuItem1
			// 
			this->червонийToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.125F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->червонийToolStripMenuItem1->Name = L"червонийToolStripMenuItem1";
			this->червонийToolStripMenuItem1->Size = System::Drawing::Size(216, 44);
			this->червонийToolStripMenuItem1->Text = L"Червоний";
			this->червонийToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::червонийToolStripMenuItem1_Click);
			// 
			// синійToolStripMenuItem2
			// 
			this->синійToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->синійToolStripMenuItem2->Name = L"синійToolStripMenuItem2";
			this->синійToolStripMenuItem2->Size = System::Drawing::Size(216, 44);
			this->синійToolStripMenuItem2->Text = L"Синій ";
			this->синійToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::синійToolStripMenuItem2_Click);
			// 
			// зеленийToolStripMenuItem2
			// 
			this->зеленийToolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.125F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->зеленийToolStripMenuItem2->Name = L"зеленийToolStripMenuItem2";
			this->зеленийToolStripMenuItem2->Size = System::Drawing::Size(216, 44);
			this->зеленийToolStripMenuItem2->Text = L"Зелений";
			this->зеленийToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::зеленийToolStripMenuItem2_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->червонийToolStripMenuItem2,
					this->зеленийToolStripMenuItem3, this->синійToolStripMenuItem3
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(220, 136);
			// 
			// червонийToolStripMenuItem2
			// 
			this->червонийToolStripMenuItem2->Name = L"червонийToolStripMenuItem2";
			this->червонийToolStripMenuItem2->Size = System::Drawing::Size(219, 44);
			this->червонийToolStripMenuItem2->Text = L"Червоний";
			this->червонийToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::червонийToolStripMenuItem2_Click);
			// 
			// зеленийToolStripMenuItem3
			// 
			this->зеленийToolStripMenuItem3->Name = L"зеленийToolStripMenuItem3";
			this->зеленийToolStripMenuItem3->Size = System::Drawing::Size(219, 44);
			this->зеленийToolStripMenuItem3->Text = L"Зелений";
			this->зеленийToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::зеленийToolStripMenuItem3_Click);
			// 
			// синійToolStripMenuItem3
			// 
			this->синійToolStripMenuItem3->Name = L"синійToolStripMenuItem3";
			this->синійToolStripMenuItem3->Size = System::Drawing::Size(219, 44);
			this->синійToolStripMenuItem3->Text = L"Синій";
			this->синійToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::синійToolStripMenuItem3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ContextMenuStrip = this->contextMenuStrip1;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.125F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(82, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(781, 152);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Лабораторна робота № 5\r\nТЕМА: Microsoft Visual C++. Конструювання головного \r\nта "
				L"контекстного меню\r\nМЕТА: навчитися створювати меню";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(944, 666);
			this->ContextMenuStrip = this->contextMenuStrip2;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Лабораторна робота №5";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void червонийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::DarkRed;
	}
private: System::Void зеленийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::OliveDrab;
}
private: System::Void синійToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::SteelBlue;
}
private: System::Void червнийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::DarkRed;
}
private: System::Void зеленийToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::OliveDrab;
}
private: System::Void синійToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::SteelBlue;
}
private: System::Void червонийToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::DarkRed;
}
private: System::Void синійToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::SteelBlue;
}
private: System::Void зеленийToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::OliveDrab;
}
private: System::Void червонийToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::DarkRed;
}
private: System::Void зеленийToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::OliveDrab;
}
private: System::Void синійToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::SteelBlue;
}
private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Black;
	BackColor = Color::SeaShell;
}
};
}
