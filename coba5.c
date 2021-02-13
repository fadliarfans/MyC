#include<stdio.h>
#include<stdlib.h>

int main(){
	int NIM;
	char notelp [14]; 
	int usia;
	char nohp[14];
	char Nama[25];
	char Namaalamat[100]; 
	printf("Isikan data dibawah ini sesuai data anda \n");
	printf("Nama    : ");       scanf("%[^\n]%*c",&Nama); 
	printf("NIM     : ");    	scanf("%d",&NIM);
	printf("Usia    : ");    	scanf("%d",&usia);
	printf("Alamat  : ");    	scanf("%s",&Namaalamat);
	printf("no hp   : ");    	scanf("%s",&nohp);
	printf("no telp : ");    	scanf("%s",&notelp);
	getch();
	system("cls");
	printf("Selamat datang, %s \n\n\n",Nama);
	getch();
	system("cls");
	printf("Verifikasi data pribadi anda : \n\n");
	printf("NIM     : %d \n",NIM);
	printf("Nama    : %s \n",Nama);
	
	printf("Usia    : %d Tahun\n",usia); 
	printf("Alamat  : %s \n",Namaalamat);
	printf("no hp   : %s \n",nohp);
	printf("no telp : %s \n",notelp);
	return 0;

}
