// Pasi Rautiainen - esimerkkiohjelma 2013
//Seuraavassa esimerkissä lasketaan käyttäjän antaman luvun kuutio. 
//Luvun kuutio tarkoittaa luvun korottamista kolmanteen potenssiin eli luvun kertomista itsellään kolme kertaa.
#include <iostream>

using namespace std;

void kuutio()
{
	long luku;
	cout << endl;
	cout << "Laskemme käyttäjän antaman luvun kuution." << endl;
	do {//do-while poikkeaa while-lauseesta siinä, että se toistetaan aina vähintään kerran.
		cout << "Anna luku jonka kuutio lasketaan (0=exit): ";

		cin >> luku;

		if (luku > 0) cout << "Luvun " << luku <<" kuutio on " << (luku * luku * luku) << endl;
		//voi käyttää myös pow-funktiota potenssilaskuissa

	} while (luku != 0);//Jos käyttäjä antaa luvun nolla, do-while -lauseen lopussa oleva vertailu on epätosi,
	//ja toistolauseesta poistutaan. Jos taas käyttäjä antaa jonkin muun luvun kuin luvun nolla,
	//do-while -lauseesta ei poistuta, joten käyttäjä voi laskea lukujen kuutioita niin kauan kunnes antaa luvun nolla.
}

int main()
{
	kuutio();
}

//Ohjelman voisi toteuttaa myös siten, että korvataisi void funktion 
//funktiolla int kuutio(int sivu) joka palauttaisi vastauksen
//ja luku syötettäisiin loopissa main - funktion sisällä
