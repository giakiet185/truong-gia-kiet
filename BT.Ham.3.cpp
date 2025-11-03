#include<stdio.h>
float tinhtiendien(float chisocu,float chisomoi ){
	float sokwh=chisomoi-chisocu;
	if(sokwh<0){
		printf("chi so moi phai lon hon chi so cu.\n");
		return -1;
	}
    float tongtien=0;
    if(sokwh<=100){
	   tongtien=sokwh*1418;
    }
    else if(sokwh<=150){
    	tongtien=100 * 1418 + (sokwh - 100) * 1622;
	}
	else if(sokwh<=200){
		tongtien = 100 * 1418 + 50 * 1622 + (sokwh - 150) * 2044;
	}
	else if(sokwh<=300){
		tongtien=100 * 1418 + 50 * 1622 + 50 * 2044 + (sokwh - 200) * 2210;
	}
	else if(sokwh<=400){
		tongtien=100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + (sokwh - 300) * 2361;
	}
	else {
		tongtien=100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + 100 * 2361 + (sokwh - 400) * 2420;
	}
	return tongtien;
}
int main(){
	float chisocu,chisomoi;
	printf("Nhap chi so dien thang truoc: ");scanf("%f",&chisocu);
	printf("Nhap chi so dien thang nay: ");scanf("%f",&chisomoi);
	float tiendien=tinhtiendien(chisocu,chisomoi);
	if(tiendien>=0){
		printf("so kwh su dung: %f\n",chisomoi-chisocu);
		printf("tien dien phai tra: %.2f VND\n",tiendien);
	}
	return 0;
}
