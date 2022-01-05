#include<iostream>
using namespace std;
class Date{
	private:
		int day,month;
	public:
		int year;
		void setData(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}
		void getData(string msg){
			cout<<msg<<endl<<"Enter date:- ";
			cin>>day;
			cout<<"Enter month:- ";
			cin>>month;
			cout<<"Enter year:- ";
			cin>>year;
		}
		
		void display(string msg){
			if(day>0 && day<=31 && month>0 && month<=12 && year>1000){
				
				cout<<msg<<day<<"/"<<month<<"/"<<year<<endl;
			}
			else{
				cout<<"Enter valid data....";
			}
		}
};

int main(){
	Date dob,doj;
	dob.getData("Give details of DOB:- ");
	doj.getData("Give details of DOJ:- ");
	if(dob.year<doj.year){
		dob.display("DOB is ");
		doj.display("DOJ is ");
	}
	else
	cout<<"DOB can't be more than DOJ";
	return 0;
}
