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






#include<iostream>
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
}
