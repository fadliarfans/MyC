#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
	struct data_tanggal{
    	int tanggal;
	    int bulan;
		int tahun;
    };
    
	system("cls");
	
    struct data_rekan{
    	char nama[31];
    	struct data_tanggal tgl_lahir;
	};
	
	struct data_rekan info_rekan;
	strcpy(info_rekan.nama,"UMMU HABIBAH");
	info_rekan.tgl_lahir.tanggal = 15;
	info_rekan.tgl_lahir.bulan = 5;
	info_rekan.tgl_lahir.tahun = 1985;
	printf("Nama          : %s",info_rekan.nama);
	printf("\nTanggal Lahir : %d-%d-%d",info_rekan.tgl_lahir.tanggal,info_rekan.tgl_lahir.bulan,info_rekan.tgl_lahir.tahun);
	
}
