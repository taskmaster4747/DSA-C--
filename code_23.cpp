// Q. Sum of all numbers from 1 to n which are divided by 3.

#include<iostream>
using namespace std;

int main(){
 int i = 10;
 int sum;
for(int n = 1; n <= i; n++){
       if (n%3 == 0)
       {
         sum += n;
       cout<<n<<" "; 
       }
}
    cout<<endl<<"Sum of all number from 1 to N is : "<<sum<<endl;
    return 0;
}