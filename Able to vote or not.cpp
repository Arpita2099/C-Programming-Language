#include<iostream>
using namespace std;
int main(){
  int age;
  cout<<"Enter any age in number: ";
  cin>>age;
  if (age>=18){
    cout<<"Candidate are able to vote.";
  }
  else
  {
    cout<<"Candidate are not able to vote.";
  }
  return 0;
}
