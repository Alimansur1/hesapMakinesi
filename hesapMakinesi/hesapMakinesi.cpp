// hesapMakinesi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <windows.h>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);


	int sayi1 = 0;
	int sayi2 = 0;	
	int secim = 0;

	cout << "Lutfen islem yapmak istediginiz araci seciniz :" << endl << "1 = Toplama" << endl << "2 = Cikartma" << endl << "3 = Bolme" << endl << "4 = Carpma" << endl;
	cout << "Seciminiz : " << endl;
	cin >> secim;
	cout << "İlk sayiyi Giriniz :";
	cin >> sayi1;
	cout << "İkinci sayiyi giriniz : ";
	cin >> sayi2;

	switch (secim) {

	case 1:
		cout << "Sayilarin toplami :" << sayi1 + sayi2;
		break;
	case 2:
		cout << "Sayilarin Farki : " << sayi1 - sayi2;
		break;
	case 3:
		cout << "Sayilarin bolumu : " << sayi1 / sayi2;
		break;
	case 4:
		cout << "Sayilarin carpimi :" << sayi1 * sayi2;
		break;
	default:
		cout << "İşlem seçiniz : " << endl;
	}
	return 0;
}

