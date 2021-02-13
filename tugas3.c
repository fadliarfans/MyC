#include<stdio.h>

main(){
	long long int a,km,m,cm,tmp;
	printf(" --- Program Konversi ---\n\n ");
	printf("masukan Total cm yang ingin di konversi = ");
	scanf("%lld",&a);
	printf("\n\n");
    km=a/100000;
    tmp=a%100000;
    m=tmp/100;
    cm=tmp%100;
	printf("Jumlah KM = %lld\n",km);
	printf("Jumlah M  = %lld\n",m);
	printf("Jumlah CM = %lld",cm);
	
}
