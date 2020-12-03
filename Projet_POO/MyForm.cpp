#include "MyForm.h"
#include "Stock.h"
#include "tets.h"
#include "Changement.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::MyForm monFormulaire;//ATTENTION: ici testWin est le nom du projet. Vous devez l’adapter au nom de votre projet
	Application::Run(% monFormulaire);
}

void ProjetPOO::MyForm::afficher()
{
	Stock stocks(ligne);
	
	textBox1->Text = stocks.getreference();
	textBox2->Text = stocks.getnom();
	textBox3->Text = stocks.getquantite();
	textBox4->Text = stocks.getprix_HT();
	textBox5->Text = stocks.getseuil_de_reaprovisionement();
	textBox6->Text = stocks.gettaux_TVA();
	/*
	Changement changement(ligne);
	textBox7->Text = changement.getID();
	textBox8->Text = changement.getdate();
	textBox9->Text = changement.getreference();
	*/
	}

void ProjetPOO::MyForm::afficher(int reference, int ID)
{
	Stock stocks(ligne);
	textBox1->Text = Convert::ToString(reference);
	textBox2->Text = stocks.getnom(reference);
	textBox3->Text = stocks.getquantite(reference);
	textBox4->Text = stocks.getprix_HT(reference);
	textBox5->Text = stocks.getseuil_de_reaprovisionement(reference);
	textBox6->Text = stocks.gettaux_TVA(reference);
	/*
	Changement changement(ligne);
	textBox7->Text = Convert::ToString(ID);
	textBox8->Text = changement.getdate(ID);
	textBox9->Text = changement.getreference(ID);
	*/
}
void ProjetPOO::MyForm::ajouter()
{
	String^ requeteSQL;
	tets test;
	requeteSQL = "INSERT INTO Changement (date, reference) VALUES ('"+textBox13->Text+"', '"+textBox14->Text+"')";
	test.action(requeteSQL);
}

