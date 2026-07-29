#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r){
   int temp[100];
   int i=l;
   int j=m+1;
   int k=l;
   while(i<=m && j<=r){
   	if(arr[i]<arr[j]){
   		temp[k++]=arr[i++];
	   }else{
	   	temp[k++]=arr[j++];
	   }
   }
   while(i<=m){
   	temp[k++]=arr[i++];
   }
   while(j<=r){
   	temp[k++]=arr[j++];
   }
   for(int i=l;i<=r;i++){
   	arr[i]=temp[i];
   }
}
   void mergeSort(int arr[],int l,int r)
   {
   	if(l<r){
   		int mid=(l+r)/2;
   		mergeSort(arr,l,mid);
   		mergeSort(arr,mid+1,r);
   		merge(arr,l,mid,r);
	   }
   }

int main(){
	int n;
	cout<<"Enter the number of elements";
	cin>>n;
	int arr[n];
	cout<<"Enter the numbers";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	mergeSort(arr,0,n-1);
	cout<<"Sorted array";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"";
	}
	return 0;
}
