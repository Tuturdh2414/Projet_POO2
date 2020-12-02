#include "MyForm.h"
#include "Stock.h"
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
	Stock stocks;
	textBox1->Text = stocks.getreference();
	textBox2->Text = stocks.getnom();
	textBox3->Text = stocks.getquantite();
	textBox4->Text = stocks.getprix_HT();
	textBox5->Text = stocks.getseuil_de_reaprovisionement();
	textBox6->Text = stocks.gettaux_TVA();
}

void ProjetPOO::MyForm::afficher(int reference)
{
	Stock stocks;
	textBox1->Text = Convert::ToString(reference);
	textBox2->Text = stocks.getnom(reference);
	textBox3->Text = stocks.getquantite(reference);
	textBox4->Text = stocks.getprix_HT(reference);
	textBox5->Text = stocks.getseuil_de_reaprovisionement(reference);
	textBox6->Text = stocks.gettaux_TVA(reference);
}
