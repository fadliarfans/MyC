#include<stdio.h>

int cari(int data[], int n, int k){
	int posisi, i,ketemu;
	
	if(n<=0){
		posisi = -1;
	}
	else{
		ketemu = 0;
		i = 0;
		while((i<=n-1)&&(!ketemu)){
			if(data[i] == k){
				posisi = i;
				ketemu = 1;
			}
			else{
				i++;
			}
		}
		if(!ketemu){
			posisi = -1;
		}
	}
	return posisi;
}

main(){
	int data[5] = {12,13,19,27,28};
	int dicari = 13;
	int i;
	printf("\tmetode sequentian search\n\n");
	printf("Data : ");
	for(i = 0;i<5;i++){
		printf("%d",data[i]);
		if(i<5-1)
		printf(",");
	}
	printf("\n\n");
	printf("posisi %d berada pada index ke-%d", dicari, cari(data,5,dicari));
	
	
}
