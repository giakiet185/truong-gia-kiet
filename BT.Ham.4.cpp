#include<stdio.h>
#include<math.h>
float tinhtiengui(float tiengui,float laisuat,int sothang){
	for(int i=1;i<=sothang;i++){
		tiengui=tiengui+tiengui*laisuat/100;
	}
	return tiengui;
}
int main(){
	float tiengui,laisuat;
	int sothang;
	printf("Nhap so tien gui: ");scanf("%f",&tiengui);
	printf("Nhap lai suat: ");scanf("%f",&laisuat);
	printf("Nhap so thang gui:");scanf("%d",&sothang);
	tiengui=tinhtiengui(tiengui,laisuat,sothang);
	printf("so tien tiet kiem nhan duoc la: %.2f",tiengui);
	return 0;
}
