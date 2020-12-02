#pragma once
#using <System.data.dll>
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
#include "CL_CAD.h"
ref class Changement
{
private:
	CL_CAD^ BDD = gcnew CL_CAD;
	int ligne;
	String^ table = "Changement";
	String^ entete0 = "ID";
	String^ entete1 = "date";
	String^ entete2 = "reference";

public: 

	Changement();
	Changement(int ligne);

	void ajouter(int ID, DateTime^ date, String^ reference);
	
	String^ getID();
	String^ getdate();
	String^ getreference();

	String^ getdate(int ID);
	String^ getreference(int ID);

	void  setdate(String^ date, int ID);
	void setreference(String^ reference, int ID);
	void supprimer(int ID);
};

