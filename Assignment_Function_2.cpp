//WAF to check if a number is prime or not
#include<iostream>
using namespace std;

bool isPrime(int n){
  int i;
  for(i=2; i<n; i++){
    if(n%i==0){
      return false;
    }
  }
   return true;
}
 int main(){
   int n;
   cout<<"Enter any number: ";
   cin>>n;
   if(isPrime(n)){
     cout<<n <<" is a prime number."<<endl;
   }
   else{
     cout<<n <<" is not a Prime number."<<endl;
   }
   return 0;
 }

