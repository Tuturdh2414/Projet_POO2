UPDATE Article
Set prix_coutant = prix_HT * taux_TVA,
quantite = stock - vente
