//WAF to print the sum of two number.
#include<iostream>
using namespace std;
int sumOfNum(int a, int b){
  int sum=a+b;
  return sum;
}
int main(){
  int a, b;
  cout<<"Enter any two number: ";
  cin>>a >>b;
  int add=sumOfNum(a,b);
  cout<<"Sum of two number is: "<<add<<endl;
  return 0;
}

//WAF to find the min of two number.
#include<iostream>
using namespace std;
int minOfNum(int a, int b){
  if(a<b){
    return a;
  }
  else{
    return b;
  }
}
int main(){
  int a, b;
  cout<<"Enter any two number: ";
  cin>>a >>b;
  int Minimum=minOfNum(a,b);
  cout<<"The minimum number about two number is: "<<Minimum<<endl;
  return 0;
}

