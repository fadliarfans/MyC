#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
	FILE *PF;
	char C;
	PF = fopen("coba.txt","a");      // mengedit data yang sudah ada
	if(PF== NULL )
		printf("file tidak dibuka");
    else
    	printf("file dibuka\n");
    while((C=getche())!='\r')
    	fputc(C,PF);
	fclose(PF);   
}
