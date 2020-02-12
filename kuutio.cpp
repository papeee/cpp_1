// Pasi Rautiainen - esimerkkiohjelma 2013
#include "pch.h"
#include <iostream>

using namespace std;

void kuution_koko()
//Seuraavassa esimerkiss‰ lasketaan k‰ytt‰j‰n antaman luvun kuution. 
//Luvun kuutio tarkoittaa luvun korottamista kolmanteen potenssiin eli luvun kertomista itsell‰‰n kolme kertaa.
{
	long luku;
	cout << endl;
	cout << "Laskemme k‰ytt‰j‰n antaman luvun kuution." << endl;
	do {//do-while poikkeaa while-lauseesta siin‰, ett‰ se toistetaan aina v‰hint‰‰n kerran.
		cout << "Anna luku jonka kuutio lasketaan (0=exit): ";

		cin >> luku;

		if (luku > 0) cout << "Luvun " << luku <<" kuutio on " << (luku * 3) << endl;

	} while (luku != 0);//Jos k‰ytt‰j‰ antaa luvun nolla, do-while -lauseen lopussa oleva vertailu on ep‰tosi,
	//ja toistolauseesta poistutaan. Jos taas k‰ytt‰j‰ antaa jonkin muun luvun kuin luvun nolla,
	//do-while -lauseesta ei poistuta, joten k‰ytt‰j‰ voi laskea lukujen kuutioita niin kauan kunnes antaa luvun nolla.
}

int main()
{
	kuution_koko();
}

//Ohjelman voisi toteuttaa myˆs siten, ett‰ korvaisi void funktion 
//funktiolla int kuution_koko(int sivu) joka palauttaisi vastauksen
//ja luku syˆtett‰isiin loopissa main - funktion sis‰ll‰