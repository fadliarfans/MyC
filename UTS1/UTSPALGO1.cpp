#include<stdio.h>

int main(void){
	int a=17;
	int i;
	for(i=1;i<=14;i++){
		if(i%2==0)
		 printf("%d ",i);
		else
		 printf("%d ",a-=2);
	}
}
