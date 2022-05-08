#include<iostream>
using namespace std;
#define MAXSTK 5
template<class T>
class Stack{
    T data[MAXSTK];
    int top=-1;
    public:
    void push(T item){
        if(top==MAXSTK-1){//reason? becoz array index is 4 and MAXSTK is 5
            cerr<<"Stack is full...";
            return;
        }
        top++;
        data[top]=item;
    }
    T pop(){
        if(top==-1)
            return 999999;
        T i;
        i=data[top];
        top--;
        return i;
    }
};
int main(){
    //float values
    cout<<"Float values:- "<<endl;
    Stack<float> s1;
    s1.push(10.5f);
    s1.push(20.7f);
    s1.push(30.6f);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    //Integer values
    cout<<"Integer values:- "<<endl;
    Stack<int> s2;
    s2.push(10);
    s2.push(20.);
    s2.push(30);
    cout<<s2.pop()<<endl;
    cout<<s2.pop()<<endl;
    cout<<s2.pop()<<endl;
}
