#include<stdio.h>

main(){
	FILE *PF;
	char C;
	PF = fopen("coba.txt","r");     
	if(PF== NULL )
	 printf("file tidak dibuka");
    else
     printf("file dibuka\n");
     getch();
}
