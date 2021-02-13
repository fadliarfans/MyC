#include<stdio.h>
#include<stdlib.h>

main(){
	int NIM[10]=2010501064;
	char notelp[14]="0214252345243"; 
	int usia[4]=18;
	char nohp[14]="085523538713";
	char Nama[25]="Fadli Arfans Hakim";
	char Namaalamat[100]="Perum. Kartika Wanasari Blok C2"; 
	printf("Selamat datang, Fadli Arfans Hakim ");
	getchar();
	system("cls");
	printf("Verifikasi data pribadi anda : ");
	printf("NIM     : %d ",NIM);
	printf("Nama    : %c ",Nama); 
	printf("Usia    : %d Tahun",usia); 
	printf("Alamat  : %c ",Namaalamat);
	printf("no hp   : %c ",nohp);
	printf("no telp : %c ",notelp);
}
