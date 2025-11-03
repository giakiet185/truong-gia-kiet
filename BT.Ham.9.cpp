#include<stdio.h>
#include<string.h>
void daonguocchuoi(char *str){
	int vtdau=0;
	int vtcuoi=strlen(str)-1;
	char temp;
	while (vtdau<vtcuoi){
		temp=str[vtdau];
		str[vtdau]=str[vtcuoi];
		str[vtcuoi]=temp;
		vtdau++;
		vtcuoi--;
	}
}
int main(){
	char s[100];
	printf("Nhap chuoi: ");
	fgets(s,sizeof(s),stdin);
	size_t len=strlen(s);
	if(len>0&&s[len-1]=='\n'){
		s[len-1]='\0';
	}
	daonguocchuoi(s);
	printf("Chuoi sau khi dao nguoc: %s\n",s);
	return 0;
}
