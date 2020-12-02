SET IDENTITY_INSERT [dbo].[Article] ON
INSERT INTO [dbo].[Article] ([reference], [nom], [quantite], [unite], [prix_coutant], [prix_HT], [taux_TVA], [variance], [couleur], [vente], [stock], [seuil_de_reaprovisionnement]) VALUES (2, N'jules', -1, N'6', 27, 9, 3, 9, N'noir', 7, 6, 7)
INSERT INTO [dbo].[Article] ([reference], [nom], [quantite], [unite], [prix_coutant], [prix_HT], [taux_TVA], [variance], [couleur], [vente], [stock], [seuil_de_reaprovisionnement]) VALUES (6, N'arthur', 1, N'2', 20, 4, 5, 6, N'jaune', 8, 9, 10)
INSERT INTO [dbo].[Article] ([reference], [nom], [quantite], [unite], [prix_coutant], [prix_HT], [taux_TVA], [variance], [couleur], [vente], [stock], [seuil_de_reaprovisionnement]) VALUES (8, N'leo', 2, N'55', 6, 2, 3, 8, N'noir', 4, 6, 4)
SET IDENTITY_INSERT [dbo].[Article] OFF
UPDATE Article
Set prix_coutant = prix_HT * taux_TVA,
quantite = stock - vente