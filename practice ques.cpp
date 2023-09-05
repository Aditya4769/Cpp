//#include<iostream>
//#include<cstring>
//using namespace std;
//class student
//{
//	string name;
//	string stream;
//	static int regno;
//	public:
//		void get()
//		{
//			cout<<"Enter Your Name"<<endl;
//			cin>>name;
//			cout<<"Enter Your Stream"<<endl;
//			cin>>stream;
//			
//		}
//		void show(){
//			cout<<"Student Name is: "<<name<<endl;
//			cout<<"Your Stream is: "<<stream<<endl;
//			cout<<"Regno is: "<<regno<<endl;
//			regno++;
//		}
//};
//int student::regno = 1220001;
//int main(){
//	int i,n;
//	cout<<"Enter the no of student: ";
//	cin>>n;
//	student s[n];
//	for(i=0;i<n;i++){
//	
//		s[i].get();
//		s[i].show();
//	
//	}};



//CALL BY VALUE
//#include<iostream>
//using namespace std;
//void swap(int,int);
//int main(){
//	int a=100;
//	int b=200;
//	cout<<"Before swap: "<<a<<endl;
//	cout<<"Before swap: "<<b<<endl<<endl;
//	swap(a,b);
//	cout<<"After swap: "<<a<<endl;
//	cout<<"After Swap: "<<a<<endl;
//	return 0;	
//}
//void swap(int x,int y){
//	int temp;
//	temp=x;
//	x=y;
//	y=temp;
//	cout<<"After swap: "<<x<<endl;
//	cout<<"After swap: "<<y<<endl<<endl;	
//}








//CALL BY REFRENCE

//#include<iostream>
//using namespace std;
//void swap(int&,int&);
//int main(){
//	int a=100;
//	int b=200;
//	cout<<"Before swap: "<<a<<endl;
//	cout<<"Before swap: "<<b<<endl<<endl;
//	swap(a,b);
//	cout<<"After swap: "<<a<<endl;
//	cout<<"After Swap: "<<a<<endl;
//	return 0;	
//}
//void swap(int &x,int &y){
//	int temp;
//	temp=x;
//	x=y;
//	y=temp;
//	cout<<"After swap: "<<&x<<endl;
//	cout<<"After swap: "<<&y<<endl<<endl;	
//}




// CALL BY ADDRESS

//#include<iostream>
//using namespace std;
//void swap(int*,int*);
//int main(){
//	int a=100;
//	int b=200;
//	cout<<"Before swap: "<<a<<endl;
//	cout<<"Before swap: "<<b<<endl<<endl;
//	swap(&a,&b);
//	cout<<"After swap: "<<a<<endl;
//	cout<<"After Swap: "<<a<<endl;
//	return 0;	
//}
//void swap(int *x,int *y){
//	int temp;
//	temp=x;
//	x=y;
//	y=temp;
//	cout<<"After swap: "<<*x<<endl;
//	cout<<"After swap: "<<*y<<endl<<endl;	
//}




#include<iostream>
using namespace std;
void fun(int a,int b,int c=10);
int main(){
	fun(2,3);
	return 0;
}
void fun(int a,int b, int c){
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
}
