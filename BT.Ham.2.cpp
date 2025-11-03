#include<stdio.h>
#include<string.h>
void quydoidiem(float diem10, float*diem4, char*diemchu){
	if(diem10>=9.0){
		*diem4=4.0;
		sprintf(diemchu,"A+");
	}
	else if(diem10>=8){
		*diem4=3.5;
		sprintf(diemchu,"A"); 
	}
	else if(diem10>=7.0){
		*diem4=3.0;
		sprintf(diemchu,"B+");
	} 
	else if(diem10>=6.0){
		*diem4=2.5;
		sprintf(diemchu,"B");
	}
	else if(diem10>=5.0){
		*diem4=2.0;
		sprintf(diemchu,"C");
	}
	else if(diem10>=4.0){
		*diem4=1.5;
		sprintf(diemchu,"D");
	}
	else {
		*diem4=1.0;
		sprintf(diemchu,"F");
	}
}
int main(){
	float diem10,diem4;
	char diemchu[20];
	printf("Nhap diem theo thang 10: ");scanf("%f",&diem10);
	quydoidiem(diem10,&diem4,diemchu);
	printf("Diem thang 4: %.1f\n",diem4);
	printf("Diem chu: %s\n",diemchu);
	return 0;
}
