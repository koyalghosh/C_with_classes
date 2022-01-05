#include<iostream>
using namespace std;
class Complex{
	private:
		int real,imag;
	public:
		Complex(){
			real=1;
			imag=1;
		}
		Complex(int r,int i){
			real=r;
			imag=i;
		}
		void getData(){
			cout<<"Enter real part:- ";
			cin>>real;
			cout<<"Enter complex part:- ";
			cin>>imag;
		}
		void Display(string msg){
			if(imag>1)
			cout<<msg<<real<<"+"<<imag<<"i"<<endl;
			else
			cout<<msg<<real<<imag<<"i"<<endl;
		}
		Complex sum(Complex c){
			Complex s;
			s.real=this->real+c.real;
			s.imag=this->imag+c.imag;
			return s;
		}
};
int main(){
	Complex c3,c4,c5;
	c3.getData();
	c3.Display("First complex num is ");
	c4.getData();
	c4.Display("Second complex num is ");
	c5=c3.sum(c4);
	c5.Display("Sum is ");
	return 0;
}

