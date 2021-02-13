#include<stdio.h>
#include <stdlib.h>

int main(){
	float harga, jumlah, hrg_tot;
	 printf("Press any key to clear the screen\n");
     getchar();
     system("clear");
	jumlah = 10;
	harga =15.50;
	hrg_tot = jumlah*harga;
	printf("%f",hrg_tot);
	return 0;
}
