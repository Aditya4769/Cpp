/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string s;
	ofstream fin;
	fin.open("out1.txt",ios::app);
	cout<<"Enter the string: ";
	getline(cin,s);
	fin<<s;
	cout<<"Data Saved";
	fin.close();
	return 0;
	
}*/



/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream fin;
	fin.open("out1.txt");
	char ch;
	ch = fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();
	}
	fin.close();
	return 0;
}*/





/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream fin1;
	fin1.open("out.txt");
	fin1<<"Hello Hi";
	fin1.close();
	ifstream fin;
	fin.open("out.txt");
	int count = 0;
	char ch;
	int vowel=0;
	ch=fin.get();
	while(!fin.eof())
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
			vowel++;
			cout<<ch<<" "<<endl;
			ch=fin.get();
		}
		count++;
		ch=fin.get();
	}
	cout<<"Number of vowel in file are "<<vowel;
	cout<<"Number of Characters in file are "<<count;
	fin.close();
	return 0;
	}*/
	
	
	
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream outfile;
	outfile.open("Question.txt");
	outfile<<"\n What is C language";
	outfile<<"\n What is C++ language";
	outfile.close();
	outfile.open("Answer.txt");
	outfile<<"\n Structured language";
	outfile<<"\n Object oriented language";
	outfile.close();
	char ques[80],ans[80];
	ifstream inpfile;
	inpfile.open("Question.txt");
	cout<<"\n*******Sample Question for Quiz Contest********";

	while(inpfile.eof()==0)
	{
		inpfile.getline(ques,80);
		cout<<"\n"<<ques<<endl;
	
		
	}
	inpfile.close();
	inpfile.open("Answer.txt");
	cout<<"\n*******Sample Answer for Quiz Contest********";
	while(inpfile){
		inpfile.getline(ans,80);
		cout<<"\n"<<ans<<endl;
	}
	inpfile.close();
	}
