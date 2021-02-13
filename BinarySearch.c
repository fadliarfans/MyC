#include<stdio.h>

main(){
	int arr[10];
	int i;
	for(i=1;i<=10;i++){
		arr[i] = i;
	}
	int n = 10;
	int middle = n/2;
	int height = n;
	int low = 1;
	int input;
    int count = 0;
    int j;
	
	
	printf("Masukan angka yang ingin di cari : ");
	scanf("%d",&input);

	for(i=1;i<=10;i++){
        for(j=low;j<=height;j++){
        	printf("%d ",arr[j]);
		}
		printf("\n");
		if(input == arr[middle]){
			printf("%d\n",arr[middle]);
			break;
		}
		else if(input>arr[middle]){
			low = middle+1;
		}
		else{
			height = middle-1;
		}
		middle = (low + height)/2;
		count++;
	}
	
	printf("\nJumlah Pemecahan : %d",count);
}
