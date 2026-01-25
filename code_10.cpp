//while loop

#include<iostream>
using namespace std;

void while_loop(){
    
    int n = 20;
    int count = 1;

    while( count <= n){
        cout<<count<<" ";
        count++;
    }

    cout<<endl;
}
void for_loop(){
    int n = 10;
    
    for(int i = 0; i <= n; i++){
        cout<< i <<" ";
    }
    cout<<endl;
}

int main(){

    cout<<" while loop"<<endl;
    while_loop();
    cout<<" for loop "<<endl;
    for_loop();
    return 0;
}