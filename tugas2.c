#include<stdio.h>
#define phi 3.14

main(){
	int i;
	float q,x,z,y;
	printf("---- Program menghitung luas bangun datar ---- \n\n");
	printf("1.Bujur sangkar\n");
	printf("2.Persegi panjang\n");
	printf("3.Segitiga\n");
	printf("4.Lingkaran\n");
	printf("5.Trapesium\n\n\n");
	sapi:
	printf("Pilih salah satu : ");
	scanf("%d",&i);
	printf("\n\n");
	
	if(i==1)
	 {
	 	printf("--- Bujur sangkar --- \n\n");
	 	printf("masukan panjang sisinya = ");
	 	scanf("%f",&x);
	 	x*=x;
	 	printf("Luasnya adalah          = %.2f\n",x);
	 	printf("\n\n");
	 }
	else if(i==2)
	 {
	 	printf("--- Persegi panjang --- \n\n");
	 	printf("masukan panjang alas    = ");
	 	scanf("%f",&x);
	 	printf("masukan panjang tinggi  = ");
	 	scanf("%f",&y);
	 	x=x*y;
	 	printf("Luasnya adalah          = %.2f\n",x);
	 	printf("\n\n");
	 }
	 else if(i==3)
	 {
	 	printf("--- Segitiga --- \n\n");
	 	printf("masukan panjang alas    = ");
	 	scanf("%f",&x);
	 	printf("masukan panjang tinggi  = ");
	 	scanf("%f",&y);
	 	q=x*y*0.5;
	 	printf("Luasnya adalah          = %.2f",q);
		printf("\n\n");
	 }
	 else if(i==4)
	 {
	 	printf("--- Lingkaran --- \n\n");
	 	printf("masukan panjang diameter = ");
	 	scanf("%f",&x);
	 	x=x/2;
	 	x=(x*x)*phi;
	 	printf("Luasnya adalah           = %.2f\n",x);
	 	printf("\n\n");
	 }
	 else if(i==5)
	 {
	 	printf("--- Trapesium --- \n\n");
	 	printf("masukan panjang alas atas  = ");
	 	scanf("%f",&x);
	 	printf("masukan panjang alas bawah = ");
	 	scanf("%f",&y);
	 	printf("masukan panjang tinggi     = ");
	 	scanf("%f",&z);
	    x=((x+y)/2)*z;
	 	printf("Luasnya adalah             = %.2f\n",x);
	 	printf("\n\n");
	 }
	 else
	 {
	 	printf(" --- Tak de di pilihan bree ---  ");
	 	printf("\n\n\n");
	 }
	 
	 goto sapi;
	
	
}


