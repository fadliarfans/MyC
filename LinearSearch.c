#include<stdio.h>

main(){
	int arr[100];
	int i;
	for(i=0;i<100;i++){
		arr[i] = i+1;
	}
	int n = sizeof(arr);
	int x;
	printf("Masukan angka yang ingin di cari : ");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x == arr[i]){
			 printf("ketemu dengan pengecekan %d data",i+1);
			 break;
		}
	}
	
}
