#include<iostream>
using namespace std;

class Bank{
	private:
		long long acno;
		char name[20];
		char actype;
		int balance;
		int age;
		long long mobile;
		int pin;
	public:
		char ename[20];
		int epin;
		int length(int n){
			int count=0;
			for(int i=n;i>0;i=i/10){
				count++;
			}
			return count;
		}
		void getData(){
			balance=0;
			cout<<"Enter account number:- ";
			cin>>acno;
			cout<<"Enter your full name:- ";
			cin.getline(name,20);
			cout<<"Enter your pin:- ";
			cin>>pin;
			cout<<"Enter account type. Press 's' for saving and 'c' for current. :- ";
			cin>>actype;
			cout<<"Enter balance:- ";
			cin>>balance;
		}
		void openAcc(){
			cout<<"Enter your full name:- ";
			cin.ignore();
			cin.getline(name,20);
			cout<<"Enter your age:- ";
			cin>>age;
			if(age<18){
			cout<<"Your are below 18. Account can't be possible..";
			exit(1);
			}
			cout<<"Enter your mobile number:- ";
			cin>>mobile;
			cout<<"Enter account type. Press 's' for saving and 'c' for current. :- ";
			cin>>actype;
			cout<<"Create a four digit pin:- ";
			cin>>pin;
			int l;
			l=length(pin);
			if(l!=4){
				cout<<"Pin must be of 4 digit...";
				exit(1);
			}
			cout<<"Your account is successfully created.."<<endl;
		}
		void deposit(){
			int current=0;
			cout<<"Enter your full name:- ";
			cin.ignore();
			cin.getline(ename,20);
			cout<<"Enter your pin:- ";
			cin>>epin;
			if(epin!=pin || name!=ename){
				cout<<"Incorrect details....";
				exit(1);
			}
			cout<<"Enter amount you want to deposit...";
			cin>>current;
			balance+=current;
			cout<<"Now your total balance is "<<balance<<endl;
		}
		void withdraw(){
			int current=0;
			cout<<"Enter your full name:- ";
			cin.ignore();
			cin.getline(ename,20);
			cout<<"Enter your pin:- ";
			cin>>epin;
			if(epin!=pin || name!=ename){
				cout<<"Incorrect pin....";
				exit(1);
			}
			cout<<"Enter amount you want to withdraw...";
			cin>>current;
			if(balance<current)
			cout<<"You only have "<<balance<<endl;
			else{
			cout<<"Take your cash"<<endl;
			balance-=current;
			cout<<"Now balance is "<<balance<<endl;
			}
		}
		void display(){
			char t='s';
			cout<<"Enter your full name:- ";
			cin.ignore();
			cin.getline(ename,20);
			cout<<"Enter your pin:- ";
			cin>>epin;
			if(pin==epin && name==ename){
				cout<<"Hello! "<<ename<<endl;
				cout<<"Your account type is ";
				if(actype==t)
				cout<<"Saving"<<endl;
				else
				cout<<"Current"<<endl;
				cout<<"Your contact number is "<<mobile<<endl;
				cout<<"Your account balance is "<<balance<<endl;
			}
			else
			cout<<"Incorrect details."<<endl;
		}
};

int main(){
	Bank u1;
	int n,count=0;
	cout<<"Welcome...."<<endl;
	while(1){
		cout<<"Enter choice:- "<<endl<<"1.Open Account"<<endl<<"2.Deposit"<<endl<<"3.Withdraw"<<endl<<"4.Display"<<endl<<"5.Exit"<<endl;
		cin>>n;
		switch(n){
			case 1:
				count++;
				if(count==1){
				u1.openAcc();
				break;
			}
			else 
			cout<<"Our bank allows only to create one account."<<endl<<endl;
			break;
				break;
			case 2:
				u1.deposit();
				break;
			case 3:
				u1.withdraw();
				break;
			case 4:
				u1.display();
				break;
			case 5:
				cout<<"Thanks for using this program. "<<endl;
				exit(1);
			default :
				cout<<"Enter correct choice...."<<endl;
		}
	}
	return 0;
}

