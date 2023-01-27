#include "Reservation.h"

Reservation::Reservation()
{
}

Reservation::Reservation(int NumReservationChambre, Client ClientHotel, Hotel InfoHotel, Chambre InfoChambre, Date DateDebutReserve, Date DateFinReserve)
{
	NumReservation = NumReservationChambre;
	client = ClientHotel;
	hotel = InfoHotel;
	chambre = InfoChambre;
	DateDebut = DateDebutReserve;
	DateFin = DateFinReserve;
	CalculPrix();
	setOccupe(true);
}

void Reservation::CalculPrix()
{
	
	int jour = DateFin._day - DateDebut._day;
	int prix = chambre.getPrix()*jour;
	cout << "Le prix de la chambre est : "<< prix <<"euros" << "  pour " << jour << " jours " << endl;
	
}

void Reservation::ModifierDate()
{
	int choix;
	bool dateCorrecte = false;
	cout << "souhaitez vous changer la date de debut ou de fin du sejour" << endl ;
	cout << "1---Date de Debut du séjour \t 2---Date de fin du sejour" << endl;
	cin >> choix;
	switch (choix) {
	case 1:
		do{
		cout << "Choisissez la nouvelle date de début du séjour" << endl;
		cout << "Mois" << endl;
		cin >> _month;
		cout << "Jour" << endl;
		cin >> _day;
		cout << "Annee" << endl;
		cin >> _year;
		} while (dateCorrecte = !true);
		DateDebut.modifierDate(_month, _day, _year);
		break;

	case 2:
		do{
			cout << "Choisissez la nouvelle date de fin du séjour" << endl;
		cout << "Mois" << endl;
		cin >> _month;
		cout << "Jour" << endl;
		cin >> _day;
		cout << "Annee" << endl;
		cin >> _year;
		dateCorrecte = isDate(_month, _day, _year);
		} while (dateCorrecte = !true);
		DateFin.modifierDate(_month, _day, _year);
		break;
	}
}

std::ostream& operator<<(std::ostream& os, const Reservation& ReserveCrea)
{
	os <<"\nNumero de la reservation " << ReserveCrea.NumReservation << "\nInformation du Client : \n" << ReserveCrea.client << "\n" << "Information de l'hotel \n: " << ReserveCrea.hotel << "\n" << "Information Chambre : \n" << ReserveCrea.chambre << "\n" << "Date de debut : " << ReserveCrea.DateDebut << "\nDate de Fin : " << ReserveCrea.DateFin  << endl;

	return os;
}