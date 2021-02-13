#include<stdio.h>

main(){
	int total,hari,bulan,tahun;
	
	printf("Program Konversi Hari\n\n");
	printf("Masukan Jumlah Hari [1..1000]: ");
	scanf("%d",&total);
	
	tahun=total/365;
	total%=365;
	
	bulan=total/30;
	total%=30;
		
	hari=total;
	
	printf("Konversi detail              : %d Tahun, %d Bulan, %d Hari",tahun,bulan,hari);
	
}
