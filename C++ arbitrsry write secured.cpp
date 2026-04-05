#include<iostream>
using namespace std;
int main(){
	int a=5;
	int b=20;
	int* ptr=nullptr;
	///restrict pointer usage
	ptr=&a;
	if(ptr!=nullptr){
		*ptr=100;//safe write
	}
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}
