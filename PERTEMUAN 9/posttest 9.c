#include<stdio.h>
#include<conio.h>

char nim[100][12];
nama[100][25];
int usia[100];
char alamat[100][20];
char nohp[100][15];
char notelp[100][15];

int jumlahdata(){
	int x;
	printf("Masukan jumlah data : ");
	scanf("%d",&x);
	return x;
}

void ln(){
  printf("|------------------------------------------------------------------------------|\n");
}

void inputdata(int n){ 
    char t;
    int i;
    for(i=0;i<n;i++){
     ulang:
     printf("Masukan Data ke-%d: \n",1+i);
	 printf("Masukan NIM                 : ");
	 scanf(" %s",&nim[i]);
	 printf("Masukan Nama                : ");
	 scanf(" %s",&nama[i]);
	 printf("Masukan Usia                : ");
	 scanf(" %d",&usia[i]);
	 printf("Masukan Alamat              : ");
	 scanf(" %s",&alamat[i]);       
	 printf("Masukan No HP               : ");
	 scanf(" %s",&nohp[i]);
	 printf("No Telp                     : ");
	 scanf(" %s",&notelp[i]);
	 printf("\n");
     printf("apakah data sudah benar[Y/T]: ");
     scanf(" %c",&t);
     printf("\n");
     if(t=='T'||t=='t')
     	goto ulang;
	 system("cls");
	}
}

void tabelatas(){
 ln();
 printf("|    NIM     |      NAMA     | Usia |   Alamat   |      No HP   |    No Telp   |\n");
 ln();
}


void hasil(int n){
	int i;
    for (i=0;i<n;i++){
     printf("| %-11s| %-14s|  %-4d|   %-9s| %-13s| %-13s|\n",nim[i],nama[i],usia[i],alamat[i],nohp[i],notelp[i]);
     ln();
	}	
}


void main(){
	int n = jumlahdata();
	inputdata(n);
	printf("\n");
	tabelatas();
    hasil(n);
}
