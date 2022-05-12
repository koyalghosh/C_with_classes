/*FUNCTION  OVERLOADING:- This means the functions which have same name but differ by no. of arguments ,type of arguments ,
order of arguments.*/
#include<iostream>
using namespace std;

//1.Functions differ by arguments data type
int sum(int ,int );
int sum(float ,float );


/* Error if functions differ only by return type
int avg(int ,int );
float avg(int ,int );
*/


//2.Functions differ by number of arguments
float mean(int ,int );
float mean(int ,int ,int );

//3.Functions differ by order of arguments
int avg(int ,float );
float avg(float ,int );

int main(){
    int a,b,c;
    float e,f;
    cout<<"Differ by arguments datatype are:-"<<endl;


    cout<<"1.Enter two numbers in integer:- ";cin>>a>>b;
    c=sum(a,b);
    cout<<"Sum is "<<c<<endl;
    cout<<"2.Enter two numbers in float:- ";cin>>f>>e;
    c=sum(f,e);
    cout<<"Sum is "<<c<<endl;


    cout<<endl<<"Differ by number of arguments are:-"<<endl;
    int d,g;float h;
    cout<<"3.Enter two numbers in integer for mean:- ";cin>>d>>g;
    h=mean(d,g);
    cout<<"Mean is "<<h<<endl;
    int i,j,k;
    cout<<"4.Enter three numbers in integer for mean:- ";cin>>i>>j>>k;
    h=mean(i,j,k);
    cout<<"Mean is "<<h<<endl;


    cout<<endl<<"Differ by arguments datatype are:-"<<endl;
    int l,m,o;
    float n,p,q;
    cout<<"5.Enter first number in integer and second in float for avg:-";cin>>l>>n;
    m=avg(l,n);
    cout<<"Avg is "<<m<<endl;
    cout<<"5.Enter first number in float and second in integer for avg:-";cin>>p>>o;
    q=avg(p,o);
    cout<<"Avg is "<<q<<endl;
    return 0;
}

//1.
int sum(int a,int b){
    return a+b;
}
int sum(float a,float b){
    return a+b;
}

//2.
float mean(int a,int b){
    return ((a+b)/2);
}
float mean(int a,int b,int c){
    return ((a+b+c)/3);
}

//3.
int avg(int a,float b){
    return((a+b)/2);
}
float avg(float a,int b){
    return((a+b)/2);
}