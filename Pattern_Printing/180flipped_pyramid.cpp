#include<iostream>
using namespace std;

int main(){
    
    int n = 8;
    
    for(int i = n; i > 0 ; i--){
        for(int j = 0; j <= n; j++){
            if( j >= i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        cout<<endl;
    }
    return 0;
}


