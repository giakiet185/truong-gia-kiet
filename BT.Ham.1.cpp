#include<stdio.h>
#include<math.h>
#include<stdbool.h>
 bool KTtamgiac(float a,float b,float c){
 	return(a>0 && b>0 && c>0 && a+b>c &&a+c>b && b+c>a);
 }
 float DTtamgiac(float a,float b, float c){
 	float p=(a+b+c)/2;
 	return sqrt(p*(p-a)*(p-b)*(p-c));
 }
 void PLtamgiac(float a,float b,float c){
 	float temp;
 	if(a>b){
	 temp=a; a=b; b=temp;
	 }
	if(b>c){
	 temp=b;b=c;c=temp;
	}
	if(a>b){
		temp=a;a=b;b=temp;
	}
	bool TGcan=(fabs(a-b)<1e-6 || fabs(b-c)<1e-6 || fabs(a-c)<1e-6);
	bool TGdeu=(fabs(a-b)<1e-6 && fabs(b-c)<1e-6);
	bool TGvuong=(fabs(a*a+b*b-c*c)<1e-6);
	if(TGdeu){
		printf("Tam giac deu\n");
	}
	else if(TGvuong && TGcan){
		printf("Tam giac vuong can\n");
	}
	else if(TGvuong){
		printf("Tam giac vuong\n");
	}
	else if(TGcan){
		printf("Tam giac can\n");
	}
	else {
		printf("Tam giac thuong\n");
	}
 }
 int main(){
 	float a,b,c;
 	printf("Nhap ba canh a,b,c: "); scanf("%f %f %f",&a,&b,&c);
 	if(!KTtamgiac(a,b,c)){
 		printf("ba canh nay khong tao thanh tam giac.\n");
	 }
	 else {
	 	PLtamgiac(a,b,c);
	 	float s=DTtamgiac(a,b,c);
	 	printf("Dien tich tam giac: %.2f\n",s);
	 }
	 return 0;
 }
