#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1("12345");
	string s2("abcdefghijkl");
	cout<<"\n Using append with 1 parameter: ";
	s1.append(s2);
	cout<<s1<<endl;
	cout<<"\n Using append with 3 parameter: ";
	s1.append(s2,2,3);
	cout<<s1<<endl;
	string s3("Hello");
	string s4("World");
	string s5("Yes");
	string s6("Programming");
	s3.insert(1,s4);
	cout<<"\n Using insert function: ";
	cout<<s3<<endl;
	s4.replace(1,3,s5,1,1);
	cout<<"\n Using raplace function: ";
	cout<<s4<<endl;
	s6.erase(1,4);
	cout<<"\n Using erase function: ";
	cout<<s6<<endl;
	return 0;
}
