/*
		Analyse:

1) Les sorties:
- Le coût total de l'achat (coutTotal)
2) Les entrées:
- Le nombre de disquettes achetées (nbrDisq)
- Membre du club Z (memClubZ)
3) Les données internes:
- Le prix de disquettes pour les petites comamndes (prixDisq) = 1,00 $/chaque
- Le prix de disquettes pour les commandes de 25 et plus (prixDisqSup) = 0.70  $/chaque
- Un rabais supplémentaire pour les membres du club Z (rabaisSup) = 0.02
4) Traitements:
- if (nbrDisq < 25) {

	coutTotal = 1,00 * nbrDisq

	}
  else {

  couTotal = 0.70 * nbrDisq

  }

  




  else if ( nbrDisq >= 25 && memClubZ == 'n') {

	coutTotal = 0.70 * nbrDisq
	}
  else {  // (nbrDisq >= 25 && memClubZ == 'o') 

	coutTotal = 0.70 * nbrDisq * rabaisSup
  }
