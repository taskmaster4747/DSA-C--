//Even odd number using if else statement

#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter a Number : "<<endl;
    cin>>n;

    if(n%2 == 0){
        cout<<"even\n";
    }else{
        cout<<"odd\n";
    }

    return 0;
}