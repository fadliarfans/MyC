#include<iostream>

using namespace std;

int main(){
	int x,i,j;
	cout<<"Masukan Tinggi Segitiga ? : ";
	cin>>x;

	
	for(i=0;i<x;i++)
	 {
	 	for(j=0;j<x-1;j++)
	        {
	 	    cout<<" ";
	        }
	        
	   	for(j=x;j>i;j--)
	        {
	 	    cout<<"*";
	        }
	        
	    if(i<x-1)
	    cout<<endl;
	    
	 }
	 for(i=0;i<x+1;i++)
	 {
	 	for(j=x;j>i;j--)
	        {
	 	    cout<<" ";
	        }
	 	for(j=0;j<i;j++)
	        {
	 	    cout<<"*";
	        }
	    cout<<endl;
	   
	 }
}
