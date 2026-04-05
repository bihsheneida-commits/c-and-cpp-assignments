#include<iostraem>
using namespace std;
//c++ use after free
int main(){
	int* ptr=new int(10);
	delete ptrr;//mempry freed
	cout<<"value: "<<*ptr<<endl;
	return 0;
}
