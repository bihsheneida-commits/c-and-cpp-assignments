#include<stdio.h>
int main(){
	int targer=10;
	int secret=999;
	int *ptr;
	ptr=&secret;
	*ptr=1234;//arbitrary write
	printf("target=%d\n",target);
	printf("secret=%d\n",secret);
	return 0;
}
