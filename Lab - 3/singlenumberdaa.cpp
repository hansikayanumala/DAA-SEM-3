#include<iostream>
using namespace std;
int singleNumber(vector<int> &nums)
{
 int result=0;
  for(int i=0;i<n;i++){
    result=result^(nums[i]);
  }
  return result;
}
int main(){
 int n;
 cout<<"Enter n value";
 cin>>n;
 vector<int>nums(n);
 cout<<"Enter the array";
 for(int i=0;i<n;i++){
  cin>>nums[i];
 }
 cout<<"Single number:"<<singleNumber(nums)<<endl;
 return 0;
}
