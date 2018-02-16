#include <iostream>

using namespace std;

long int wynik = 1;
unsigned int liczba;
int dziesiatki = 0, jednosci = 0, ile_prob;
int main(){
	cout << "prosze podac ile testow [1...30]" << endl;
	cin >> ile_prob;
	if ((ile_prob > 30) || (ile_prob < 1)){
		cout << "Zla ilosc testow";
		exit(1); 
	}
	
	for (;ile_prob > 0; ile_prob--){
		cout << "prosze podac liczbe 'n' calkowita nieujemna:" << endl;
		cin >> liczba;
		// obliczanie n!
		for (int i = liczba; i > 1; i--){
			wynik *= i;		
		}
		cout << wynik << endl;
		jednosci = wynik % 10;
		dziesiatki = (wynik % 100)/10;
		cout << "liczba dziesiatek: " << dziesiatki << endl;
		cout << "liczba jednosci: " << jednosci << endl;
		cout << endl;
	}
	return 0;
}