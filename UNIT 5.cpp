/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *p = NULL;
	p=new int(12);
	
	if(!p){
		cout<<"\nMemory allocation failure ";
		exit(1);
	}
//	if(p == NULL){
//		cout<<"\nMemory allocation failure ";
//		exit(1);
//	}
	else{
		cout<<"Memory allocated successfully\n";
		cout<<"Integer value stored is: "<<*p;
		delete p;
		cout<<"\nMemory deallocated";
	}
	return 0;
}*/






/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *fact = NULL;
	int *p =NULL;
	p = new int;
	fact = new int;
	if(p==NULL||fact==NULL){
		cout<<"\nMemory allocation failure";
		exit(1);
	}
	cout<<"Enter the number: ";
	cin>>*p;
	*fact = 1;
	for(int i=1;i<=*p;i++){
		*fact = *fact*i;
	}
	cout<<"\nFactorial of the number is: "<<*fact<<endl;
	delete p;
	delete fact;
	cout<<"p Memory deallocated";
	cout<<"\nFact memory deallocated";
	return 0;
}*/





/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *arr;
	int size;
	cout<<"\nEnter the size of integer array;";
	cin>>size;
	cout<<"\nCreating an array of size"<<size;
	arr=new int[size];
	if(arr==NULL){
		cout<<"\nProblem in memory allocation.";
		exit(1);
	}
	else{
		cout<<"\nDynamic allocation of memory for array is successful";
		for(int i=0;i<size;i++){
			cout<<"\n";
			cin>>*(arr+i);
		}
		for(int i=0;i<size;i++){
			cout<<*(arr+i)<<" ";
		}
		delete[] arr;
		cout<<"\nMemory deallocated";
	}
}*/




/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *arr;
	int size;
	int sum=0;
	cout<<"Enter the size of integer array;";
	cin>>size;
	cout<<"\nCreating an array of size"<<size;
	arr=new int[size];
	if(arr==NULL){
		cout<<"Problem in memory allocation.";
		exit(1);
	}
	else{
		cout<<"Dynamic allocation of memory for array is successful"<<endl;
		for(int i=0;i<size;i++){
			
			cin>>*(arr+i);
		}
		for(int i=0;i<size;i++){
			sum = sum+*(arr+i);
		}
		cout<<"Sum of the array elements: "<<sum;
		delete[] arr;
		cout<<"\nMemory deallocated";
	}
}*/






/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	double *arr,*sum,*avg;
	int size;
	sum = new double;
	avg = new double;
	cout<<"Enter the size of double array: ";
	cin>>size;
	cout<<"\nCreating an array of size "<<size<<endl;
	arr = new double[size];
	if(arr==NULL||sum==NULL||avg==NULL){
		cout<<"\nProblem in memory allocation";
		exit(1);
	}
	cout<<"\nEnter array elements: ";
	for(int i =0;i<size;i++){
		cin>>arr[i];
		
	}
	for(int i=0;i<size;i++){
		*sum=*sum+arr[i];
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	*avg = *sum/size;
	cout<<"\nAverage is: "<<*avg<<endl;
	cout<<"Sum is: "<<*sum<<endl;;
	delete[] arr;
	delete sum;
	delete avg;
	cout<<"Memory deallocated.";
}*/




/*#include<iostream>
#include<stdlib.h>
using namespace std;
class Array{
	int *arr;
	int size;
	public:
		void get(int n){
			size = n;
			arr = new int[size];
			for(int i=0;i<size;i++){
				cin>>arr[i];
			}
		}
		int get_sum(){
			int sum=0;
			for(int i=0;i<size;i++){
				sum +=arr[i];
				
			}
			return sum;
		}
		void display(){
			cout<<"Elements in the array are: "<<endl;
			for(int i=0;i<size;i++){
				cout<<arr[i]<<endl;
			}
			cout<<"\nSum of elements present in the array: "<<get_sum()<<endl;;
		}
		
		~Array(){
			delete[] arr;
			cout<<"\nMemory deallocated";
	}
	
			
};
int main(){
	Array a;
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	a.get(n);
	a.display();
}*/







/*#include<iostream>
#include<stdlib.h>
using namespace std;
class Array{
	int *arr;
	int size;
	public:
		Array(int n){
			size = n;
			arr = new int[size];
			for(int i=0;i<size;i++){
				cin>>arr[i];
			}
		}
		int get_sum(){
			int sum=0;
			for(int i=0;i<size;i++){
				sum +=arr[i];
				
			}
			return sum;
		}
		void display(){
			cout<<"Elements in the array are: "<<endl;
			for(int i=0;i<size;i++){
				cout<<arr[i]<<endl;
			}
			cout<<"\nSum of elements present in the array: "<<get_sum()<<endl;;
		}
		
		~Array(){
			delete[] arr;
			cout<<"\nMemory deallocated";
	}
	
			
};
int main(){
	
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	Array a(n);
	
	a.display();
}*/







/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char* str = "Hello this is aditya this side.";
	int len = strlen(str);
	char *ptr;
	ptr = new char[len+1];
	strcpy(ptr,str);
	cout<<"ptr = "<<ptr<<endl;
	delete[] ptr;
	cout<<"Memory deallocated";
	return 0;
}*/






/*#include<iostream>
#include<stdlib.h>
using namespace std;
class example1{
	char* ptr;
	public:
		example1(){
		ptr = new char[8];
		ptr = "Dynamic";
		
	 }
	
	void show(){
		cout<<ptr<<endl;
	}	
};
int main(){
	example1 *ptr = new example1;
	example *e;
	int *p=new int;
	ptr->show();
}*/






#include<iostream>
#include<string.h>
using namespace std;
class string1{
	private:
		char* str;
	public:
		string1(char* s){
			int length = strlen(s);
			str = new char[length+1];
			strcpy(str,s);
		}
		~string1(){
			cout<<"Deleting str\n";
			delete[] str;
		}
		void display(){
			cout<<str<<endl;
		}
		
};
int main(){
	string1 s1("This is DMA example.");
	cout<<"s1: ";
	s1.display();
	return 0;
	}
