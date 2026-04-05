#include<stdio.h>
int main(){
	int target=10;
	int secret=999;
	int *ptr=NULL;
	//only allowed to point to intended variable
	ptr=&target;
	if(ptr !=NULL){
		*ptr=124;//safewrite
	}
	printf("target=%d\n",target);
	printf("secret=%d\n",secret);
	return 0;
}
