#include<stdio.h>

int main(){
	
	int M;
	int N;
	
	while(1){
		
		printf("Enter Value of Multiplication (0 for Exit ) : ");
		scanf("%d",&M);
		
		if(M == 0){
			printf("Program Ended");
			break;
		}
		for(N = 1; N <= 10; N++){
			printf("%d X %d = %d \n", M , N , M*N);
		}
		
	}
	return 0;
}
