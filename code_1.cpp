#include<iostream>
using namespace std;

int main(){
    
    int age;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = true; 
    double price = 100.99;
    
    //Data Types
    cout<<"Size of char : "<<sizeof(age)<<"\n"<<"Size of float : "<<sizeof(grade)<<"\n"<<"Size of bool : "<<sizeof(PI)<<"\n"<<"Size of double : "<<sizeof(isSafe)<<"\n"<<sizeof(price)<<"\n";
    cout<<"grade : "<<grade<<"\n"<<"PI : "<<PI<<"\n"<<"isSafe : "<<isSafe<<"\n"<<"price : "<<price<<"\n";

    //Type Casting
    char Grade = 'A';   //-------
                       //       |    
    int value = Grade; // <------
    cout<<value<<endl; //prints ASCII Value of "A"
    
    
    double Price = 100.99; //----↓
    int newPrice = price;  //←---

    return 0;
}