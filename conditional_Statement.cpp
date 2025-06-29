//Conditional Statement

//if-else 
//WAP to find th number is positive or negative:
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter any number: ";
  cin>>n;
  if(n>=0){
    cout<<n<<" is a positive number."<<endl;
  }
  else{
    cout<<n<<" is a negative number."<<endl;
  }
  return 0;
}

//if-elseif-else
//WAP to find whether the given number is positive negative or zero.
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter any number: ";
  cin>>n;
  if(n>0){
    cout<<n <<" is positive number."<<endl;
  }
  else if(n<0){
    cout<<n <<" is negative number."<<endl;
  }
  else{
    cout<<n <<" is zero."<<endl; 
  }
  return 0;
}

