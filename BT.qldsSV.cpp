#include<stdio.h>
#include<string.h>
 struct Sinhvien{
 	char Masv[20];
 	char Hoten[30];
	int Tuoi;
	float Diemtb; 	
 };
 void nhapdanhsach(struct Sinhvien sv[],int n){
 	for (int i=0;i<n;i++){
 		printf("Nhap thong tin sinh vien thu %d\n",i+1);
 		printf("Ma sinh vien: ");
 		fflush(stdin);
 		gets(sv[i].Masv);
 		printf("Ho ten: ");
 		fflush(stdin);
 		gets(sv[i].Hoten);
 		printf("tuoi: ");
 		scanf("%d",&sv[i].Tuoi);
 		printf("Diem trung binh: ");
 		scanf("%f",&sv[i].Diemtb);
	 }
 }
 void xuatdanhsach(struct Sinhvien sv[],int n){
 	printf("Danh sach sinh vien\n");
 	printf("%-15s %-25s %-5s %-10s\n","Ma SV","Ho Ten","Tuoi","Diem TB");
 	for (int i=0;i<n;i++){
 		printf("%-15s %-25s %-5d %-10.1f\n",sv[i].Masv,sv[i].Hoten,sv[i].Tuoi,sv[i].Diemtb);
	 }
 }
 void TimSVmaxDTB(struct Sinhvien sv[],int n){
 	float max=sv[0].Diemtb;
 	for(int i=1;i<n;i++){
 		if(sv[i].Diemtb>max){
 			max=sv[i].Diemtb;
		 }
	 }
	 printf("Sinh vien co DTB cao nhat (%.1f)\n",max);
	 for (int i=0;i<n;i++){
	 	if(sv[i].Diemtb==max){
	 		printf("%-15s %-25s %-5d %-10.1f\n",sv[i].Masv,sv[i].Hoten,sv[i].Tuoi,sv[i].Diemtb);
		 }
	 }
 }
 void sapxep(struct Sinhvien sv[],int n){
 	struct Sinhvien tmp;
 	for(int i=0;i<n-1;i++){
 		for(int j=i+1;j<n;j++){
 			if(sv[i].Diemtb<sv[j].Diemtb){
 				tmp=sv[i];
 				sv[i]=sv[j];
 				sv[j]=tmp;
			 }
		 }
	 }
 }
 int main(){
 	int n;
 	struct Sinhvien sv[30];
 	printf("Nhap so luong sinh vien: ");scanf("%d",&n);
 	nhapdanhsach(sv,n); printf("Danh sach sinh vien vua nhap\n"); 
 	xuatdanhsach(sv,n);
 	TimSVmaxDTB(sv,n);
 	sapxep(sv,n);
 	printf("\n Danh sach sinh vien sau khi sap xep theo DTB giam dan: \n");xuatdanhsach(sv,n);
 	return 0;
 }
