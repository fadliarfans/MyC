#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	FILE *PF;
	char C;
	if((PF=fopen("coba.txt","r"))== NULL){
		printf("file tidak dapat dibuka");
		exit(1); }
	while((C=fgetc(PF))!= EOF)
		putchar(C);
	fclose(PF); 
}
