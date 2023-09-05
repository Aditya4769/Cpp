//#include<iostream>
//using namespace std;
//class xyz;
//class pqr;
//class abc{
//	int a;
//	public:
//		void get(){
//			cout<<"Enter First Number: ";
//			cin>>a;
//		}
//		friend void greatest(abc,xyz,pqr);
//};
//class xyz{
//		int b;
//	public:
//		void get(){
//			cout<<"Enter Second Number: ";
//			cin>>b;
//		}
//		friend void greatest(abc,xyz,pqr);
//};
//class pqr{
//		int c;
//	public:
//		void get(){
//			cout<<"Enter Third Number: ";
//			cin>>c;
//		}
//		friend void greatest(abc,xyz,pqr);
//};
//void greatest(abc A,xyz B,pqr C){
//	if(A.a > B.b && A.a > C.c){
//		cout<<"First Number is Greater: "<<A.a;
//	}
//	else if(B.b > A.a && B.b > C.c){
//		cout<<"Second Number is Greater: "<<B.b;
//	}
//	else{
//		cout<<"Third Number is Greater: "<<C.c;
//	}
//}
//int main(){
//	abc obj;
//	xyz obj1;
//	pqr obj2;
//	obj.get();
//	obj1.get();
//	obj2.get();
//	greatest(obj,obj1,obj2);
//	return 0;
//}





//#include<iostream>
//using namespace std;
//class abc;
//class xyz{
//	int data_xyz;
//	public:
//		void set(int value){
//			data_xyz = value;
//		}
//		friend class abc;
//};
//class abc{
//	int data_abc;
//	public:
//		void setvalue(xyz obj1)
//		{
//			data_abc = obj1.data_xyz;
//			cout<<"Value is:"<<data_abc;
//		}
//};
//int main(){
//	xyz a;
//	abc b;
//	a.set(5);
//	b.setvalue(a);
//	return 0;
//}






//#include<iostream>
//using namespace std;
//class abc;
//class xyz{
//	int data_xyz;
//	int data_xyz1;
//	int value,x;
//	public:
//		void set(int value,int x){
//			data_xyz = value;
//			data_xyz1 = x;
//		}
//		friend class abc;
//};
//class abc{
//	int data_abc;
//	int data_abc1;
//	public:
//		void setvalue(xyz obj1)
//		{
//			data_abc = obj1.data_xyz;
//			data_abc1 = obj1.data_xyz1;
//			cout<<"Value is:"<<data_abc+data_abc1;
//		}
//};
//int main(){
//	xyz a;
//	abc b;
//	a.set(5,4);
//	b.setvalue(a);
//	return 0;
//}




#include<iostream>
using namespace std;
class abc;
class xyz{
	int data_xyz;
	int data_xyz1;
	int value,x;
	public:
		void set(int value,int x){
			data_xyz = value;
			data_xyz1 = x;
		}
		friend class abc;
};
class abc{
	int a;
	int b;
	public:
		void setvalue(xyz obj1)
		{
			a = obj1.data_xyz;
			b = obj1.data_xyz1;
			a = a+b;
			b = a-b;
			a = a-b;
			cout<<"Value of A is: "<<a<<" "<<"Value of B: "<<b;
		}
};
int main(){
	xyz a;
	abc b;
	a.set(5,4);
	b.setvalue(a);
	return 0;
}
