#include<iostream>
using namespace std;
//class demo{
//	private:
//		int a,b;
//	public:
//		demo(){
//			a=9;
//			b=7;
//		}
//		demo(int a1,int b1){
//			
//		}
//		void show(){
//			cout<<a<<" "<<b<<endl;
//		}
//};
//int main(){
//	demo d;
//	demo d1(10,20);
//	d.show();
//	return 0;
//}






/*class demo{
	private:
		int a,b;
	public:
		demo();
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};
demo::demo(){
	a=9;
	b=7;
}
int main(){
	demo d;
	d.show();
	return 0;
}*/


/*class abc_default{
	int x,y;
	public:
		abc_default(){
			cout<<"Enter First Number: ";
			cin>>x;
			cout<<"Enter Seecond Number: ";
			cin>>y;
		}
		void display(){
			cout<<"\nValues of x are: "<<x;
			cout<<"\nValues of y are: "<<y<<endl;
		}
};
int main(){
	abc_default obj[2];
	obj[0].display();
	obj[1].display();
	return 0;
	}*/
	
	
	
/*class abc_parameter{
	int x,y;
	public:
		abc_parameter(int a,int b){
			x=a;
			y=b;
		}
		void display(){
			cout<<"\nValues of x and y are: "<<x<<" "<<y;
		}
};
int main(){
	abc_parameter obj1(2,3),obj2(4,5);
	abc_parameter obj3=abc_parameter(6,7);
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
	}*/
	
	
	
	
/*class abc_overloading{
	int x,y;
	public:
		abc_overloading(){
			x=2;
			y=3;
		}
		abc_overloading(int a){
			x=a;
			y=a;
		}
		abc_overloading(int a,int b){
			x=a;
			y=b;
		}
		void display(){
			cout<<"\nValues of x and y are: "<<x<<" "<<y;
		}
		
};
int main(){
	abc_overloading obj;
	abc_overloading obj1(4);
	abc_overloading obj2(5,8);
	obj.display();
	obj1.display();
	obj2.display();
	return 0;
}*/





/*class area{
	int a,b,c;
	float x;
	//float pi = 3.14;
	int square;
	float circle;
	int rectangle;
	public:
		area(int a){
			square = a*a;
			cout<<"Area of square is: "<<square<<endl;
		}	
		area(float x1){
			x = x1;
			circle = 3.14*(x*x);
			cout<<"Area of circle is: "<<circle<<endl;
		}
		area(int b1,int c1){
			b=b1;
			c=c1;
			rectangle = (b*c);
			cout<<"Area of rectangle is: "<<rectangle<<endl;		
		}
};
int main(){
	area obj(4);
	area obj1(4.12f);
	area obj2(3,5);
}*/





class example{
	int x,y;
	public:
		example(int a,int b){
			x=a;
			y=b;
		}
		example(example &obj){
			x=obj.x;
			y=obj.y;
		}
		void display(){
			cout<<"\nValues of x and y are: "<<x<<" "<<y<<endl;
		}
};
int main(){
	example obj(4,5);
	obj.display();
	example obj1(obj);
	obj1.display();
	example obj2=obj1;
	obj2.display();
	}
