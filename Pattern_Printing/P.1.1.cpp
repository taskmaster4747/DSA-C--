#include<iostream>
//using namespace std;
using std::cout;
using std::endl;
using std::cin;
int main(){
//	std::cout<<"Game Over!"<<std::endl;
int M;
int N;

while(1){
	cout<<"Enter Multiplication Value (0 for Exit):";
	cin>>M;
	if(M == 0){
		cout<<"Program Ended";
		break;
	}
	for(N = 1; N <= 10; N++){
		cout<<M<<"X"<<N<<"="<<M*N<<endl;
	}
}
	return 0;
}
