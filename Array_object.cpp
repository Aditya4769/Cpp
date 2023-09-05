/*#include<iostream>
using namespace std;
class student{
	char name[20];
	int roll_no;
	public:
		void get(){
		cout<<"Enter Your Name: ";
		cin>>name;
		cout<<"Enter Your Roll_No: ";
		cin>>roll_no;
		
		}
		void show(){
		cout<<"Student Name is: "<<name<<endl;
		cout<<"Student Roll_no is: "<<roll_no<<endl;
		}
}s[5];
int main(){
	for (int i=0;i<5;i++){
		s[i].get();
		
	}
	for(int i=0;i<5;i++){
		s[i].show();
	}
}*/




#include<iostream>
using namespace std;
class employee{
	private:
		char emp_name[30];
		float basic_pay;
		float cal_da(){
			float da=0.5*basic_pay;
			return (da);
		}
		float cal_hra(){
			float hra=0.15*basic_pay;
			return(hra);
		}
		public:
			void read();
			void display();
};

void employee::read()
{
	cout<<"Enter Employee Name: ";
	cin>>emp_name;
	cout<<"Enter The basic Salary: ";
	cin>>basic_pay;
	
}
void employee::display(){
	float grosssal;
	float da=cal_da();
	float hra=cal_hra();
	grosssal=basic_pay+da+hra;
	cout<<"gross salary of emp : "<<grosssal;
}
int main(){
	employee emp;
	emp.read();
	emp.display();
	return 0;
}
