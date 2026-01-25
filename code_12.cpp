#include<iostream>
using namespace std;

void odd(){

    int n = 10;
    
    //prints odd numbers
    for(int i = 1 ; i <= n ; i++){
       
        if( i % 2 != 0 ){  // finds a even & odd numbers
          cout<< i <<" ";
        }
    }
    cout<<endl;
}

void even(){

    int n = 10;
         
    //prints even numbers
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
           cout<<i<<" ";
        }
    }
     cout<<endl;
}

int main(){
    cout<<"Odd numbers : ";
   odd();
    cout<<"Even numbers : ";
   even();
    return 0;
}