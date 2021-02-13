#include<stdio.h>

int main(void){
	int a;
	int b=0;
	int i;
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){b++;}	
	}
	if(b==0)
	 printf("Prima");
	else
	 printf("Bukan Prima");
}
