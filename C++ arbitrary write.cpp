#include<iostream>
using namespace std;
int main(){
	int a=5;
	int b=20;
	int* ptr;
	//simulate arbitrary control
	ptr=&b;
	//arbitrary write
	*ptr=999;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<end;
	return 0;
}
