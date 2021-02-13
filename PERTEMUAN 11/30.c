#include<stdio.h>
#include<conio.h>

void tukar_xy(int *x,int*y);

void main(){
	struct koordinat{
		int x;
		int y;
	};
	struct koordinat posisi = {21,34};
	system("cls");
	printf("x,y semula -> %d, %d\n", posisi.x,posisi.y);
	tukar_xy(&posisi.x,&posisi.y);
	printf("x,y kini -> %d, %d\n", posisi.x,posisi.y);
	getch();
	
}

void tukar_xy(int *x,int *y){
	int z;
	z = *x;
	*x = *y;
	*y = z;
}



