#include<iostream>
using namespace std;
int main(){

int score;
double distance;
char playAgain;
bool shieldUp;

short lives, aliensKilled;

score = 0;
distance = 1200.76;
playAgain = 'y';
shieldUp = true;
lives = 3;
aliensKilled = 10;

double engineTemp = 6572.89;

cout<<"\nScore: "<<score<<endl;
cout<<"distance: "<<distance<<endl;
cout<<"Play Again: "<<playAgain<<endl;

cout<<"Lives: "<<lives<<endl;
cout<<"alienskilled: "<<aliensKilled<<endl;
cout<<"Engine Temp: "<<engineTemp<<endl;

int fuel;
cout<<"\nHow much Fuel? ";
cin>>fuel;
cout<<"Fuel: "<<fuel<<endl;

typedef unsigned short int ushort;
ushort bonus = 10;
cout<<"\nBonus: "<<bonus<<endl;
    
	return 0;
}
