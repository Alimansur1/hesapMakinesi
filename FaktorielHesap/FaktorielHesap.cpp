
#include <iostream>
using namespace std;

int main()
{
	int sayi = 0;
	int faktoriel = 1;


	cout << "Sayi giriniz : ";
	cin >> sayi;

	for (int i = 1; i <= sayi; i++) {
		faktoriel *= i;

	}
	cout << "Sonuc : " << faktoriel << endl;




}

