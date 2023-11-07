/*#include<iostream>
using namespace std;
int main(){
	int mothersage = 50;
	int sonsage = 25;
	try{
		if(sonsage>mothersage){
			throw 404;
		}
		else{
			cout<<"Both Ages are perfect.";
		}
		
		}
		catch(int a){
			cout<<"Sons age cannot be greater than mother age.Error No. "<<a;
	}
		return 0;
	
}*/









/*#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter Values of a and b: ";
	cin>>a>>b;
	try{
		if(b==0){
			throw b;
		}
		else{
			c=a/b;
			cout<<"The Value of c: "<<c<<endl;
		}
	}
	catch(int ){
		cout<<"Division by Zero not possible";
	}
	return 0;
}*/





/*#include<iostream>
using namespace std;
int main(){
	int a[5]={1,2,3,4,5};
	try{
		int i=0;
		while(1){
			cout<<a[i]<<endl;
			i++;
			if(i==5){
				throw i;
			}
			
		}
		
	}
	catch(int j){
			cout<<"Array out of bounds: "<<j;
		}
		return 0;
}*/





/*#include<iostream>
using namespace std;
void divide(int x,int y){
	cout<<"Inside function\n";
	int z;
	z=x/y;
	if(z!=0){
		cout<<z<<endl;
	}
	else{
		throw 0;
	}
}
int main(){
	try{
		divide(40,20);
		cout<<"One try over"<<endl;
		divide(20,10);
	}
	catch(int){
		cout<<"zero not possible"<<endl;
	}
	cout<<"TRY CATCH OVER!"<<endl;
	return 0;
}*/







/*#include<iostream>
using namespace std;
void test(int x){
	char msg[] = "exception";
	try{
		if(x==1){
			throw x;
		}
		else if(x==0){
			throw 'x';
			
		}
		else if(x==2){
			throw 1.1f;
		}
		else if(x==3){
			throw msg;
		}
		else{
			cout<<"END OF TRY"<<endl;
		}
	}
	catch(float n){
		cout<<"Caught Float"<<endl;
	}
	catch(int m){
		cout<<"Caught Integer"<<endl;
	}
	catch(char z){
		cout<<"Caught character"<<endl;
	}
	catch(char msg[]){
		cout<<msg<<endl;
	}
	catch(...){
		cout<<"END OF TRY CATCH"<<endl;
	}
}
int main(){
	test(1);
	test(0);
	test(2);
	test(3);
	return 0;
}*/







/*#include<iostream>
using namespace std;
void reverse(){
	int a,rev=0,digit;
	cout<<"Enter the value: ";
	cin>>a;
	while(a!=0){
		digit = n%10;
		rev=(rev*10)+digit;
		a = a/10;
	}
	if(rev==a){
		throw float;
	}
}
*/






/*#include<iostream>
using namespace std;
class book{
	private:
		char name[20];
		int pages;
		int x;
		char aname[20];
	public:
		void get(){
			cout<<"Enter Book Name: ";
			cin>>name;
			cout<<"Enter Author Name: ";
			cin>>aname;
			cout<<"Enter no of pages: ";
			cin>>pages;
			try{
				if(pages<=0){
					throw x;
				}
				else{
					display();
				}
				
			}
			catch(int){
					cout<<"No of pages can not be zero";
				}
		}
			void display(){
				cout<<"Author Name: "<<aname<<endl;
				cout<<"Book Name: "<<name<<endl;
				cout<<"No of pages: "<<pages<<endl;
			}
		
};
int main(){
	book b;
	b.get();
	return 0;
}*/










/*#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class error{
	int err_code;
	char *err_desc;
	public:
		error(int c,char *d){
			err_code = c;
			err_desc = new char[strlen(d)+1];
			strcpy(err_desc,d);
		}
		void err_display(){
			cout<<"Error code: "<<err_code<<<<"\nError desc: "<<err_desc;
		}
};
int main(){
	3x
}*/












/*#include<iostream>
using namespace std;
template <class n>
void display(n x){
	cout<<x<<"\n";
}
int main(){
	int a=7;
	float f=6.5;
	char c= 'g';
	cout<<"a: ";
	display(a);
	cout<<"f: ";
	display(f);
	cout<<"c: ";
	display(c);
	return 0;
}*/





/*#include<iostream>
using namespace std;
template <class T>
T square(T num){
	return (num*num);
}
int main(){
	int num1 = 3;
	cout<<"Square of "<<num1<<" = "<<square<int>(num1);
	float num2 = 5.6;
	cout<<"\nSquare of "<<num2<<" = "<<square<float>(num2);
	double num3 = 123.456;
	cout<<"\nSquare of "<<num3<<" = "<<square<double>(num3);
	return 0;
}*/







/*#include<iostream>
using namespace std;
template<class T>
T min1(T a,T b){
	return(a<b?a:b);	
}
int main(){
	int x,y;
	float p,q;
	cout<<"Enter integer values: ";
	cin>>x>>y;
	cout<<"\nEnter integer values: ";
	cin>>p>>q;
	cout<<"\nMin of integer values: "<<min1<int>(x,y);
	cout<<"\nMin of integer values: "<<min1<float>(p,q);
	return 0;
}*/










/*#include<iostream>
using namespace std;
template<class T>
void swap(T a,T b){
	T temp=a;
	a=b;
	b=temp;
}
int main(){
	int inum1 = 3, inum2 = 5;
	float fnum1 = 4.6,fnum2 = 5.64;
	char cnum1 = 'A',cnum2 = 'C';
	cout<<"Before Swaping: ";
	cout<<"\n num1: "<<inum1<<" and num2: "<<inum2<<endl;
	cout<<"After Swaping: ";
	swap<int>(inum1,inum2);
	cout<<"\n Num1: "<<inum1<<"and Num2: "<<inum2<<endl;
		cout<<"Before Swaping: ";
	cout<<"\n num1: "<<fnum1<<" and num2: "<<fnum2<<endl;
	cout<<"After Swaping: ";
	swap<int>(fnum1,fnum2);
	cout<<"\n Num1: "<<fnum1<<"and Num2: "<<fnum2<<endl;
		cout<<"Before Swaping: ";
	cout<<"\n Char1: "<<cnum1<<" and Char2: "<<cnum2<<endl;
	cout<<"After Swaping: ";
	swap<int>(cnum1,cnum2);
	cout<<"\n Char1: "<<cnum1<<" and Char2: "<<cnum2<<endl;
	return 0;
	
}*/













/*#include<iostream>
using namespace std;
template<class T>
class abc{
	T a,b;
	public:
		abc(T x,T y){
			a=x;
			b=y;
		}
		T max1(){
			return (a>b?a:b);
		}
};
int main(){
	abc<int>obj(10,20);
	cout<<"Max value is: "<<obj.max1()<<endl;
	abc<float>obj1(10.2,42.12);
	cout<<"Max value is: "<<obj1.max1()<<endl;
	abc<char>obj2('A','a');
	cout<<"Max value is: "<<obj2.max1()<<endl;
}*/








/*#include<iostream>
using namespace std;
template<class T>
class abc{
	T *a;
	int size;
	public:
		abc(){
			cout<<"Enter the size of array: ";
			cin>>size;
			a=new T[size];
			cout<<"\nEnter the array values: ";
			for(int i=0;i<size;i++){
				cin>>a[i];
			}
		}
		T sum1(){
			T sum=0;
			for(int i=0;i<size;i++){
			sum=sum+a[i];
			
			}
			return sum;
		}	
};
int main(){
	abc<int>obj1;
	cout<<"\nSum of integer array elements are: "<<obj1.sum1()<<endl;
	abc<float>obj2;
	cout<<"\nSum of float array elements are: "<<obj2.sum1();
	return 0;
}*/










#include<iostream>
using namespace std;
template<class T1,class T2>
class Test{
	T1 a;
	T2 b;
	public:
		Test(T1 x,T2 y){
			a=x;
			b=y;
		}
		void show(){
			cout<<a<<" and "<<b<<"\n";
		}
};
int main(){
	Test<float,int>test1(1.23f,12);
	test1.show();
	Test<int,char>test2(10,'c');
	test2.show();
}
