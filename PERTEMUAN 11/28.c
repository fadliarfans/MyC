#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

struct{
	char nama[20];
	char alamat[20];
	float gaji;
}pegawai1;

main(){
	char g[15];
	float gj;
	system("cls");
	printf("Nama Pegawai 1   : ");
	gets(pegawai1.nama);
	printf("Alamat Pegawai 1 : ");
	gets(pegawai1.alamat);
	printf("Gaji pegawai 1   : ");
	gets(g);
	gj = atof(g);    // atof itu berguna untuk mengkonert char menjadi float
	pegawai1.gaji = gj;
	printf("Data yang teleh anda ketikan : \n\n");
	printf("%s    %s    %.2f",pegawai1.nama,pegawai1.alamat,pegawai1.gaji);
}


