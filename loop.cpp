// While loop
//Print  number 1 to 5.
#include<iostream>
using namespace std;
int main(){
  int count=1;
  while(count<=5){
    cout<<count<<" ";
    count++;
  }
  cout<<endl;
  return 0;
}

//for loop
#include<iostream>
using namespace std;
int main(){
  int i=1, sum=0, n;
  cout<<"Enter any number: ";
  cin>>n;
  for(i=1; i<=n; i++){
    sum=sum+i;
  }
  cout<<"Sum of number is: "<<sum;
  return 0;
}

//do while
#include<iostream>
using namespace std;
int main(){
  do{
    cout<<"Hello World.\n";
  }
    while(8>10);
  return 0;
}
