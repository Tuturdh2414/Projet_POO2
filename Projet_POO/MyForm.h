#pragma once
#include "CL_CAD.h"
#include "Stock.h"
#include "Changement.h"
#include "tets.h"
#include<iostream>

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: int NBligne;
	private: System::Windows::Forms::DataGridView^ AdresseTable;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ supp;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;


		   CL_CAD BDD;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			/*NBligne = BDD.NB("Changement");
			if (NBligne > 0)
			{
				afficher();
			}*/
			
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::ComponentModel::IContainer^ components;
	protected:
	private: int ligne = 0;
	private:
	private: void afficher();
		   void afficher(int reference, int ID);
	private: void ajouter();
	//private: void ajouter(String^, int reference);
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->supp = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(28, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(28, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(28, 108);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(28, 156);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(28, 202);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(28, 252);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 6;
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(28, 293);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 8;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(28, 339);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 9;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(28, 387);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 10;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(28, 415);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 11;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(28, 454);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 12;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(28, 490);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(187, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(187, 99);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(187, 144);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"ajouter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(187, 191);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 17;
			this->button4->Text = L"supprimer ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(187, 237);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 18;
			this->button5->Text = L"modifier";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(187, 281);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 19;
			this->button6->Text = L"afficher";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(167, 315);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(158, 70);
			this->button7->TabIndex = 20;
			this->button7->Text = L"ajouter_changement";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// supp
			// 
			this->supp->Location = System::Drawing::Point(187, 396);
			this->supp->Name = L"supp";
			this->supp->Size = System::Drawing::Size(113, 61);
			this->supp->TabIndex = 21;
			this->supp->Text = L"supprchangee";
			this->supp->UseVisualStyleBackColor = true;
			this->supp->Click += gcnew System::EventHandler(this, &MyForm::suppr_change);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(187, 483);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(126, 36);
			this->button8->TabIndex = 22;
			this->button8->Text = L"ajoute change";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(227, 575);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 23;
			this->button9->Text = L"test";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 540);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 17);
			this->label1->TabIndex = 24;
			this->label1->Text = L"essai";
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(61, 4);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(28, 575);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 26;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(28, 604);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 655);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->supp);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (ligne < NBligne -1) {
			ligne -= 1;
		}
		else {
			ligne = 0;
		}
		afficher();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ligne > 0) {
		ligne -= 1;
	}
	else {
		ligne = NBligne - 1 ;
	}
	afficher();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Stock stock;
		stock.ajouter(Convert::ToString(textBox2->Text), Convert::ToString(textBox3->Text), Convert::ToString(textBox4->Text), Convert::ToString(textBox5->Text), Convert::ToString(textBox6->Text));
		NBligne += 1;
		//afficher(BDD.MaxID("Article", "reference"));
		//ligne = NBligne - 1;

	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Stock stock;
		stock.supprimer(Convert::ToInt32(textBox1->Text));
		ligne -= 1;
		NBligne -= 1;
		afficher();
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Convert::ToString(textBox1->Text) != "") {
		Stock stock(ligne);
		if (Convert::ToString(textBox2->Text) != "") {
			stock.setnom(Convert::ToString(textBox2->Text), Convert::ToInt32(textBox1->Text));
		}
		if (Convert::ToString(textBox3->Text) != "") {
			stock.setquantite(Convert::ToString(textBox3->Text), Convert::ToInt32(textBox1->Text));
		}
		if (Convert::ToString(textBox4->Text) != "") {
			stock.setprix_HT(Convert::ToString(textBox4->Text), Convert::ToInt32(textBox1->Text));
		}
		if (Convert::ToString(textBox5->Text) != "") {
			stock.setseuil_de_reaprovisionement(Convert::ToString(textBox5->Text), Convert::ToInt32(textBox1->Text));
		}
		if (Convert::ToString(textBox6->Text) != "") {
			stock.settaux_TVA(Convert::ToString(textBox6->Text), Convert::ToInt32(textBox1->Text));
		}
	}
}


private: System::Void suppr_change(System::Object^ sender, System::EventArgs^ e) {
	Changement change;
	change.supprimer(Convert::ToInt32(textBox7->Text));
	ligne -= 1;
	NBligne -= 1;
	afficher();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Changement change;
	change.ajouter(Convert::ToInt32(textBox10->Text),Convert::ToDateTime(textBox11->Text), Convert::ToString(textBox12->Text));
	NBligne += 1;
	//afficher(BDD.MaxID("Changement", "ID"));
	//ligne = NBligne - 1;
}
	   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	ajouter();

}
};
}
