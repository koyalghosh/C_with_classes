//concept of constant object
#include<iostream>
using namespace std;
class A{
    int x,y;
    public:
    A(int x,int y){
        this->x=x;
        this->y=y;
    }
    void display()const{
        cout<<x<<endl<<y<<endl;
    }
    void display(){
        cout<<x<<endl<<y<<endl;
    }
};
int main(){
    const A a1(5,6);
    A a2(7,8);
    cout<<"Constant object calling constant member function :"<<endl;
    a1.display();
    // constant object can only call constant function
    cout<<"Non-Constant object calling constant and non - constant member function :"<<endl;
    //but the priority is high for non-constant function for non-constant object
    a2.display();
    //non constant object can call both constant and non-constant function
}
