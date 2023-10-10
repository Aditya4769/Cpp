/*#include<iostream>
using namespace std;
class variable
{
    int x,y,z;
    public:
        void getdata(int a,int b,int c){
            x = a;
            y = b;
            z = c;
        }
        void display(){
            cout<<x<<" ";
            cout<<y<<" "<<z<<"\n";
        }
        void operator -(){
            x = -x;
            y = -y;
            z = -z;
        }
};
int main(){
    variable obj;
    obj.getdata(15,-20,10);
    obj.display();
    // -obj;
    obj.operator -();
    obj.display();
    
}*/


/*#include<iostream>
using namespace std;
class integer{
    int x,y;
    public:
        integer(){
            
        }
        integer(int x1,int y1){
            x=x1;
            y=y1;
        }
        integer operator -(){
            integer t;
            t.x = -x;
            t.y = -y;
            return t;
        }
        void display(){
            cout<<"x= "<<x<<" "<<"y= "<<y<<" "<<endl;
        }
        
};
int main(){
    integer a,b(5,6),c(-7,-9);
    b.display();
    a = -b;
    a.display();
    b.display();
	a=-c;
	a.display();
	return 0;
}*/










/*#include<iostream>
using namespace std;
class variable
{
    int x,y,z;
    public:
        void getdata(int a,int b,int c){
            x = a;
            y = b;
            z = c;
        }
        void display(){
            cout<<x<<" ";
            cout<<y<<" "<<z<<"\n";
        }
        void operator ++(){
            x = ++x;
            y = ++y;
            z = ++z;
        }
};
int main(){
    variable obj;
    obj.getdata(15,-20,10);
    obj.display();
    ++obj;
    // obj.operator ++();
    obj.display();
    
} */





/*#include<iostream>
using namespace std;
class variable
{
    int x,y,z;
    public:
        void getdata(int a,int b,int c){
            x = a;
            y = b;
            z = c;
        }
        void display(){
            cout<<x<<" ";
            cout<<y<<" "<<z<<"\n";
        }
        void operator ++(int){
            x = x++;
            y = y++;
            z = z++;
        }
};
int main(){
    variable obj;
    obj.getdata(15,-20,10);
    obj.display();
    obj++;
    // obj.operator ++();
    obj.display();
    
} */


/*#include<iostream>
using namespace std;
class abc{
    int x,y;
    public:
    abc(){
        x=4;
        y=8;
    }
    void display(){
        cout<<x<<" "<<y<<endl;
    }
    friend void operator -(abc &);
};
void operator -(abc &a){
    a.x = -a.x;
    a.y = -a.y;
}
int main(){
    abc a1;
    a1.display();
    operator -(a1);
    a1.display();
}*/


/*#include<iostream>
using namespace std;
class Number{
	int x;
	public:
		Number(int n){
			x = n;
		}
		void operator++(int){
			cout<<"\nPostfix increment: ";
			cout<<x++;
		}
		friend void operator--(Number,int);
};
void operator--(Number obj1,int){
	cout<<"\nPostfix decrement:";
	cout<<obj1.x--;
}
int main(){
	Number N1(10);
	N1++;
	N1--;
	
}*/




//BINARY OPERATORS
/*#include<iostream>
using namespace std;
class demo{
	int a;
	int b;
	public:
		void get(int a1, int b1){
			a=a1;
			b=b1;
		}
		void operator +(demo &d2){
			cout<<a+d2.a<<" "<<b+d2.b;
		}
};
int main(){
	demo d,d1;
	d.get(10,40);
	d1.get(20,50);
	d.operator +(d1);
	return 0;
}*/


/*#include<iostream>
using namespace std;
class demo{
	int a;
	int b;
	public:
		void get(int a1, int b1){
			a=a1;
			b=b1;
		}
		demo operator +(demo &d2){
			demo s;
			s.a = a+d2.a;
			s.b = b+d2.b;
			return s;
		}
		void show(){
			cout<<a<<" "<<b;
		}
};
int main(){
	demo d,d1,sum;
	d.get(10,40);
	d1.get(20,50);
	sum = d+d1;
	//d.operator +(d1);
	sum.show();
	return 0;
}*/





/*#include<iostream>
using namespace std;
class demo{
	int a;
	int b;
	public:
		void get(int a1, int b1){
			a=a1;
			b=b1;
		}
		void operator +(int d2){
			cout<<a+d2<<" "<<b+d2<<endl;
		}
};
int main(){
	demo d,d1;
	d.get(10,40);
	d1.get(20,50);
	d.operator +(10);
	d1.operator +(10);
	return 0;
}*/




/*#include<iostream>
using namespace std;
class demo{
    private:
        int d,m,y;
    public:
        demo(int dd,int mm, int yy){
            d=dd;
            m=mm;
            y=yy;
        }
        void show(){
            cout<<d<<"/"<<m<<"/"<<y<<endl;
        }
        int operator == (demo&);
        
};
int demo::operator==(demo &d2){
    if((y==d2.y)&&(d==d2.d)&&(m==d2.m)){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    demo d1(10,12,2005);
    demo d2(10,12,2005);
    d1.show();
    d2.show();
    if(d1==d2){
        cout<<"d1 and d2 are equal.";
    }
    else{
        cout<<"d1 and d2 are not equal";
    }
}*/


/*#include<iostream>
#include<cstring>
using namespace std;
class abc{
	char name[20];
	public:
		void get(){
			cin>>name;
		}
		void operator <(abc &a){
			if(strcmp(name,a.name)==0){
				cout<<"It is equal";
				}
			else
				{
					cout<<"Not equal";
				}
		}
};
int main(){
	abc obj,obj1;
	obj.get();
	obj1.get();	
	obj<obj1;
	return 0;
}*/




/*#include<iostream>
using namespace std;
class demo{
	int a;
	int b;
	public:
		void get(int a1,int b1){
			a=a1;
			b=b1;
		}
		friend void operator +(demo&,demo&);
};
void operator +(demo &d2,demo &d3){
	cout<<d2.a+d3.a<<" "<<d2.b+d3.b<<endl;
}
int main(){
	demo d,d1;
	d.get(10,40);
	d1.get(20,50);
	operator +(d,d1);
}*/




/*#include<iostream>
using namespace std;
class logical{
	int x;
	public:
	logical(){
		x=0;
	}
	logical(int a){
		x=a;
	}
	logical operator &&(logical o){
		return(x&&o.x);
	}
	friend bool operator ||(logical o1,logical o2);
};
bool operator ||(logical o1,logical o2){
	return(o1.x||o2.x);
}
int main(){
	logical o1(2),o2(0);
	int x=o1&&o2;
	cout<<x<<endl;
	int y=o1||o2;
	cout<<endl<<y;
	return 0;
}*/





/*#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		void get(){
			cout<<"Enter real no: ";
			cin>>real;
			cout<<"Enter imaginary no: ";
			cin>>img;
		}
		void display(){
			cout<<real<<"+i"<<img;
		}
		friend complex operator +(int &a,complex &c);
};
complex operator +(int &a,complex &c){
	
}*/




//___________________SINGLE INHERITENCE_________________


/*#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int roll_no;
		protected:
			char section[10];
		public:
			void get_rno(){
				cout<<"Enter the roll number: ";
				cin>>roll_no;
			}
			void show_rno(){
				cout<<"\n Roll no: "<<roll_no;
			}
			
};
class result:protected student{
	private:
		float fees;
	public:
		void get_data(){
			get_rno();
			cout<<"\n Enter fees: ";
			cin>>fees;
			cout<<"\n Enter Section: ";
			cin>>section;
		}
		void display(){
			show_rno();
			cout<<"\nFees: "<<fees;
			cout<<"\nSection: "<<section;
		}
		
};
int main(){
	result obj;
	obj.get_data();
	obj.display();
}*/





/*#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int roll_no;
		protected:
			char section[10];
		public:
			void get_rno(){
				cout<<"Enter the roll number: ";
				cin>>roll_no;
			}
			void show_rno(){
				cout<<"\n Roll no: "<<roll_no;
			}
			
};
class result:public student{
	private:
		float fees;
	public:
		void get_data(){
			
			cout<<"\n Enter fees: ";
			cin>>fees;
			cout<<"\n Enter Section: ";
			cin>>section;
		}
		void display(){
			
			cout<<"\nFees: "<<fees;
			cout<<"\nSection: "<<section;
		}
		
};
int main(){
	result obj;
	obj.get_rno();
	obj.get_data();
	obj.show_rno();
	obj.display();
	
}*/





/*#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int roll_no;
		protected:
			char section[10];
		public:
			void get_rno(){
				cout<<"Enter the roll number: ";
				cin>>roll_no;
			}
			void show_rno(){
				cout<<"\n Roll no: "<<roll_no;
			}
			
};
class result:private student{
	private:
		float fees;
	public:
		void get_data(){
			get_rno();
			cout<<"\n Enter fees: ";
			cin>>fees;
			cout<<"\n Enter Section: ";
			cin>>section;
		}
		void display(){
			show_rno();
			cout<<"\nFees: "<<fees;
			cout<<"\nSection: "<<section;
		}
		
};
int main(){
	result obj;
	obj.get_data();
	obj.display();
	
}*/






/*#include<iostream>
using namespace std;
class abc{
	protected:
		int a;
	public:
		void get(){
			cout<<"Enter first Number: ";
			cin>>a;
		}
	
};
class xyz:public abc{
	protected:
		int b;
	public:
		void add(){
			get();
			cout<<"\Enter Second number: ";
			cin>>b;
			
			cout<<"\nSum of Both Number is: "<<a+b<<endl;
		}
};
int main(){
	xyz obj;
	obj.add();
}*/






//_____________MULTI INHERITENCE________________


/*#include<iostream>
using namespace std;
class abc{
	protected:
		int a;
	public:
		void get(){
			cout<<"Enter first Number: ";
			cin>>a;
		}
	
};
class xyz:public abc{
	protected:
		int b;
	public:
		void get_b(){
			get();
			cout<<"\Enter Second number: ";
			cin>>b;
	}
};
class pqr:public xyz{
	int c;
	public:
		void get_c(){
			get_b();
			cout<<"Enter Third Number: ";
			cin>>c;
			cout<<"The sum of all number is: "<<a+b+c;
			
		}
};
int main(){
	pqr obj;
	obj.get_c();
}*/








/*#include<iostream>
using namespace std;
class abc{
	protected:
		int a;
	public:
		void get(){
			cout<<"Enter first Number: ";
			cin>>a;
		}
	
};
class xyz{
	protected:
		int b;
	public:
		void get_b(){
			cout<<"\Enter Second number: ";
			cin>>b;
	}
};
class pqr:public xyz,public abc{
	int c;
	public:
		void get_c(){
			get();
			get_b();
			cout<<"Enter Third Number: ";
			cin>>c;
			cout<<"The sum of all number is: "<<a+b+c;
			
		}
};
int main(){
	pqr obj;
	obj.get_c();
}*/







#include<iostream>
#include<cstring>
using namespace std;
class mamals{
	public:
		void display(){
			cout<<"I am Mammal.";
		}
};
class MarineAnimal{
	public:
		void display(){
			cout<<"\nI am MarineAnimal.";
		}
};

class BlueWhale:public mamals,public MarineAnimal{
	public: 
	void show(){
		cout<<"\nBlueWhale"<<endl;
		mamals::display();
		MarineAnimal::display();
	}
};

int main(){
	BlueWhale obj;
	obj.show();
}
