#include "tets.h"
#include <iostream>
tets::tets()
{
	String^ requeteSQL = "RIEN";
	String^ connexion = "Data Source = (LocalDB)\\MSSQLLocalDB;" +
		"Initial Catalog =BITE;" +
		"Integrated Security =True;" +
		"Connect Timeout =30;" +
		"Encrypt =False;" +
		"TrustServerCertificate =False;" +
		"ApplicationIntent =ReadWrite;" +
		"MultiSubnetFailover =False;" +
		"User ID=LAPTOP-4O077N3T\\arthu";
	connect = gcnew SqlConnection(connexion);
}
void tets::action(String^ requeteSQL)
{
	SqlCommand^ command = gcnew SqlCommand(requeteSQL, connect);
	connect->Open();
	command->ExecuteNonQuery();
	connect->Close();
}