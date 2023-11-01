#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	for(int i=0;s.size();i++){
		cout<<s.front()<<" ";
		s.pop();
	}
}
