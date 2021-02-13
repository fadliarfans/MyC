#include<stdio.h>

struct zodiak{
	char nama[15];
	int tanggal_awal;
	int bulan_awal;
	int tanggal_akhir;
	int bulan_akhir;
};

struct zodiak bintang[12] = {
  "Aries",21,3,19,4,
  "Taurus",20,4,20,5,
  "Gemini",21,5,20,6,
  "Cancer",21,6,22,7,
  "Leo",23,7,22,8,
  "Virgo",23,8,22,9,
  "Libra",23,9,22,10,
  "Scorpio",23,10,21,11,
  "Sagitarius",22,11,21,12,
  "Kaprikon",22,12,19,1,
  "Aquarius",20,1,18,2,
  "Pisces",19,2,20,3,
  };

void cek_bintang(int tanggal,int bulan){
	int i;
	for(i=0;i<12;i++){
	  if((tanggal>=bintang[i].tanggal_awal && bulan==bintang[i].bulan_awal)
	  ||(tanggal<=bintang[i].tanggal_akhir && bulan==bintang[i].bulan_akhir))
		 printf("Bintang anda adalah %s\n",bintang[i].nama);
	}
}

main(){
	int tanggal,bulan,tahun;
	printf("Tanggal lahir anda (XX-XX-XXXX): ");
	scanf(" %d-%d-%d",&tanggal,&bulan,&tahun);
    cek_bintang(tanggal,bulan);
}
