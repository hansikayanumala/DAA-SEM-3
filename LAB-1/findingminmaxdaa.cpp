#include<iostream>
using namespace std;
int maxMin(int arr[],int i,int j,int &max,int &min){
	int max1=0;
	int min1=0;
	if(i==j){
		max=min=arr[i];
	}
	else if(i==j-1){
		if(arr[i]<arr[j]){
			min=arr[i];
			max=arr[j];
		}else{
			min=arr[j];
			max=arr[i];
		}
	}else{
		int mid=(i+j)/2;
		maxMin(arr,1,mid,max,min);
		maxMin(arr,mid+1,j,max1,min1);
		if(max<max1){
			max=max1;
		}
		if(max<max1){
			max=max1;
		}
		if(min1<min){
			min=min1;
		}
	}
}
int main(){
	int n;
	cout<<"No.of elements";
	cin>>n;
	int arr[n];
	cout<<"Enter the given elements";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=0,min=0;
	maxMin(arr,0,n-1,max,min);
	cout<<"max"<<max;
	cout<<"min"<<min;
}
