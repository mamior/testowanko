#include <iostream>

using namespace std;

int n = 0, i; // liczba testow

int main(){
	// wczytanie liczby testow
	cout << "Prosze podac liczbe testow (n<100000): ";
	cin >> n;
	// sprawdzenie poprawnosci wpisanej liczby
	if ((n > 100000) || (n <= 0)) {
		cout << "podales za duza liczbe" << endl;
		exit(1);
	}
	// wczytanie liczb do sprawdzenia
	else{
		cout << "Prosze podac liczby do sprawdzenia: " << endl;
		int tablica[n] = {0};
		for (i = 0; i < n; ++i){
			cin >> tablica[i];			
		}
	// sprawdzenie czy liczba jest pierwsza + wypisanie wyniku
		int a, b, c;
		for (i = 0; i < n; ++i){
			a = tablica[i];
			for (c = 1, b = 0; c <= a; ++c){			
				if (a%c == 0) b++;
				if (b > 2 || a == 1) {
					cout << i+1 << ". NIE" << endl;
					break;
				}
			}
			if (b == 2) {
				cout << i+1 << ". TAK" << endl;
			}
		}
	}
	return 0;
}