// Berkant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double satir, sutun;
	cout << "Satir....: ";
	cin >> satir;
	//Satýr için girilen deðerin 5 ve 15 arasýnda olmasý için while döngüsü kullanýyoruz. 
	while (satir < 5 || satir > 15)
	{
		cout << "satir numarasi hatali... Tekrar Deneyin...\n";
		cout << "Satir....: ";
		cin >> satir;
	}
	cout << "Sutun....: ";
	cin >> sutun;
	//Sutun için girilen deðerin 5 ve 40 arasýnda olmasý için while döngüsü kullanýyoruz. 
	while ((sutun < 5 || sutun > 40))
	{
		cout << "Sutun numarasi hatali... Tekrar Deneyin...\n";
		cout << "Sutun....: ";
		cin >> sutun;
	}
	//Satýr ve sütun arasýndaki iki kat kuralý burada yazýlmýþtýr.Do while döngüsü ile koþul kontrol ediliyor.
	while (sutun / satir != 2){
		cout << "Lutfen sutun satirin 2 kati olsun!!!\n";
		cout << "Satir....: ";
		cin >> satir;
		//Tekrar sutun kontrolü yapýlýyor.
		while (satir < 5 || satir > 15)
		{
			cout << "satir numarasi hatali... Tekrar Deneyin...\n";
			cout << "Satir....: ";
			cin >> satir;
		}
		cout << "Sutun....: ";
		cin >> sutun;
		//Tekrardan satýr kontrolü yapýlýyor.
		while (sutun < 5 || sutun > 40)
		{
			cout << "Sutun numarasi hatali... Tekrar Deneyin...\n";
			cout << "Sutun....: ";
			cin >> sutun;
		}
	}
	//Koþul kýsmý

	//Koþul saðlandýðýnda satýrý burada döndürdük...
	for (int i = satir; i >= 0; i--)
		{
			//Sutunu burada döndürdük
			for (int j = sutun; j >= 0; j--)
			{
				//Etrafýndaki kare için yazmýþ olduðum koþul
				if (i == 0 || j == 0 || j == sutun || i == satir) {
					cout << "*";
				}
				//Ýlk kýsým ters indiðinden dolayý i ve j leri düþürerek j==i olan veya j+i sutun sayýsýný veren kýsýmlara * yazdýrdýðýmýz koþul yeri... 
				else if (j == i || (j + i) == sutun) {
					cout << "*";
				}
				else
					cout << " ";
			}
		cout << "\n";
		}
			cout << "\n\n";
			//Burada ise ter olan kýsý yapmak için satýr sutun döngüsü kurduk 
		for (int i = 0; i < satir + 1; i++)
		{
			//Suutun koþulu burada i ve j olanlarý arttýrarak bi üsttekinin tersini almýþ olduk
			for (int j = 0; j < sutun + 1; j++)
			{
				//Dýþ kare için yazdýðým koþul
				if (i == 0 || j == 0 || j == sutun || i == satir) {
					cout << "*";
				}
				else if (j == i || (j + i) == sutun) {
					cout << "*";
				}
				else
					cout << " ";
			}
			cout << "\n";
		}
		cout << "\n\n";
	}
	







