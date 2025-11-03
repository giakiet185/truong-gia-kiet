#include<stdio.h>
int tinhgiaithua(int n){
	int gt=1;
	int i=n;
	while(i>1){
		gt=gt*i;
		i=i-2;
	}
	return gt;
} 
int main(){
	int n;
	printf("Nhap n: ");scanf("%d",&n);
	printf("%d!! =%d\n",n,tinhgiaithua(n));
	return 0;
}
