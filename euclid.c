#include<stdio.h>

int tmp;

int fpb(int x,int y)
{
int tmp;
	if(x>y)
	{
		x=x-y;
		tmp=fpb(x,y);
	}
	else if(x<y)
	{
		y=y-x;
		tmp=fpb(x,y);
	}
	else
	{
		tmp=x;
	}
     return tmp;
}

int main(){
	int a,b,c;
	printf(" ---- Program FPB ---- \n\n");
	printf("Masukan bilangan ke-1 = ");
	scanf("%d",&a);
	printf("Masukan bilangan ke-2 = ");
	scanf("%d",&b);
	printf("FPB-nya adalah = ");
	c=fpb(a,b);
	printf("%d",c);
	
	return 0;

	
}
