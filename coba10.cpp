#include<iostream>    // untuk input output 
#include <windows.h>  // untuk warna                         //kegunaan library di program ini
#include <stdlib.h>   
#include <time.h>     // untuk srand;

using namespace std;

int main(){
	int i,j,k,t,tinggi,kolom,baris;
	char a='A';
	int random = rand()%16;      // variable yang berisi angka random dari 0-15 karena bilangan apapun yang di modulo 16 hasilnya akan diantara(inklusif) 0 sampai 15
	kolom=0;
	
	srand(time(0));     // untuk mengatur sagar setiap program diulang angka acaknya akan berbeda lagi
	
	cin>>tinggi;
	cin>>baris;
	
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);   // untuk mengatur penggantian warna

		
  	
  for(t=0;t<baris;t++){
  	kolom++;
  	a--;
   for(i=0;i<tinggi;i++){
	for(k=0;k<kolom;k++)
	{
		for(j=tinggi+1;j>i;j--)
			cout<<" ";
		for(j=0;j<i;j++)
			cout<<a;
		for(j=0;j<i-1;j++)
			cout<<a;
		for(j=tinggi+1;j>i;j--)
			cout<<" ";
		random = rand()%16;                       // untuk memasukan kembali angka acak
		SetConsoleTextAttribute(color, random);   // untuk mengganti warna
	}
	cout<<endl;
	a++;
   }
	
	for(k=0;k<kolom;k++){
	 cout<<" ";
       	for(i=0;i<tinggi*2-1;i++)
		 cout<<"*";
	 cout<<" ";	 
     random = rand()%16;
     SetConsoleTextAttribute(color, random);
	}
    
    cout<<endl;
    
   for(i=0;i<tinggi-1;i++){
	for(k=0;k<kolom;k++)
	{
		for(j=0;j<i+2;j++)
			cout<<" ";
		for(j=tinggi-1;j>i;j--)
			cout<<a;
		for(j=tinggi-2;j>i;j--)
			cout<<a;
		for(j=0;j<i+2;j++)
			cout<<" ";
		random = rand()%16;
		SetConsoleTextAttribute(color, random);
	}
	a++;
	cout<<endl;
   }
   a-=(tinggi*2)-2;             // agar huruf yang ditampilkan tidak melewati batas tabel ASCII
  }
	
}
