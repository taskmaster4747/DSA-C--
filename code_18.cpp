//using root factor

#include<iostream>
using namespace std;

int main(){
  
    int n = 10;
    bool isPrime = true;

    for(int i = 2; i*1 <= n; i++){  // n * n
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