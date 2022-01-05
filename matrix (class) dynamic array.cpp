#include<iostream>
using namespace std;

class Matrix{
	int** m;
	public:
		int r,c;
		Matrix(){
			r=c=0;
		//	getMemory();
		}
		Matrix(int r,int c){
			this->r=r;
			this->c=c;
			getMemory();
		}
		void getData(string msg){
			cout<<msg<<endl;
			cout<<"Enter number of rows:- ";
			cin>>r;
			cout<<"Enter number of columns:- ";
			cin>>c;	
		//	getMemory();
		}
		void getMemory(){
			m=new int *[r];
			for(int i=0;i<r;i++){
				m[i]=new int [c];
			}
		}
		void getInput(){
			getMemory();
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					cout<<"Enter element "<<i+1<<","<<j+1<<":- ";
					cin>>m[i][j];
				}
			}
			cout<<endl;
		}
		Matrix operator+(Matrix m2){
			Matrix ans;
			if(this->r!=m2.r || this->c!=m2.c)
			cout<<"For addition rows and columns must be same ."<<endl;
			else{
				for(int i=0;i<r;i++){
					for(int j=0;j<c;j++){
						ans.m[i][j]=m2.m[i][j]+this->m[i][j];
					}
				}
			}
			return ans;
		}
		Matrix operator*(Matrix m2){
			Matrix ans;
			if(this->c!=m2.c)
			cout<<"For matrix multiplication column number must be same ."<<endl;
			else{
				for(int i=0;i<this->r;i++){
					for(int j=0;j<m2.c;j++){
						ans.m[i][j]=0;
						for(int k=0;k<m2.c;k++){
							ans.m[i][j]+=this->m[i][k]*m2.m[k][j];
						}
					}
				}
			}
			return ans;
		}
		Matrix operator=(const Matrix obj){
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					this->m[i][j]=obj.m[i][j];
				}
			}
			return obj;
		}
		void display(string msg){
			cout<<msg;
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					cout<<m[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
		void free(){
			for(int i=0;i<r;i++){
				delete [] m[i];
			}
			delete []m;
		}
};
int main(){
	Matrix m1,m2;
	m1.getData("Enter information of 1st matrix\n");
	m1.getInput();
	m2.getData("Enter information of 2nd matrix\n");
	m2.getInput();
	Matrix m3(m1.r,m1.c);
	Matrix m4(m1.r,m2.c);
	m1.display("First matrix is :- \n");
	m2.display("Second matrix is :- \n");
	m3=m1+m2;//here m1 is calling object and m2 is argument
	m4=m1*m2;//here m1 is calling object and m2 is argument
	m3.display("Addition is:- \n");
	m4.display("Multiply is:- \n");
	m1.free();m2.free();m3.free();m4.free();
	return 0;
}


