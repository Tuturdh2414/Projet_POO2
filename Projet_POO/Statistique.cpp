#include "Statistique.h"
#include "tets.h"
String^ Statistique::getID_Client()
{
	return BDD->select(ligne, 0);
}
String^ Statistique::Pagnier_Moyen() 
{
	String^ requeteSQL;
	requeteSQL = "SELECT AVG(montant_Total_TTC) FROM Commande";
	return requeteSQL;
}
String^ Statistique::Ca_mois()
{
	String^ requeteSQL;
	requeteSQL = "SELECT ";
	return requeteSQL;

}
String^ Statistique::Prod_sous_seuil()
{
	String^ requeteSQL;
	requeteSQL = "SELECT reference,nom FROM Article WHERE stock < seuil_de_reaprovisionnement";
	return requeteSQL;
}
String^ Statistique::Valeur_commercial_stock()
{
	String^ requeteSQL;
	requeteSQL = "SELECT SUM((prix_coutant + taux_TVA)*stock) FROM Article";
	return requeteSQL;
}
String^ Statistique::Valeur_achat_stock()
{
	String^ requeteSQL;
	requeteSQL = "SELECT SUM((prix_HT + taux_TVA)*stock) FROM Article";
	return requeteSQL;
}
String^ Statistique::lesmoinsvendu()
{
	String^ requeteSQL;
	requeteSQL = "SELECT vente, MIN(reference) FROM Article GROUP BY vente ORDER BY vente";
	return requeteSQL;
}
String^ Statistique::lesplusvendu()
{
	String^ requeteSQL;
	requeteSQL = "SELECT vente, MAX(reference) FROM Article GROUP BY vente ORDER BY vente";
	test.action(requeteSQL);
	
}