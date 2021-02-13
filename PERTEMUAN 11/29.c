#include<stdio.h>
#include<conio.h>

void main(){
	struct zodiak{
		char nama[11];
		int tgl_awal;
		int bln_awal;
		int tgl_akhir;
		int bln_akhir;
	};
	int tg_lhr,bl_lhr,th_lhr;
	struct zodiak bintang = { "Sagitarius",23,11,21,12};
	printf("Tanggal lahir anda (XX-XX-XXXX):");
	scanf("%d-%d-%d",&tg_lhr,&bl_lhr,&th_lhr);
	if((tg_lhr>=bintang.tgl_awal && bl_lhr==bintang.bln_awal) || (tg_lhr<=bintang.tgl_akhir && bl_lhr == bintang.bln_akhir))
	 printf("bintang anda adalah %s\n",bintang.nama);
	else
	 printf("Bintang anda bukanlah %s\n",bintang.nama);
	getch();
}





