#include<stdio.h>

main(){
	int i;
    scanf("%d",&i);

    while(i/=10){
    	printf("%d \n",i);
	}
}
