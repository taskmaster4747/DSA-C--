//Resull Grade using if-else if-else statement

#include<iostream>
using namespace std;

int main(){

    int marks ; 

    cout<<"Enetr a marks : \n";
    cin>>marks;

if(marks >= 90){
    cout<<"Ecellent \n Your Grade is A \n";
}else if (marks >= 80 && marks < 90){
    cout<<"Very Good \n Your Grade is B \n";
}else if (marks >= 70 && marks < 80){
    cout<<"Good \n Your Garde is C \n";
}else if (marks >= 60 && marks < 70){
    cout<<"Need to Study well \n Your Grade is D \n";
}else if (marks >= 50 && marks < 60){
    cout<<"Must need to study \n Your Grade is E \n";
}else{
    cout<<"Fail \n Your Grade is F \n";
}
    return 0;
}