#include<iostream>
using namespace std;

int main(){
  
    int n = 10;
    bool isPrime = true;

    for(int i = 2; i <= n-1; i++){
         if(n % i == 0){

            isPrime = false;
            break;
         }
    }
     if(isPrime == true){
        cout<<"Prime no "<<endl;
     } else {
         cout<<"None Prime no "<<endl;
     }
    return 0;
}