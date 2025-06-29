// Sum of all odd numbers from 1 to n.
#include<iostream>
using namespace std;
int main(){
  int n, i=1, sum=0;
  cout<<"Enter any number: ";
  cin>>n;
  for(i=1;i<=n;i++){
    if(i%2!=0){
      sum=sum+i;
    }
    cout<<"Sum of all odd number is "<<sum;
  }
  return 0;
}

//Check a number is prime or not.
#include<iostream>
using namespace std;
int main(){
  int n,i;
  bool isPrime=true;
  cout<<"Enter any number: ";
  cin>>n;
  for(i=2;i<=5;i++){
    if(n%i==0){
      isPrime=false;
      break;
    }
  }
  if(isPrime==true){
    cout<<n<<" is a prime number.\n";
  }
  else{
    cout<<n<<" is a non-prime number.\n";
  }
  return 0;
}

//Sum of all number from 1 to n which is divisible by 5.
#include<iostream>
using namespace std;
int main(){
  int i, n, sum=0;
  cout<<"Enter any number: ";
  cin>>n;
  for(i=1;i<=n;i++){
    if(i%5==0){
      sum=sum+i;
    }
  }
  cout<<"Sum of number divisible by 5 is: "<<sum;
  return 0;
}

//print factorial of a number n.
#include<iostream>
using namespace std;
int main(){
  int i, n, fact=1;
  cout<<"Enter any number: ";
  cin>>n;
  for(i=1;i<=n;i++){
    fact*=i;
  }
  cout<<"Factorial of "<<n<<" is: "<<fact;
  return 0;
}
