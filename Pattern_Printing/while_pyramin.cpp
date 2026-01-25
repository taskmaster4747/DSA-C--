#include<iostream>
using namespace std;

void pyraminOne(int y){
        int n = 0, c = 0;
        while(n < y){
        	while(c <= n){
        		printf("* ");
        		c++;
			}
			c = 0;
			n++;
			cout<<endl;
		}
    }
    
    void pyraminTwo(int x){
    	int w = x, u = 0;
		while(w > 0){
			while(u < w){
				printf("* ");
				u++;
			}
			u = 0;
			w--;
			cout<<endl;
		} 
	}
    
    int main(){
    	int y = 8;
    	int x = 8;
    	
    	
    	pyraminOne(x);
    	pyraminTwo(y);
    	
    	return 0;
	}
