#include <pch.h>
#include <iostream>

using namespace std;

int main() {
	int varsta;
	string Nume;
	string Prenume;

	cout << "Introduceti varsta dumneavoastra: ";
	cin >> varsta;

	cout << "Introduceti numele dumneavoastra: ";
	cin >> Nume;

	cout << "Introduceti prenumele dumneavoastra: ";
	cin >> Prenume;

	cout << endl;
	cout << "Varsta dumneavoastra este: " << varsta << endl;
	cout << "Va numiti: " << Nume << " " << Prenume<<endl;
	return 0;
}