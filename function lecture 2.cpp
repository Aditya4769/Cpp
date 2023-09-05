//using namespace std;
//prototype
//class demo{
//public:
//int a,b;
//void no(){
//a = 45;
//b = 12;
//}
//void show(){
//cout<<a<<" "<<b<<endl;
//}
//}d;
//int main(){
//	d.no();
//	d.show();
//	d.a = 90;
//	d.b = 45;s
//	d.show();	
//}

//#include<cstring>
//using namespace std;
//class student{
//	char name[20];
//	int roll;
//	float cgpa;
//	public:
//		void get(char s[],int r, float b){
//			strcpy(name,s);
//			roll=r;
//			cgpa=b;
//		}
//		void show(){
//			cout<<"Name: "<<name<<endl;
//			cout<<"Roll No: "<<roll<<endl;
//			cout<<"Cgpa: "<<cgpa<<endl;
//		}
//}s1;
//int main(){
//	s1.get("Aditya",35,8.4);
//	s1.show();	
//}


//#include<cstring>
//using namespace std;
//class student{
//	char name[20];
//	int roll;
//	float cgpa;
//	public:
//		void get(char s[],int r, float b){
//			strcpy(name,s);
//			roll=r;
//			cgpa=b;
//		}
//		void show(){
//			cout<<"Name: "<<name<<endl;
//			cout<<"Roll No: "<<roll<<endl;
//			cout<<"Cgpa: "<<cgpa<<endl;
//		}
//}s1;
//int main(){
//	s1.get("Aditya",35,8.4);
//	s1.show();	
//}



#include <iostream>
#include<cstring>
using namespace std;
class student{
	char name[20];
	int Employe_Id;
	char laptop[20];
	public:
		void get(){
			cout<<"Enter  Employe_Name: ";
			cin>>name;
			cout<<"Enter Employe_ID: ";
			cin>>Employe_Id;
			cout<<"Enter Employe_Laptop Name: ";
			cin>>laptop;
		}
		void show(){
			cout<<"Employe_Name: "<<name<<endl;
			cout<<"Employe_ID "<<Employe_Id<<endl;
			cout<<"Employe_Laptop Name: "<<laptop<<endl;
		}
}s1;
int main(){
	s1.get();
	s1.show();	
}
