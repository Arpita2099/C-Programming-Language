#include<iostream>
using namespace std;
int binToDec(int binNum){
  int ans=0, pow=1;
  while(binNum>0){
    int rem=binNum%10;
    ans=ans+(rem*pow);
    binNum/=10;
    pow=pow*2;
  }
  return ans;
}
int main(){
  int binNum;
  cout<<"Enter any Binary number: "<<endl;
  cin>>binNum;
  cout<<"Decimal number of given binary is: "<< binToDec(binNum)<<endl;
  return 0;
}
