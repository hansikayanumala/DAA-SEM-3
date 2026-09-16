#include<iostream>
using namespace std;

int main(){
	int n,W;
	cout<<"Enter number of items:";
	cin>>n;
	
	int value[10],weight[10];
	float ratio[10];
	
	cout<<"Enter value and weight:\n";
	for(int i=0;i<n;i++){
		cin>>value[i]>>weight[i];
		ratio[i]=(float)value[i]/weight[i];
	}
	
	cout<<"Enter capacity:";
	cin>>W;
	
	float profit=0;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(ratio[i]<ratio[j]){
				swap(ratio[i],ratio[j]);
				swap(value[i],value[j]);
				swap(weight[i],weight[j]);
			}
		}
	}
	
	for(int i=0;i<n;i++){
		if(W>=weight[i]){
			W-=weight[i];
			profit+=value[i];
		}else{
			profit+=ratio[i]*W;
			break;
		}
	}
	cout<<"Maximum profit="<<profit;
	
	return 0;
	
}
