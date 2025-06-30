/* 
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include<iostream>
using namespace std;
int main(){
  int i,j;
  for(i=1;i<=4;i++){
    for(j=1;j<=4;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
  return 0;
}

/* 
* * * *
* * * *
* * * *
* * * *
*/
#include<iostream>
using namespace std;
int main(){
  int i,j;
  for(i=1;i<=4;i++){
    for(j=1;j<=4;j++){
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
  return 0;
}

/*
1 2 3 
4 5 6 
7 8 9
*/
#include<iostream>
using namespace std;
int main(){
  int i,j,n=1;
  for(i=1;i<=3;i++){
    for(j=1;j<=3;j++){
      cout<<n<<" ";
      n++;
    }
    cout<<endl;
  }
  return 0;
}


