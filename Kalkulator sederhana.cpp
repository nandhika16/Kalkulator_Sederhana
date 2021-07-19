#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <math.h>
#include <cmath>

/* run this program using the console pauser or add your own getch, system ( "Pause" ) or input loop */
// Putu Nandhika Pratama Artana
//UPN VETERAN JAWA TIMUR


using namespace std;
int main(int argc, char**argv){
	float x,y,hasil,pilih;
	
	system("cls");
	cout<<"\t\t======================================\n"<<endl;
	cout<<"\t\t ------- KALKULATOR SEDERHANA -------- "<<endl<<endl;
	cout<<"\t\t======================================"<<endl;
	
	kalkulator :
	//operator perhitungan 
	cout<<"Operator perhitungan: "<<endl;
	string jumlah = "(1) penjumlahan (+)";
	cout<<jumlah<<endl;
	string pengurangan = "(2) pengurangan (-)";
	cout<<pengurangan<<endl;
	string perkalian = "(3) perkalian (*)";
	cout<<perkalian<<endl;
	string pembagian = "(4) pembagian (/)";
	cout<<pembagian<<endl;
	
	// Mulai menghitung angka yang akan dimasukkan
	cout<<"//---------------------------//\n";
	cout<<" Masukkan angka A = ";
	cin>>x;
	cout<<" Masukkan angka B = ";
	cin>>y;
	cout<<"//---------------------------//\n";
	
	int z; //Pilih Oprasi yang akan di gunakan
	cout<<" Pilih operator perhitungan= ";
	cin>>z;
	cout<<"//---------------------------//\n";
	
	if(z==1)
	{
		hasil=x+y;
		cout<<"Hasil perjumlahan ="<<hasil<<endl;
	}
	else if(z==2)
	{
		hasil=x-y;
		cout<<"Hasil pengurangan ="<<hasil<<endl;
	}
	else if(z==3)
	{
		hasil=x*y;
		cout<<"Hasil perkalian ="<<hasil<<endl;
	}
	else if(z==4)
	{
		hasil=x/y;
		cout<<"Hasil pembagian ="<<hasil<<endl;
	}
	
	cout<<"\n===========================\n";
	cout<<"* Coba lagi [1]"<<endl;
	cout<<"* Keluar [2]"<<endl;
	cout<<"===========================\n";
	
	cout<<"Masukkan Pilihan :";
	cin>>pilih;
	if (pilih==1){
		cout<<"\n";
		goto kalkulator;
	}
	if (pilih==2){
		system( "cls" );
		
	cout<<"\t\t===================================================";
	cout<<"\n \t\t   Terima Kasih Telah Menggunakan Kalkulator Ini"<<endl;
	cout<<"\t\t===================================================";
	
	cout<<"\n \t\t\t Putu Nandhika Pratama Artana"<<endl<<endl;
	cout<<"\t           Teknik Informatika UPN VETERAN JAWA TIMUR"<<endl<<endl;
	cout<<"\t\t                  19081010143"<<endl;
	cout<<"\n\t		  OM SANTHI SANTHI SANTHI OM"<<endl<<endl;
	
	system( "pause" );
	}
return 0;
}


// TERIMA KASIH SUDAH MAMPIR KE PROGRAM SAYA!
