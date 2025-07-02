#include<iostream>
using namespace std;
int decToBin(int decNum){
  int ans=0, pow=1;
  while(decNum>0){
    int rem=decNum%2;
    decNum/=2;
    ans=ans+(rem*pow);
    pow=pow*10;
  }
  return ans;
}
int main(){
  int decNum;
  cout<<"Enter any decimal number: "<<endl;
  cin>>decNum;
  cout<<decToBin(decNum)<<endl;
  return 0;
}
