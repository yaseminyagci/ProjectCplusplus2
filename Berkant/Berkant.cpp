// Berkant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double satir, sutun;
	cout << "Satir....: ";
	cin >> satir;
	//Sat�r i�in girilen de�erin 5 ve 15 aras�nda olmas� i�in while d�ng�s� kullan�yoruz. 
	while (satir < 5 || satir > 15)
	{
		cout << "satir numarasi hatali... Tekrar Deneyin...\n";
		cout << "Satir....: ";
		cin >> satir;
	}
	cout << "Sutun....: ";
	cin >> sutun;
	//Sutun i�in girilen de�erin 5 ve 40 aras�nda olmas� i�in while d�ng�s� kullan�yoruz. 
	while ((sutun < 5 || sutun > 40))
	{
		cout << "Sutun numarasi hatali... Tekrar Deneyin...\n";
		cout << "Sutun....: ";
		cin >> sutun;
	}
	//Sat�r ve s�tun aras�ndaki iki kat kural� burada yaz�lm��t�r.Do while d�ng�s� ile ko�ul kontrol ediliyor.
	while (sutun / satir != 2){
		cout << "Lutfen sutun satirin 2 kati olsun!!!\n";
		cout << "Satir....: ";
		cin >> satir;
		//Tekrar sutun kontrol� yap�l�yor.
		while (satir < 5 || satir > 15)
		{
			cout << "satir numarasi hatali... Tekrar Deneyin...\n";
			cout << "Satir....: ";
			cin >> satir;
		}
		cout << "Sutun....: ";
		cin >> sutun;
		//Tekrardan sat�r kontrol� yap�l�yor.
		while (sutun < 5 || sutun > 40)
		{
			cout << "Sutun numarasi hatali... Tekrar Deneyin...\n";
			cout << "Sutun....: ";
			cin >> sutun;
		}
	}
	//Ko�ul k�sm�

	//Ko�ul sa�land���nda sat�r� burada d�nd�rd�k...
	for (int i = satir; i >= 0; i--)
		{
			//Sutunu burada d�nd�rd�k
			for (int j = sutun; j >= 0; j--)
			{
				//Etraf�ndaki kare i�in yazm�� oldu�um ko�ul
				if (i == 0 || j == 0 || j == sutun || i == satir) {
					cout << "*";
				}
				//�lk k�s�m ters indi�inden dolay� i ve j leri d���rerek j==i olan veya j+i sutun say�s�n� veren k�s�mlara * yazd�rd���m�z ko�ul yeri... 
				else if (j == i || (j + i) == sutun) {
					cout << "*";
				}
				else
					cout << " ";
			}
		cout << "\n";
		}
			cout << "\n\n";
			//Burada ise ter olan k�s� yapmak i�in sat�r sutun d�ng�s� kurduk 
		for (int i = 0; i < satir + 1; i++)
		{
			//Suutun ko�ulu burada i ve j olanlar� artt�rarak bi �sttekinin tersini alm�� olduk
			for (int j = 0; j < sutun + 1; j++)
			{
				//D�� kare i�in yazd���m ko�ul
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
	







