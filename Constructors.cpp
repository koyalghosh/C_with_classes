//By default copy constructor and default constructor is present but as soon as we construct our own constructor default and copy constructor given by
//compiler is deleted
//Default constructor:-Sets default value to members of classs
//Parameterized constructor:-Sets paramter to member of class
//Copy constructor:-copies one object member parameters to another object's parameter
#include<iostream>
using namespace std;
class A{
    int x,y;
    public:
    //default constuctor
    A(){
        x=y=0;
    }
    //parameterized constructor
    A(int x,int y){
        this->x=x;
        this->y=y;
    }
    //copy constructor
    A(const A &obj){//const is optional it is for safety so that can't change it but & is in syntax i.e compulsory
        this->x=obj.x;
        this->y=obj.y;
    }
    friend ostream & operator<<(ostream &,A);
};
//overloading of operator << to print object members directly 
ostream & operator<<(ostream &out, A obj){
    out<<obj.x<<endl<<obj.y<<endl;
    return out;
}
int main(){
    A a1;//calling of default constructor
    A a2(10,20);//calling of paramterized constructor
    A a3(a1);//calling of copy constructor
    cout<<a1;
    cout<<a2;
    cout<<a3;
}
