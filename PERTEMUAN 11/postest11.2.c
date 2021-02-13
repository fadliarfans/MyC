#include<stdio.h>
#include<conio.h>

struct daftar_nilai_mahasiswa{
	char nama[10];
	int QUIZ;
	int UTS;
	int UAS;
};

struct daftar_nilai_mahasiswa arr[100];

int jumlahdata(){
	int x;
	printf("Masukan jumlah data : ");
	scanf("%d",&x);
	printf("\n");
	return x;
}

void ln(){
  printf("|---------------------------------------|\n");
}

void inputdata(int n){ 
    char t;
    int i;
    for(i=0;i<n;i++){
     ulang:
     printf("Masukan Data ke-%d: \n",1+i);
	 printf("Masukan Nama                 : ");
	 scanf(" %s",&arr[i].nama);
	 printf("Masukan Nilai Quiz           : ");
	 scanf(" %d",&arr[i].QUIZ);
	 printf("Masukan Nilai UTS            : ");
	 scanf(" %d",&arr[i].UTS);
	 printf("Masukan Nilai UAS            : ");
	 scanf(" %d",&arr[i].UAS);       
	 printf("\n");
     printf("apakah data sudah benar[Y/T] : ");
     scanf(" %c",&t);
     printf("\n");
     if(t=='T'||t=='t')
     	goto ulang;
	 system("cls");
	}
}

void tabelatas(){
 ln();
 printf("|    %-8s  |  %-4s  |  %-3s  |  %-3s  |\n","Nama","Quiz","UTS","UAS");
 ln();
}

void hasil(int n){
	int i;
    for (i=0;i<n;i++){
     printf("|  %-10s  |   %-3d  |  %-3d  |  %-3d  |\n",
	 arr[i].nama,arr[i].QUIZ,arr[i].UTS,arr[i].UAS);
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



















