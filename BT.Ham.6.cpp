#include<stdio.h>
int sothanggui(float tg, float tn, float ls){
	int thang=0;
	while (tg<tn){
		tg=tg+tg*ls/100;
		thang++;
	}
	return thang;
}
int main(){
	float tg,tn,ls;
	int thang;
	printf("Nhap so tien gui: ");scanf("%f",&tg);
	printf("Nhap so tien nhan: ");scanf("%f",&tn);
	printf("Nhap lai suat 1 thang: ");scanf("%f",&ls);
	thang=sothanggui(tg,tn,ls);
	printf("So thang it nhat can gui: %d",thang);
	return 0;
}
