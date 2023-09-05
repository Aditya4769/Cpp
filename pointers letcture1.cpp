//#include<iostream>
//using namespace std;
//int main(){
//	int a[]={1,2,3,4,5};
//	int *p = a;
//	int *p1 = a;
//	for (int i=0;i<5;i++){
//		cin>>*(p+i);
//	}
////	p=a;
//	for(int i=0;i<5;i++){
//		cout<<*(p+i);
//	}
//	return 0;
//}



/*#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,5};
	int *p = a;
	int *p1 = &a[3];
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;
	p=p+2;
	cout<<*p<<endl;
	p--;
	cout<<*p<<endl;
	p=p-2;
	cout<<*p<<endl<<endl;
	cout<<(p1-p)<<endl;
		return 0;
}*/





#include<iostream>
using namespace std;
int main(){
	int a[5],i,max;
	int *p = a; //int *p = &a[0]
	for(i=0;i<5;i++){
		cin>>*(p+i);
	}
	max = *p;
	for(i=0;i<5;i++){
		if(max<*(p+i)){
			max = *(p+i);
		}
	}
	
		cout<<max;
		return 0;
}
