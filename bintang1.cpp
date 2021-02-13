#include<iostream>

using namespace std;

int main(){
	int x;
	cin>>x;
	x++;
	
 for(int y=0;y<5;y++)
 {

	for(int i=0;i<x;i++)
	{
		for(int j=x;j>i;j--)
		{
			cout<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		for(int t=0;t<i-1;t++)
		{
				cout<<"*";
		}
		cout<<endl;
	}
	
	for(int i=0;i<(x*2)-1;i++)
	{
		cout<<"*";	
	}
	cout<<endl;
	
	for(int i=0;i<x-1;i++)
	{
		for(int j=0;j<i+1;j++)
	    {
		 	cout<<" ";
	    }
		for(int j=x-1;j>i+1;j--)
	    {
			cout<<"*";
	    }
		for(int j=x-1;j>i;j--)
		{
			cout<<"*";
	   	}
		cout<<endl;
	}
 }
}
