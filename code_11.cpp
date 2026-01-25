//sum of numbers from 1 to n.

#include<iostream>
using namespace std;
int main(){

   int n = 3;
   int sum = 0;

  for(int i = 0; i <= n ; i++){
    sum += i;
     cout<<"internal process Sum value : "<<sum<<endl;
  }

  cout<<"Sum is : "<<sum<<endl;
    return 0;
}