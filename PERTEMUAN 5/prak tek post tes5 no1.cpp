#include<iostream>
#include<string>

using namespace std;

int main(){
	string word;
	int x,i,j;
	
	cout<<"Masukan Kata = ";
	cin>>word;
	
	x=word.size();
	
	cout<<endl;
	
	for(i=0;i<x;i++){
	  cout<<word<<endl;
	  for(j=0;j<x;j++)
	    word[j]=word[j+1];	
	}
	
	
}
