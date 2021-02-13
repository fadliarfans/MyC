#include<stdio.h>

main(){
	if((access("coba.txt",0))== 0){
		printf("file sudah ada");
	}
}
