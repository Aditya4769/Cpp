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


#include<iostream>
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
}
