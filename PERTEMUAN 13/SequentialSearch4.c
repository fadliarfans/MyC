#include<stdio.h>

main(){
	int array[20] = {25,12,86,19,6,2,8,11,29,45,7,9,15,18,50,34,70,65,1,4};
	int search, c, count = 0;
	int index[20];
	
	for(c=0;c<20;c++){
		printf("%d,",array[c]);
	}

	printf("\nmasukkan nilai yang dicari : ");
	scanf("%d",&search);
	
	for(c=0;c<20;c++){
		if(array[c]==search){
			index[count] = c;
			count++;
		}
	}
	
	printf("Nilai yang dicari = %d ada sejumlah = %d\n",search,count);
	printf("Nilai tersebut ada dalam indeks ke (indeks mulai dari 0) = \n");
	printf("indeks ke ");
	for(c=0;c<count;c++){
			printf("%d ",index[c]);
	}
}


