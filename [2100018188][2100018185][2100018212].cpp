/*NAMA		: MAYLIESKA DIVALIANA SETIAWAN
KELAS		: D
NIM		: 2100018188
----------------------------
NAMA		: ADITYA ZAHRAN MAHESWARA SUDRAJAT
KELAS		: D
NIM		: 2100018212
----------------------------
NAMA		: ADNAN FAUZAN USMAN
KELAS		: D
NIM		: 2100018185
*/
#include <iostream>
#include <math.h>

using namespace std ;
int tambah(int x, int y){
	int hasil = x+y;cout<<endl;
	cout<<"HASILNYA = "<<hasil;
	return hasil;
}
int kurang(int x, int y){
	int hasil = x-y	;cout<<endl;
	cout<<"HASILNYA = "<<hasil;
	return hasil;
}
float bagi(float x, float y){
	float hasil = x/y	;cout<<endl;
	cout<<"HASILNYA = "<<hasil;
	return hasil;
}
int kali(int x, int y){
	int hasil = x*y	;cout<<endl;
	cout<<"HASILNYA = "<<hasil;	
	return hasil;
}


int main()
{
	int pilihan;
	float a, b;
	cout<<"SELAMAT DATANG DI PROGRAM KALKULATOR SEDERHANA"<<endl<<endl;
	cout<<"||====================================================||"<<endl;
	cout<<"||     SILAHKAN PILIH PERINTAH YANG ANDA INGINKAN     ||"<<endl;
	cout<<"||                                                    ||"<<endl;
	cout<<"||  1. Pertambahan ( + )                              ||"<<endl;
	cout<<"||  2. Pengurangan ( - )                              ||"<<endl;
	cout<<"||  3. Perkalian   ( x )                              ||"<<endl;
	cout<<"||  4. Pembagian   ( : )                              ||"<<endl;
	cout<<"||                                                    ||"<<endl;
	cout<<"||====================================================||"<<endl<<endl ;
	cout<<"MASUKAN PERINTAH YANG ANDA INGINKAN = " ;
	cin>>pilihan ;
	cout<<endl;
	
	if ((pilihan > 0) && (pilihan < 5)) {
		cout<<"Masukan nilai A = ";
		cin>>a;
		cout<<"Masukan nilai B = ";
		cin>>b;
	}
	
	if(pilihan == 1)
	{ 
		tambah(a,b);
	}
	else if(pilihan == 2)
	{ 
		kurang(a,b);
	}
	else if(pilihan == 3)
	{ 
		kali(a,b);
	}
	else if(pilihan == 4)
	{ 
		bagi(a,b);
	}
	else
	{
		cout<<"PILIHAN TIDAK ADA DI MENU" ;
		cout<<endl<<endl ;
	}
	return 0 ;
}
