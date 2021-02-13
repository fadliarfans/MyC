#include<stdio.h>

int fpb(int x,int y)
{
	int tmp;
	if(x>y)
	fpb(x-y,y);
	else if(x<y)
	fpb(x,y-x);
	else
	tmp=x;
	
	return tmp;
}

int main(){
	int a,b;
	printf(" ---- Program FPB ---- \n\n");
	printf("Masukan bilangan ke-1 = ");
	scanf("%d",&a);
	printf("Masukan bilangan ke-2 = ");
	scanf("%d",&b);
	printf("FPB-nya adalah = ");
	printf(fpb(a,b));
	
	return 0;

	
}
