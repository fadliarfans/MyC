#include<stdio.h>
#include<conio.h>
#define ENTER 'n'

main(){
	char huruf;
	puts("Tekan keyboard = ");
	for(;;){
		huruf = getch();
		if(huruf==ENTER)
		break;
	}
	puts("selesai");
	return 0;
}

