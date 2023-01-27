#include "Chambre.h"


Chambre::Chambre()
{
}

Chambre::Chambre(int NumChambre, string TypeChambre, int PrixChambre , bool OccupationChambre)
{
	Numero = NumChambre;
	Type = TypeChambre;
	Prix = PrixChambre;
	Occupe = OccupationChambre;
}



void Chambre::getChambre()
{
	cout << "Chambre numero : " << Numero << "\n Type : " << Type << "\n Prix : " << Prix << " euros" << "Possibilité de réservation : " << endl;
}

int Chambre::getNumero()
{
	return Numero;
}

string Chambre::getType()
{
	return Type;
}

int Chambre::getPrix()
{
	return Prix;
}

bool Chambre::getOccupe()
{
	return Occupe;
}

int Chambre::setPrixChambre()
{
	int NouveauPrix =0;
	cout << "choisissez le nouveau prix de la chambre" << endl;
	cin >> NouveauPrix;
	Prix = NouveauPrix;
	return Prix;
}

void Chambre::setOccupe(bool Occupe)
{
	Occupe = true;
}


std::ostream& operator<<(std::ostream& os, const Chambre& ChambreCrea)
{
	if (ChambreCrea.Occupe == false){
	os << "Numero de la chambre : " << ChambreCrea.Numero << "\n" << "Type : " << ChambreCrea.Type << "\n" << "Prix : " << ChambreCrea.Prix << " euros" << "\nStatus : Libre" << "\n";}
	if(ChambreCrea.Occupe == true) {
		os << "Numero de la chambre : " << ChambreCrea.Numero << "\n" << "Type : " << ChambreCrea.Type << "\n" << "Prix : " << ChambreCrea.Prix << " euros" << "\nStatus : Occupe" << "\n";
	}
	return os;
}