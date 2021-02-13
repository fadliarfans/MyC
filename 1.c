#include<stdio.h>

main(){

char a[10],b[20],c[3],d[20],e[15],f[15];

printf("Masukan NIM    : ");
scanf("%s",&a);
printf("Masukan Nama   : ");
scanf("%s",&b);
printf("Masukan Usia   : ");
scanf("%s",&c);
printf("Masukan Alamat : ");
scanf("%s",&d);
printf("Masukan NO Hp  : ");
scanf("%s",&e);
printf("No telp        : ");
scanf("%s",&f);
printf("Tekan Enter jika data sudah benar ... \n");
getch();

printf("|----------------------------------------------------------------------------|\n");
printf("|     NIM      |   NAMA      | Usia | Alamat |   No HP       |   no telp     |\n");
printf("-----------------------------------------------------------------------------|\n");
printf("|  %-12s|  %-11s|  %-4s| %-7s| %-14s| %-14s|\n",a,b,c,d,e,f);
printf("-----------------------------------------------------------------------------");





	
}
