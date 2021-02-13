#include<stdio.h>

main(){

char nim[10],nama[20],usia[3],alamat[20],nohp[15],notelp[15];

printf("Masukan NIM    : ");
scanf("%s",&nim);
printf("Masukan Nama   : ");
scanf("%s",&nama);
printf("Masukan Usia   : ");
scanf("%s",&usia);
printf("Masukan Alamat : ");
scanf("%s",&alamat);
printf("Masukan NO Hp  : ");
scanf("%s",&nohp);
printf("No telp        : ");
scanf("%s",&notelp);
printf("\n\n");
printf("Tekan Enter jika data sudah benar ... \n\n");
getch();

printf("|----------------------------------------------------------------------------|\n");
printf("|     NIM      |   NAMA      | Usia | Alamat |   No HP       |   no telp     |\n");
printf("-----------------------------------------------------------------------------|\n");
printf("|  %-12s|  %-11s|  %-4s| %-7s| %-14s| %-14s|\n",nim,nama,usia,alamat,nohp,notelp);
printf("------------------------------------------------------------------------------");





	
}
