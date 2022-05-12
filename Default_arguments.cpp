/*
Default Arguments:- They are the arguments whose values are set with default values , passing value of those arguments are not compulsory.
    Important points to remember:- 
        1. We have to write default in declare not in definition.
        2. We should write default values from right to left.{ e.g int sum(int a=1,int b); will give error but int sum(int a,int b=1); will not}
        3. We can't pass any values after the missing argument. { e.g sum(5, ,3,6) will give error }
*/
#include<iostream>
using namespace std;

int multiply(int a,int b,int c=1);

int main(){
    int a,b,c,d,mult;
    cout<<"1. Enter two values to multiply:- ";
    cin>>a>>b;
    mult=multiply(a,b);
    cout<<"     Multiply of two numbers is "<<mult<<endl;

    cout<<"2. Enter three values to multiply:- ";
    cin>>a>>b>>c;
    mult=multiply(a,b,c);
    cout<<"     Multiply of three numbers is "<<mult<<endl;
}
int multiply(int a,int b,int c){
    return a*b*c;
}