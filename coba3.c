#include<stdio.h>
#include<stdlib.h>

main(){
	int NIM;
	char notelp [14]; 
	int usia;
	char nohp [14];
	char Nama[25];
	char Namaalamat[100]; 
	printf("Isikan data dibawah ini sesuai data anda \n");
	
    printf("NIM     : ");     
	scanf("%i",&NIM);
	
	printf("Usia    : ");     
	scanf("%i",&usia);
	printf("Alamat  : ");    
	 scanf("%s",&Namaalamat);
	printf("no hp   : ");     
	scanf("%s",&nohp);
	printf("no telp : ");     
	scanf("%s",&notelp);
	system("cls");
	printf("Selamat datang, %s \n\n\n",Nama);
	printf("Verifikasi data pribadi anda : \n\n");
	printf("NIM     : %i \n",NIM);
 	printf("Nama    : "); 

    printf("\n");
	printf("Usia    : %i Tahun\n",usia); 
	printf("Alamat  : %s \n",Namaalamat);
	printf("no hp   : %s \n",nohp);
	printf("no telp : %s \n",notelp);

}
