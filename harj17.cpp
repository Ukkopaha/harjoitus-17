/***********************************************
* Paulus Linna
* IIA14SB
* Harjoitus 17
*
* Teht‰v‰kuvaus:
*
*	Muokkaa edellist‰ ohjelmaa siten, ett‰ edell‰ m‰‰ritelty‰ tietuetyyppi‰
*	k‰ytet‰‰n my‰s kahden muun "koululaisen" tietojen tallentamiseen.
*	N‰iden kahden muun koululaisen tiedot alustetaan ao. muuttujien
*	m‰‰rittelyn yhteydess‰. Ainoastaan yhden koululaisen tiedot kysyt‰‰n
*	k‰ytt‰j‰lt‰ edellisen teht‰v‰n tapaan.
*
*	Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
*	suuruusj‰rjestyksess‰ (pienimm‰st‰ suurimpaan) n‰yt‰lle
*
* P‰iv‰m‰‰r‰: 13.11.2014
* Versio 1.0
************************************************/


#include <iostream>
using namespace std;

struct tiedot
{
	char etunimi[30];
	int kengannro;
	char sukunimi[20];
	float koulumatka;
	char osoite[30];
	int postinro;
};

const int MAX_TAULU = 5;
void main()
{
	tiedot hlo1;
	tiedot hlo2 = { "Seppo", 44, "Raty", 26, "Keihaskuja 120", 53000 };
	tiedot hlo3 = { "Matti", 43, "Nykanen", 6, "Hyppytie 3", 20620 };
	

	cout << "Anna kaikki etunimesi: ";
	cin.get(hlo1.etunimi, 30);

	cout << "Anna kengannumerosi: ";
	cin >> hlo1.kengannro;

	cout << "Anna sukunimesi: ";
	cin >> hlo1.sukunimi;

	cout << "Anna koulumatkasi: ";
	cin >> hlo1.koulumatka;

	cout << "Anna osoitteesi: ";
	cin.get();
	cin.get(hlo1.osoite, 30);

	cout << "Anna postinumerosi: ";
	cin >> hlo1.postinro;

	if (hlo1.koulumatka < hlo3.koulumatka)
	{
		cout << endl << hlo1.sukunimi << " " << hlo1.etunimi;
		cout << endl << hlo1.osoite;
		cout << endl << hlo1.postinro;
		cout << endl << hlo1.kengannro << " " << hlo1.koulumatka;
		cout << endl;
		cout << endl << hlo3.sukunimi << " " << hlo3.etunimi;
		cout << endl << hlo3.osoite;
		cout << endl << hlo3.postinro;
		cout << endl << hlo3.kengannro << " " << hlo3.koulumatka;
		cout << endl;
		cout << endl << hlo2.sukunimi << " " << hlo2.etunimi;
		cout << endl << hlo2.osoite;
		cout << endl << hlo2.postinro;
		cout << endl << hlo2.kengannro << " " << hlo2.koulumatka;
	}
	if (hlo1.koulumatka > hlo2.koulumatka)
	{
		cout << endl << hlo3.sukunimi << " " << hlo3.etunimi;
		cout << endl << hlo3.osoite;
		cout << endl << hlo3.postinro;
		cout << endl << hlo3.kengannro << " " << hlo3.koulumatka;
		cout << endl;
		cout << endl << hlo2.sukunimi << " " << hlo2.etunimi;
		cout << endl << hlo2.osoite;
		cout << endl << hlo2.postinro;
		cout << endl << hlo2.kengannro << " " << hlo2.koulumatka;
		cout << endl;
		cout << endl << hlo1.sukunimi << " " << hlo1.etunimi;
		cout << endl << hlo1.osoite;
		cout << endl << hlo1.postinro;
		cout << endl << hlo1.kengannro << " " << hlo1.koulumatka;

	}
	if(hlo1.koulumatka < hlo2.koulumatka && hlo1.koulumatka > hlo3.koulumatka) {
		cout << endl << hlo3.sukunimi << " " << hlo3.etunimi;
		cout << endl << hlo3.osoite;
		cout << endl << hlo3.postinro;
		cout << endl << hlo3.kengannro << " " << hlo3.koulumatka;
		cout << endl;
		cout << endl << hlo1.sukunimi << " " << hlo1.etunimi;
		cout << endl << hlo1.osoite;
		cout << endl << hlo1.postinro;
		cout << endl << hlo1.kengannro << " " << hlo1.koulumatka;
		cout << endl;
		cout << endl << hlo2.sukunimi << " " << hlo2.etunimi;
		cout << endl << hlo2.osoite;
		cout << endl << hlo2.postinro;
		cout << endl << hlo2.kengannro << " " << hlo2.koulumatka;
	}
	


}