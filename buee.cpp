#include<iostream>

using namespace std;

int arr[10000];
	

void bubblesort(int n){
	int tmp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				tmp = arr[i];
				arr[i]= arr[j];
				arr[j]= tmp;
			}
		}
	}
	
	
}

int main(){
    int n;
    cin>>n;
	for(int i=0;i<n;i++)
	  arr[i] = i*-1 + 10;
	  
	cout<<endl;
	  
	for(int i=0;i<n;i++)
	  cout<<arr[i]<<" ";
	  
	bubblesort(n);
	
	cout<<endl;
	
	for(int i=0;i<n;i++)
	  cout<<arr[i]<<" ";
	  

}
