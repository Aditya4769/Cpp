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










/*#include<iostream>
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
}*/







/*#include<iostream>
using namespace std;
template<class T>
class mypair{
	T a,b;
	public:
		mypair(T first,T second){
			a=first;
			b=second;
		}
		T getmax();
};
template<class T>
T mypair<T>::getmax(){
	T rival;
	rival = a>b?a:b;
	return rival;
}
int main(){
	mypair<int>obj(10,20);
	cout<<"Max value is: "<<obj.getmax();
	mypair<float>obj1(10.2,10.5);
	cout<<"\nMax value is: "<<obj1.getmax();
}*/








/*#include<iostream>
using namespace std;
template<class T>
class sample{
private:
T value1,value2;
public:
void get();
void sum();	
};
template<class T>
void sample<T>::get(){
	cin>>value1>>value2;
}
template<class T>
void sample<T>::sum(){
	cout<<"Sum of Both values are: "<<value1+value2<<endl;
}
int main(){
	sample<int>obj;
	obj.get();
	obj.sum();
}*/





/*#include<iostream>
using namespace std;
template<class T>
class sample{
	private:
		T a;
	public:
		void sum(int n);
};
template<class T>
void sample<T>::sum(int n){
	int i;
	T s=0;
	for(i=0;i<n;i++){
		cin>>a;
		s=s+a;
	}
	cout<<s;
}

int main(){
	sample<int>s1;
	s1.sum(5);
}*/






/*#include<iostream>
using namespace std;
template<class T1,class T2>
class sample{
	private:
		T1 x;
		T2 y;
	public:
		sample(T1 a,T2 b);
		void putdata();
};
template<class T1,class T2>
sample<T1,T2>::sample(T1 a,T2 b){
	x=a;
	y=b;
}
template<class T1,class T2>
void sample<T1,T2>::putdata(){
	cout<<x<<"\t"<<y<<endl;
}
int main(){
	sample<int,int>s1(10,20);
	sample<float,float>s2(10,2.30);
	sample<char,int>s3('x',20);
	s1.putdata();
	s2.putdata();
	s3.putdata();
}*/







/*#include<iostream>
using namespace std;
template<class T>
class alpha{
	protected:
		T a;
	public:
		void check(){
			cout<<"\nHello";
		}
};
template<class T,class T1>
class beta:public alpha<T>{
	private:
		T1 b;
		public:
			void get(){
				cin>>alpha<T>::a>>b;
			}
			void show(){
				cout<<"a: "<<alpha<T>::a<<endl;
				cout<<"b: "<<b<<endl;
				alpha<T>::check();
			}
			
};
int main(){
	beta<int,float>b1;
	beta<float,int>b2;
	cout<<"\nEnter a(int) and b(float): ";
	b1.get();
	b1.show();
	cout<<"\nEnter a(float) and b(int): ";
	b2.get();
	b2.show();
}*/






//__________________________Standard Template Library_______________________________

/*#include<iostream>
using namespace std;
#include<vector>
int main(){
	vector<int> v1(5);
	cout<<v1.size()<<endl;
	for(int i=0;i<v1.size();i++){
		v1[i]=i;
	}
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<endl;
	}
	for(int i=5;i<10;i++){
		v1.push_back(i);
	}
	cout<<"Size is: "<<v1.size()<<"\n";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<"\t";
	}
	v1.pop_back();
	v1.pop_back();
	cout<<"\nSize is: "<<v1.size()<<"\n";
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<"\t";
	}
	vector<int>::iterator v;
	v=v1.begin();
	while(v!=v1.end()){
		cout<<"\nValue of v: "<<*v<<endl;
		v++;
		
	}
	return 0;
	
	
}*/






/*#include<iostream>
#include<vector>
using namespace std;
main(){
	vector<int> v1;
	cout<<v1.size()<<endl;
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(2);
	v1.push_back(1);
	cout<<"Size of Vector is: "<<v1.size()<<endl;
	cout<<"Element in arrays are: "<<endl;
	int i;
	for(i=0;i<v1.size();i++){
		cout<<v1[i]<<"\t";
	}
	cout<<"\nUsing iterator for displaying: "<<endl;
	vector<int>::iterator it;
	for(it = v1.begin();it!=v1.end();it++){
		cout<<*it<<"\t";
	}	
	cout<<endl;
	v1.push_back(9);
	v1.push_back(8);
	cout<<endl;
	for(it=v1.begin();it!=v1.end();it++){
		cout<<*it<<"\t";
	}
	cout<<endl;
	it=v1.begin();
	it++;
	it++;
	v1.insert(it,15);
	cout<<"After Insertion: "<<endl;
	for(it=v1.begin();it!=v1.end();it++){
		cout<<*it<<"\t";
	}
	cout<<endl;
	v1.erase(v1.begin()+4);
	cout<<"After Deletion: "<<endl;
	for(it=v1.begin();it!=v1.end();it++){
		cout<<*it<<"\t";
	}
	cout<<endl;
	cout<<"Size Before is: "<<v1.size()<<endl;
	v1.clear();
	cout<<"Size After clear is: "<<v1.size();
}*/






/*#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1(10);
	cout<<"Size is: "<<v1.size()<<endl;
	for(int i=0;i<v1.size();i++){
		v1[i]=i;
	}
	vector<int>::iterator i=v1.begin();
	i=i+3;
	v1.insert(i,100);
	v1.erase(v1.begin()+1,v1.begin()+5);
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<"\t";
	}
	cout<<"\nSize is: "<<v1.size()<<endl;
	v1.clear();
	cout<<"Size After Clear is: "<<v1.size();
}*/









/*#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l){
	list<int>::iterator p;
	for(p=l.begin();p!=l.end();p++){
		cout<<*p<<"\t";
	}
}
int main(){
	list<int> list1;
	list<int> list2(5);
	for(int i=0;i<3;i++){
		list1.push_back(i);
		cout<<"\nDisplaying First List: ";
		display(list1);
	}
		list<int>::iterator p;
		for(p=list2.begin();p!=list2.end();p++){
			*p=1;
			cout<<"\nDisplaying Second list: ";
			display(list2);
			cout<<"\nPushing element at front: ";
			list1.push_front(100);
			display(list1);
			cout<<"\nPoping element from front: ";
			list2.pop_front();
			display(list2);
			cout<<"\nSorting First list: ";
			list1.sort();
			display(list2);
			cout<<"\nMerging list: ";
			list1.merge(list2);
			display(list1);
			cout<<endl;
			list1.reverse();
			display(list1);
		}

}*/




#include<iostream>
using namespace std;
#include<list>

