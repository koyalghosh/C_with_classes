/*REFRENCES :- Refrences is like another name or we can say nickname.
    Possible refrences can be:
        1.  Refrence to a variable:-
                int a=5;
                int &r=a;//here 'r' is refrence of 'a'
        2.  Refrence to a constant:-
                const int &r1=5;
        3.  Refrence to a pointer:-
                int a=5;
                int *p=&a;//'p' is a pointer which have address of 'a'
                int &r1=*p;//this means r1 is refrence of a
                int &r2=p;//this means r2 is  refrence of p  i.e *r2==*p
        4.  Refrence to array:-
                int a[5]={10,20,30,40,50};
                int &r1=a[0];//'r1' is refrence of 'a[0]'
                r1=11;//will assign '11' at 'a[0]'
                int (&r2)[5]=a;//r2 is refrence of array 'a' of size 5
                r2[4]=60;//will assign 60 to a[4]
        5.  Refrence to function:-
                int sum(int a,int b){   //normal function
                    return a+b;
                }
                int (&r1)(int ,int )=sum;   //r1 is a refrence of function sum which have arguments (int ,int) and returns int
        6.  Read only reference:-
                int a=5;
                const int &r=a;//or int const &r=a;
                r=80;//will give error
*/
#include<iostream>
using namespace std;
int main(){
    int a=20;
    //Read only refrence
    const int  &r1=a;
    //r1=30;//error
    cout<<r1;

    //Refrence to a variable
    int b=10;
    int &r2=b;
    cout<<b<<endl<<r2;//10,10
    return 0;
}
