#include<stdio.h>
#include<conio.h>

struct data_tanggal{
	int tanggal;
	int bulan;
	int tahun;
};

void cetak_info_tanggal(struct data_tanggal unit_tgl);

main(){
	struct data_tanggal saat_proses = {12,9,1989};
	system("cls");
	cetak_info_tanggal(saat_proses);
	getch();
}

void cetak_info_tanggal(struct data_tanggal unit_tgl){
	static char*nama_bulan[] = {"Kode Bulan Salah !","januari","Februari","Maret","April","Mei",
	"Juni","Juli","Agustus","September","Oktober","November","Desember"};
	printf("%d %s %d",unit_tgl.tanggal,nama_bulan[unit_tgl.bulan],unit_tgl.tahun);
}




