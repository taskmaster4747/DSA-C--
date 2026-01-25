// finding lower case and upper case char

#include<iostream>
using namespace std;

int methodOne(){
    cout<<" Method 1 "<<endl;
    char ch;
    cout<<"Enter char : ";
    cin>>ch;

    if(ch >= 'a' && ch <='z'){ //using ASSCI value;
        cout<<"lowercase char \n";
    }else if(ch >= 'A' && ch <= 'Z'){
        cout<<"uppercase char \n";
    }else{
        cout<<"Unwanted input";
    }
}
int methodTwo(){
    cout<<" Method 2 "<<endl;
    char ch;
    cout<<"Enter char : ";
    cin>>ch;

    if(ch >= 65 && ch <=90){   //using Directly ASSCI vlues;
        cout<<"uppercase char \n";
    }else {
        cout<<"lowercase char \n";
    }
}
int main(){
 methodOne();
 methodTwo();
    return 0;
}