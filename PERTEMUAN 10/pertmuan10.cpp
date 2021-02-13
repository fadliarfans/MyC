#include<iostream>


using namespace std;

int arr[10000];

void buble(int n){
	int tmp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
		  if(arr[j]>arr[j+1]){
			tmp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=tmp;
		  }
	    }
	}
}

int main(){
	int n;
	cout<<"berapa banyak data : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Data ke-"<<i+1<<" = ";
		cin>>arr[i];
	}
	buble(n);
	cout<<"setelah diurutkan : ";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
