//WAF to calculate sum of numbers from 1 to N.
#include<iostream>
using namespace std;

int sumN(int n){
  int sum=0;
  for(int i=1; i<=n; i++){
    sum=sum+i;
  }
  return sum;
}

int main(){
  int sum=0, n;
  cout<<"Enter any number: ";
  cin>>n;
  int SumNum=sumN(n);
  cout<<"Sum of number is: "<<SumNum<<endl;
  return 0;
}

//WAF to calculate N factorial number.
#include<iostream>
using namespace std;

int factNum(int n){
  int fact=1;
  for(int i=1; i<=n; i++){
    fact*=i;
  } 
  return fact;
}

int main(){
  int n;
  cout<<"Enter any number: ";
  cin>>n;
  int Factorial=factNum(n);
  cout<<"Factorial of number "<<n<<" is: "<<Factorial<<endl;
  return 0;
}
