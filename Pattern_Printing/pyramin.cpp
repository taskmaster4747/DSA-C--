#include<iostream>
using namespace std;

void pyraminOne(int y){
    for(int e = 0; e < y; e++){
        for(int k = 0; k <= e; k++){
            printf("* ");
        }
        cout<<endl;
    }
}
void pyraminTwo(int x){
    for(int n = x; n > 0; n--){
        for(int m = 0; m < n; m++){
            printf("* ");
        }
        cout<<endl;
    }
}
int main(){
    
    int y = 5;
    int x = 5;
    
    pyraminOne(y);
    pyraminTwo(x);
    
    return 0;
}
