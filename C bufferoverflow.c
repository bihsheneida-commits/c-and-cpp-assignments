#include<stdio.h>
#include<string.h>
//buffer overflow
int main(){
	charr buffer[8];
	printf("enter some text: ");
	gets(buffer);//unsafe(no bounds checking)
	printf("you entered: %s\n",buffer);
	return 0;
}
//buffer can hold only 8bytes
//if a longer text is entered, it writes beyond the buffer and thereby corrupts memory
