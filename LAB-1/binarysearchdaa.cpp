#include<iostream>
using namespace std;
int binarySearch(int arr[],int x,int low,int high){
	if (low>high){
		return -1;
	}
	else{
	int mid=(low+high)/2;
	if (x==arr[mid]){
		return mid;
	}else if(x>arr[mid]){
		return binarySearch(arr,x,mid+1,high);
	}else 
	    return binarySearch(arr,x,low,mid-1);
	}
}
int main(){
	int n,x;
	cout<<"Enter the number of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the number to be searched:";
	cin>>x;
	
	return binarySearch(arr,x,0,n-1);
}
