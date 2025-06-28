//QS.1 WAP to calculate the simple interest.
#include<iostream>
using namespace std;
int main(){
  float p,r,t;
  float interest;
  cout<<"Enter the amount of principle: ";
  cin>>p;
  
  cout<<"Enter the percentage rate: ";
  cin>>r;
  
  cout<<"Enter the time duration: ";
  cin>>t;
  
  interest=(p*t*r)/100;
  cout<<"Simple interest is: "<<float(interest);
  return 0;
}

//WAP to calculate maximum of two numbers.
#include<iostream>
using namespace std;
int main(){
  int num1, num2;
  cout<<"Enter the value of first number: ";
  cin>>num1;

  cout<<"Enter the value of second number: ";
  cin>>num2;

  if(num1>num2){
    cout<<num1<<" is maximum number.";
  }
  else{
    cout<<num2<<" is maximum number.";
  }
  return 0;
}

// Give a person age, find if they should get a driving license or not.
#include<iostream>
using namespace std;
int main(){
  int age;
  cout<<"Enetr any age: ";
  cin>>age;

  if(age>=18){
    cout<<"You will get a driving license.";
  }
  else{
  cout<<"You will not get a driving license.";
}
  return 0;
}
