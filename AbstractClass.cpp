//Abstract class is which contains one or more pure virtual function
#include<iostream>
using namespace std;
class Mobile{
    public:
    //below two functions are pure virtual function.We have to over ride these functions in every derived
    //class otherwise the derived class will also became an abstract class and we can't create object
    //of abstract class
    virtual void calling()=0;
    virtual void sms()=0;
};
//due to use of virtual keyword now the binding will shift upon run time so at run time it will be decided
//which class function ti be called
class BSNL:public Mobile{
    public:
    void calling(){
        cout<<"Calling from BSNL \n";
    }
    void sms(){
        cout<<"SMS from BSNL\n";
    }
};
class Airtel:public Mobile{
    public:
    void calling(){
        cout<<"Calling from Airtel \n";
    }
    void sms(){
        cout<<"SMS from Airtel\n";
    }
};
class JIO:public Mobile{
    public:
    public:
    void calling(){
        cout<<"Calling from JIO \n";
    }
    void sms(){
        cout<<"SMS from JIO\n";
    }
};
int main(){
    Mobile *m;
    int n;
    cout<<"1.BSNL"<<endl<<"2.Airtel"<<endl<<"3.JIO"<<endl;
    cin>>n;
    switch(n){
        case 1:
        //pointer is of Mobile type but becoz of virtual keyword run time binding will happen so it below statement
        //will bind it with BSNL class .
        m=new BSNL;
        m->calling();
        m->sms();
        break;
        case 2:
        m=new Airtel;
        m->calling();
        m->sms();
        break;
        case 3:
        m=new JIO;
        m->calling();
        m->sms();
        break;
        default:
        cout<<"WRONG CHOICE...."; 
    }
}
