#include "StockReservation.h"

StockReservation::StockReservation()
{
}



void StockReservation::afficherReservation()
{
	for (int i = 0; i < ListeResa.size(); i++)
		{
			cout << "******************\n"<<ListeResa[i] << endl;
		}
		cout << "\n" << endl;
	
}

void StockReservation::AjouterReservation(Reservation reservation)
{
	ListeResa.push_back(reservation);

}


