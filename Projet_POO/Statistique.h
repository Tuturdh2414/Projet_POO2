#pragma once
#include "tets.h"
#using <System.data.dll>
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
#include "CL_CAD.h"
ref class Statistique
{
private:
	tets test;
	CL_CAD^ BDD = gcnew CL_CAD;
	int ligne;
	String^ ID_Client;
public:
	String^ getID_Client();
	String^ Pagnier_Moyen();
	String^ Ca_mois();
	String^ Prod_sous_seuil();
	String^ Valeur_commercial_stock();
	String^ Valeur_achat_stock();
	String^ lesmoinsvendu();
	String^ lesplusvendu();
};

