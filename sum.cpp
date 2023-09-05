#include<iostream>
using namespace std;
//int main(){
//	int a,b,sum;
//	cout<<"Enter First Value: ";
//	cin>>a;
//	cout<<"Enter Second Value: ";
//	cin>>b;
//	sum = a+b;
//	cout<<"The Sum of Both Number are"<<" : "<<a<<" + "<<b<<" = "<<sum;
//}







//int main(){
//	int a,b,temp;
//	cout<<"Enter First Number: ";
//	cin>>a;
//	cout<<"Enter Second Number: ";
//	cin>>b;
//	temp = a;
//	a= b;
//	b = temp;
//	cout<<"The Value of a"<<" = "<<a<<endl;
//	cout<<"The value of b"<<" = "<<b<<endl;
//}

int main()    
{    
int n,r,sum=0,temp;    
cout<<"Enter your Number: ";
cin>>n;    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;

}
if (temp == sum){
	cout<<"Yes Its palndrome.";
}
else{
	cout<<"No This is not palndrome.";
}
}    
