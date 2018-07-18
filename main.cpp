#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctime>
#include "etalase.cpp"
#include "kalkulator.cpp"

using namespace std;

int main()
{
	Mie mie;
	Botol botol;
	Hitung hitung;

	int jumlah, pilihan, harga;
	string barang;
	string bol;
   	time_t now = time(0);
    char* dt = ctime(&now);

    do{
		system("cls");
		cout <<"=====================================\n";
		cout <<"      Toko Mie Instan Karepmu\n";
		cout <<"=====================================\n";
		cout <<" Pilih Barang yang dibeli : \n";
		cout <<" 1. Mie Instan\n";
		cout <<" 2. Minuman Botol\n\n";
		cout <<" Pilihan : ";
		cin >> pilihan;

		cout <<"\n Banyak barang yang dibeli : ";
		cin >> jumlah;
		cout <<endl <<endl;

		switch(pilihan){
			case 1:
				barang = "Mie Instan";
				harga = mie.getHarga();
				break;
			case 2:
				barang = "Minuman Botol";
				harga = botol.getHarga();
				break;
			default :
				cout <<"Masukan Anda Salah !!!";
				exit(0);
		}
		hitung.set_values(jumlah, harga);

		system("cls");
		cout <<"|=======================================|\n";
		cout <<"|        Toko Mie Instan Karepmu        |\n";
		cout <<"|=======================================|\n";
		cout <<"| Tangal : "<<dt;
		cout <<"|---------------------------------------|"<<endl;
		cout <<"| Nama Barang      	| Jmlh 	|Harga 	|"<<endl;
		cout <<"| "<<barang<<"		| "<<jumlah<<"	| "<<harga<<"	| "<<endl;
		cout <<"|                                       |"<<endl;
		cout <<"|---------------------------------------|"<<endl;
		cout <<"| Total             : Rp	"<<hitung.smtr()<<endl;
		cout <<"|---------------------------------------|"<<endl;
		cout <<"|             TERIMA KASIH              |"<<endl;
		cout <<"|---------------------------------------|"<<endl;
		cout <<"\n\n Kembali ke Menu ?(Y/N)";
		cin >> bol;
	}while(bol == "Y" || bol == "y");

	getch();
	return 0;
}