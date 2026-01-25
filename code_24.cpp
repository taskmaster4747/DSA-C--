//Q. Print Factorial of a Number N.
#include<iostream>
using namespace std;

int main(){

    int i = 4;
   // int fac;
     long fac = 1;
    for(int n = 1; n <= i; n++){
            fac = fac * n; // storing value in fac memory and then multipaying that value with next n++;
            cout<<n<<" ";
    }
    cout<<endl<<"factorial : "<< fac;

    return 0;
}