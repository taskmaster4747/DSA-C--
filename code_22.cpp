#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n = 10;
    int sum = 0;
 
    while(i <= n){
        if(i%3 == 0){
            sum += i;
            cout<<i<<" ";
        }
        i++;
    }
   cout<<endl<<"Sum of all number from 1 to N is : "<<sum<<endl;
    return 0;
}