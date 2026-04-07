#include<iostream>
using namespace std;
//c++ secured
int main(){
	int* nullptr;
	int* ptr=new int(10);
	delete ptr;
	ptr=nullptr;//prevent dangling pointer
	if(ptr!=nullptr){
		cout<<"value: "<< *ptr<<endl;
	}else{
		cout<<"pointer is null,cannot access memory."<<endl;
	}
	return 0;
}
