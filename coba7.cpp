#include<stdio.h>
#include<stdlib.h>

char name[20],no[100];

void getText(char *message, char *variable, int size){
    printf("\n %s: ", message);
    fgets(variable, sizeof(char) * size, stdin);
    sscanf(variable, "%[^\n]", variable);
}




int main(){
	
	
	    printf("Nama    : "); 
	    scanf("%s",&no);
		printf("Nama    : ");       
		getText("Your name", name, 20);
		printf("%s",name);
	
	
}
