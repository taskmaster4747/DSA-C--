//even odd using while loop

#include<iostream>
using namespace std;

int even(){
   
    int n = 10;
    int i = 1;
    while( i <= n){
       if(i%2 != 0){
        cout<<i<<" ";
       }
        i++;
    }
    cout<<endl;
}

int odd(){

int n = 10;
int i = 1;

while(i <= n){
   if(i%2 == 0){
    cout<<i<<" ";
   }
  i++;
}
cout<<endl;
}

int main(){
   
   cout<<"Even numbers: ";
   even();

   cout<<"Odd numbers: ";
   odd();

    return 0;
}