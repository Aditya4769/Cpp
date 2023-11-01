/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *p = NULL;
	p=new int(12);
	
	if(!p){
		cout<<"\nMemory allocation failure ";
		exit(1);
	}
//	if(p == NULL){
//		cout<<"\nMemory allocation failure ";
//		exit(1);
//	}
	else{
		cout<<"Memory allocated successfully\n";
		cout<<"Integer value stored is: "<<*p;
		delete p;
		cout<<"\nMemory deallocated";
	}
	return 0;
}*/






/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *fact = NULL;
	int *p =NULL;
	p = new int;
	fact = new int;
	if(p==NULL||fact==NULL){
		cout<<"\nMemory allocation failure";
		exit(1);
	}
	cout<<"Enter the number: ";
	cin>>*p;
	*fact = 1;
	for(int i=1;i<=*p;i++){
		*fact = *fact*i;
	}
	cout<<"\nFactorial of the number is: "<<*fact<<endl;
	delete p;
	delete fact;
	cout<<"p Memory deallocated";
	cout<<"\nFact memory deallocated";
	return 0;
}*/





/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *arr;
	int size;
	cout<<"\nEnter the size of integer array;";
	cin>>size;
	cout<<"\nCreating an array of size"<<size;
	arr=new int[size];
	if(arr==NULL){
		cout<<"\nProblem in memory allocation.";
		exit(1);
	}
	else{
		cout<<"\nDynamic allocation of memory for array is successful";
		for(int i=0;i<size;i++){
			cout<<"\n";
			cin>>*(arr+i);
		}
		for(int i=0;i<size;i++){
			cout<<*(arr+i)<<" ";
		}
		delete[] arr;
		cout<<"\nMemory deallocated";
	}
}*/




/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *arr;
	int size;
	int sum=0;
	cout<<"Enter the size of integer array;";
	cin>>size;
	cout<<"\nCreating an array of size"<<size;
	arr=new int[size];
	if(arr==NULL){
		cout<<"Problem in memory allocation.";
		exit(1);
	}
	else{
		cout<<"Dynamic allocation of memory for array is successful"<<endl;
		for(int i=0;i<size;i++){
			
			cin>>*(arr+i);
		}
		for(int i=0;i<size;i++){
			sum = sum+*(arr+i);
		}
		cout<<"Sum of the array elements: "<<sum;
		delete[] arr;
		cout<<"\nMemory deallocated";
	}
}*/






/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	double *arr,*sum,*avg;
	int size;
	sum = new double;
	avg = new double;
	cout<<"Enter the size of double array: ";
	cin>>size;
	cout<<"\nCreating an array of size "<<size<<endl;
	arr = new double[size];
	if(arr==NULL||sum==NULL||avg==NULL){
		cout<<"\nProblem in memory allocation";
		exit(1);
	}
	cout<<"\nEnter array elements: ";
	for(int i =0;i<size;i++){
		cin>>arr[i];
		
	}
	for(int i=0;i<size;i++){
		*sum=*sum+arr[i];
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	*avg = *sum/size;
	cout<<"\nAverage is: "<<*avg<<endl;
	cout<<"Sum is: "<<*sum<<endl;;
	delete[] arr;
	delete sum;
	delete avg;
	cout<<"Memory deallocated.";
}*/




/*#include<iostream>
#include<stdlib.h>
using namespace std;
class Array{
	int *arr;
	int size;
	public:
		void get(int n){
			size = n;
			arr = new int[size];
			for(int i=0;i<size;i++){
				cin>>arr[i];
			}
		}
		int get_sum(){
			int sum=0;
			for(int i=0;i<size;i++){
				sum +=arr[i];
				
			}
			return sum;
		}
		void display(){
			cout<<"Elements in the array are: "<<endl;
			for(int i=0;i<size;i++){
				cout<<arr[i]<<endl;
			}
			cout<<"\nSum of elements present in the array: "<<get_sum()<<endl;;
		}
		
		~Array(){
			delete[] arr;
			cout<<"\nMemory deallocated";
	}
	
			
};
int main(){
	Array a;
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	a.get(n);
	a.display();
}*/







/*#include<iostream>
#include<stdlib.h>
using namespace std;
class Array{
	int *arr;
	int size;
	public:
		Array(int n){
			size = n;
			arr = new int[size];
			for(int i=0;i<size;i++){
				cin>>arr[i];
			}
		}
		int get_sum(){
			int sum=0;
			for(int i=0;i<size;i++){
				sum +=arr[i];
				
			}
			return sum;
		}
		void display(){
			cout<<"Elements in the array are: "<<endl;
			for(int i=0;i<size;i++){
				cout<<arr[i]<<endl;
			}
			cout<<"\nSum of elements present in the array: "<<get_sum()<<endl;;
		}
		
		~Array(){
			delete[] arr;
			cout<<"\nMemory deallocated";
	}
	
			
};
int main(){
	
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	Array a(n);
	
	a.display();
}*/







/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char* str = "Hello this is aditya this side.";
	int len = strlen(str);
	char *ptr;
	ptr = new char[len+1];
	strcpy(ptr,str);
	cout<<"ptr = "<<ptr<<endl;
	delete[] ptr;
	cout<<"Memory deallocated";
	return 0;
}*/






/*#include<iostream>
#include<stdlib.h>
using namespace std;
class example1{
	char* ptr;
	public:
		example1(){
		ptr = new char[8];
		ptr = "Dynamic";
		
	 }
	
	void show(){
		cout<<ptr<<endl;
	}	
};
int main(){
	example1 *ptr = new example1;
	example *e;
	int *p=new int;
	ptr->show();
}*/






/*#include<iostream>
#include<string.h>
using namespace std;
class string1{
	private:
		char* str;
	public:
		string1(char* s){
			int length = strlen(s);
			str = new char[length+1];
			strcpy(str,s);
		}
		~string1(){
			cout<<"Deleting str\n";
			delete[] str;
		}
		void display(){
			cout<<str<<endl;
		}
		
};
int main(){
	string1 s1("This is DMA example.");
	cout<<"s1: ";
	s1.display();
	return 0;
	}*/
	
	
	
	

/*#include<iostream>
#include<stdlib.h>
using namespace std;
class Employee{
	int id;
	float salary;
	public:
		void input(){
			cout<<"Enter Id: ";
			cin>>id;
			cout<<"\nEnter Salary: ";
			cin>>salary;
		}
		void display(){
			cout<<"ID: "<<id<<" "<<"Salary: "<<salary;
		}
};
int main(){
	int n;
	cout<<"\nEnter number of employee: ";
	cin>>n;
	Employee *p = new Employee[n];
	Employee *d=p;
	Employee *flag = p;
	if(p=NULL){
		cout<<"\nMemory allocation failure";
		exit(1);
	}
	for(int i =0;i<n;i++){
		p->input();
		p++;
	}
	for(int i=0;i<n;i++){
		d->display();
		d++;
			
		}
		delete[] flag;
}*/






/*#include<iostream>
using namespace std;
class base{
	public:
		base(){
			cout<<"Constructing base."<<endl;
		}
		virtual ~base(){
			cout<<"Destructing base."<<endl;
		}
};
class derived:public base{
	public:
	derived(){
		cout<<"Constructing derived."<<endl;
	}
	~derived(){
		cout<<"Destructing derived."<<endl;
	}
};
int main(){
	base *b = new derived;
	delete b;
	return 0;
}*/









//______________________FUNCTION OVERLOADING_____________________________
/*#include<iostream>
using namespace std;
class overloading{
	public:
		int area(int side){
			return (side*side);
			
		}
		int area(int length,int width){
			return (length*width);
		}
		float area(float radius){
			return (3.14*radius*radius);
		}
		
};
int main(){
	overloading obj1;
	int square,rectangle;
	float circle;
	square=obj1.area(5);
	cout<<"Area of square is: "<<square;
	rectangle=obj1.area(5*4);
	cout<<"\nArea of Reactangle is: "<<rectangle;
	circle = obj1.area(3.4f);
	cout<<"\nArea of circle is: "<<circle;
}*/






//__________________RUNTIME POLYMORPHISM_________________________
/*#include<iostream>
using namespace std;
class BC{
	public:
		void printBC(){
			cout<<"Printing message in base class"<<endl;
		}
		void virtual show(){
			cout<<"Show() of base class\n"<<endl;
		}
		
};
class DC:public BC{
	public:
		void printDC(){
			cout<<"\nPrinting message in Derived class"<<endl;
		}
		void show(){
			cout<<"Show() of derived class";
		}
};
int main(){
	BC *bptr;
	BC base;
	bptr = &base;
	cout<<"bptr points to base of the object\n";
	bptr->show();
	DC derived;
	bptr = &derived;
	cout<<"bptr now points to derived objects\n";
	bptr->show();
}*/





//____________________TYPE CASTING_____________________
/*#include<iostream>
using namespace std;
class BC{
	public:
		void printBC(){
			cout<<"Printing message in base class"<<endl;
		}
		void show(){
			cout<<"Show() of base class\n"<<endl;
		}
		
};
class DC:public BC{
	public:
		void printDC(){
			cout<<"\nPrinting message in Derived class"<<endl;
		}
		void show(){
			cout<<"Show() of derived class";
		}
};
int main(){
	BC *bptr;
	BC base;

	DC derived;

	
	DC *dptr;
	dptr = &derived;
	cout<<"dptr is derived type pointer\n";
	dptr->show();
	dptr->printDC();
	cout<<"using ((DC*)bptr)\n";
	((DC*)bptr)->show();
	((DC*)bptr)->printDC();
}*/







/*#include<iostream>
using namespace std;
class add{
	int a;
	int b;
	public:
		void virtual s(){
			cout<<"Enter First Value: ";
			cin>>a;
			cout<<"\nEnter Second Value: ";
			cin>>b;
		}
		void virtual sum(){
			cout<<"\nAddition of both number is: "<<a+b<<endl;
			cout<<"______________________________________________________"<<endl;
		}
};
class ad:public add{
	int a;
	int b;
	public:
		void s(){
			cout<<"\nEnter First Value: ";
			cin>>a;
			cout<<"\nEnter Second Value: ";
			cin>>b;
		}
		void sum(){
			cout<<"\nAddition of both number is: "<<a+b<<endl;
		}
};
int main(){
	add *p;
	add base;
	p = &base;
	p->s();
	p->sum();
	ad derived;
	p = &derived;
	p->s();
	p->sum();
}*/






/*#include<iostream>
using namespace std;
class shape{
	protected:
		double a,b;
	public:
		void read(){
			cout<<"Enter First Value: ";
			cin>>a;
			cout<<"\nEnter Second Value: ";
			cin>>b;
		}
		void virtual cal_area(){
			cout<<"This is Base Class Calculating area"<<endl;
		}
};

class rectangle:public shape{
	public:
		void cal_area(){
			double area=a*b;
			cout<<"\nArea of Rectangle is: "<<area<<endl;
		}
		
};
class triangle:public shape{
	public:
		void cal_area(){
			double area=(a*b)/2;
			cout<<"\nArea of triangle is: "<<area<<endl;
		}
};
int main(){
	shape b,*p;
	p=&b;
	p->cal_area();
	rectangle d;
	p=&d;
	p->read();
	p->cal_area();
	triangle d1;
	p=&d1;
	p->read();
	p->cal_area();
}*/











/*#include<iostream>
using namespace std;
class employe{
	protected:
		int x;
	public:
		void read(){
			cout<<"Enter Your Salary according to per day: ";
			cin>>x;

		}
		void virtual salary(){
			cout<<"This is Base Class Calculating Salary"<<endl;
		}
};

class permanent:public employe{
	public:
		void salary(){
			
			cout<<"\nMonthly salary of permanent employee is: "<<x*30<<endl;
		}
		
};
class adhoc:public employe{
	public:
		void salary(){
			
			cout<<"\nMonthly Salary of adhoc is: "<<x*30<<endl;
		}
};
int main(){
	employe *p,b;
	p=&b;
	p->salary;
	permanent d;
	p=&d;
	p->read;
	p->salary;
	adhoc d1;
	p=&d1;
	p->read;
	p->salary
}*/









/*#include<iostream>
using namespace std;
class sample{
	public:
		virtual void example()=0;
		void show(){
			cout<<"This is sample abstract class"<<endl;
		}
};
class derived1:public sample{
	public:
		void example(){
			cout<<"C++";
		}
		
};
class derived2:public sample{
	public:
		void example(){
			cout<<"\nDSA";
		}
};

int main(){
	sample *ptr;
	derived1 d;
	ptr=&d;
	ptr->example();
	ptr->show();
	derived2 d1;
	ptr=&d1;
	ptr->example();
	ptr->show();
}*/







#include<iostream>
#include<cstring>
using namespace std;
class employe{
	int id;
	char name[10];
	int salary;
	employe *next;
	public:
		employe(){
			next = NULL;
		}
		void get(){
			cout<<"Enter ID of the employe: ";
			cin>>id;
			cout<<"Enter Name of the employe: ";
			cin>>name;
			cout<<"Enter the salary of the employe: ";
			cin>>salary;
		}
		void link(employe *t){
			next = t;
		}
		void print(){
			employe *p=this;
			while(p!=NULL){
				cout<<"\nID: "<<p->id<<"\n"<<"Name: "<<p->name<<"\n"<<"Salary: "<<p->salary<<endl;
					p=p->next;
			}
		}
};

int main(){
	employe e,e1,e2,e3;
	e.get();
	e1.get();
	e2.get();
	e3.get();
	e.link(&e1);
	e1.link(&e2);
	e2.link(&e3);
	e.print();
}
