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
