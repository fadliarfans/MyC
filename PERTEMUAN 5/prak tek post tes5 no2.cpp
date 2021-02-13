#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	cout<<"+---------------------------------------------------- -+"<<endl;
	cout<<"|  Tekan Enter Untuk memlihat hasil konversi C -->  F  |"<<endl;
	cout<<"+------------------------------------------------------+"<<endl;
	getch();
	system("cls");
	
	int i,j,c=10,f=50;
	cout<<"   C     F  "<<endl;
	for(i=0;i<10;i++){
		printf(" %3d   %3d  ",c,f);
		cout<<endl;
		c+=10;
		f=(c*9/5)+32;
		
	}
	
	
	
}
