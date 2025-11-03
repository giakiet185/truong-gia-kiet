#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int isStrongPassword(char *pw){
 	int chuhoa=0, chuthuong=0,chuso=0;
 	int dodai= strlen(pw);
 	if (dodai<8)
 	return 0;
 	for (int i=0;i<dodai;i++){
 		if (isupper(pw[i])) chuhoa=1;
 		else if(islower(pw[i])) chuthuong=1;
 		else if(isdigit(pw[i])) chuso=1;
	 }
	 if (chuhoa&&chuthuong&&chuso)
	 return 1;
	 else 
	 return 0;
}
int main(){
	char pw[100];
	printf("Nhap mat khau: ");scanf("%s",pw);
	if(isStrongPassword(pw)){
	printf("Mat khau manh.\n");
}
	else {
	printf("Mat khau yeu(can >=8 ky tu,co it nhat 1 chu hoa,1 chu thuong,1 chu so) \n");
}
	return 0;
}
