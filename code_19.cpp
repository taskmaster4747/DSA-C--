//Nested Loops
//pyramyn pattern

#include<iostream>
using namespace std;

int main(){
    int y = 5;
  for(int i = 1 ; i < y; i++){
    for(int n = 1 ; n <= i; n++){
     cout<<" * ";
    }
    cout<<endl;
  }
    return 0;
}