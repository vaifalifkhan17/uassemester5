#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int Dewasa, Balita, Total1, Total2, Total3, Jumlahorangperhari;
	cout<< "Program menentukan jumlah biaya bantuan\n";
	cout << "\nMasukkan jumlah korban dewasa : ";
	cin >> Dewasa;
	cout << "\nMasukkan jumlah korban balita : ";
	cin >> Balita;
	cout << "--------------------------------";
	Jumlahorangperhari = Dewasa + Balita;
	if (Jumlahorangperhari > 5 )
	{
		cout << "\nOrangnya kebanyakan";
	}
	else
	{
	cout << "\nJumlah uang bantuan untuk dewasa : ";
	Total1 = Dewasa * 12000 * 30;
	cout << Total1 << " / Bulan";

	cout << "\n\nJumlah uang bantuan untuk balita : ";
	Total2 = Balita * 7000 * 30;
	cout << Total2  << " / Bulan";
	
	cout <<"\n\nJumlah dana bantuan dalam sebulan : ";
	Total3 = Total1+Total2;
	cout << Total3  << " / Bulan";
	}
	return 0;
}
