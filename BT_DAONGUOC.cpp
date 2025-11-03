#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX_SIZE 100  
typedef struct {
	char data[MAX_SIZE];
	int top;
} Charstack;
void initializeStack(Charstack *s){
	s->top=-1;
}
bool isStackEmpty(Charstack *s){
	return s-> top==-1;
}
bool isStackFull(Charstack *s){
	return s-> top==MAX_SIZE-1;
}
void push(Charstack *s, char value){
	if(isStackFull(s)){
		printf("loi: Stack Overflow!\n");
		return;
	}
	s->top++;
	s->data[s->top]=value;
}
char pop(Charstack *s){
	if (isStackEmpty(s)){
		printf("loi : Stack Underflow!\n");
		return '\0'; 
	}
	char value = s->data[s->top];
	s->top--;
	return value;
}
void reverseString(char *str){
	int len = strlen(str);
	Charstack s;
	initializeStack(&s);
	for (int i=0;i<len;i++){
		push(&s,str[i]);
	}
	for(int i=0;i<len;i++){
		str[i]=pop(&s);
	}
}
int main(){
	char myString[]= "LAP TRINH C";
	reverseString(myString);
	printf("chuoi sau khi dao nguoc: %s\n",myString);
	return 0;
}
