#include<stdio.h>
#include<string.h>
//c buffer overflow secured
int main(){
	char buffer[8];//creates an array of 8 characters
	printf("enter some text: ");
	if(fgets(buffer,sizeof(buffer),stdin)!=NULL){
		buffer[strcspn(buffer,"\n")]='\0';
		printf("you entered: %s\n",buffer);
	}else{
		printf("imput error.\n");
	}
	return 0;
}
