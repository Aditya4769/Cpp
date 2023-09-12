//#include<iostream>
//#include<string>
//using namespace std;
//class hero{
//	private:
//		int health;
//		string c;
//	public:
//		static int project;
//		int x;
//	static int random(){
//		return project;
//	}
//	void get(){
//		cout<<"Enter Health Percentage: ";
//		cin>>health;
//		cout<<"Enter Name: ";
//		cin>>c;
//	}
//	void display(){
//		cout<<"\nHealth is: "<<health<<endl;
//		cout<<"\nName is: "<<c<<endl;
//	}
//};
//int hero::project=5;
//int main(){
//	cout<<hero::random()<<endl;
//	hero h1;
//	h1.get();
//	h1.display();
//	}




#include<iostream>

using namespace std;
union money{
	int rice; //4 byte
	char car[20]; //1 byte
	float pounds; //4 byte
};
enum main{
	
};
int main(){
	union money obj[4];
	obj.rice = 45;
	cout<<obj.rice<<endl;
	cout<<"Hello: ";
	cin>>obj.car;
	cout<<obj.car<<endl;
	obj.pounds = 45.24;
	cout<<obj.pounds<<endl;
	cout<<obj.rice<<endl;
}
