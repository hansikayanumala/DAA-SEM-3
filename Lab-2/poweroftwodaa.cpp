#include<iostream>
using namespace std;
bool Power(int n){
	if (n<0)
	return false;
	return (n&(n-1));
}
int main(){
	int n;
	cout<<"Enter number:";
	cin>>n;
	if(Power(n)==false)
	cout<<"power of 2";
	else 
	cout<<"not a power of 2";
	return 0;
}
