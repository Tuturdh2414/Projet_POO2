#pragma once
#using <System.data.dll>
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
ref class tets
{
private: 
	SqlConnection^ connect;
public:
	tets();
	void action(String^ requeteSQL);
};

