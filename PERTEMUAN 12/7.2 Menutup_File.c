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
    int x = fclose(PF);
    if(fclose(PF)==EOF)  // EOF yaitu pointer bernilai -1
     	printf("tidak dapat menutup file");
    getch();
}
