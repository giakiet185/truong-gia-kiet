#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int*data;
	int size;
	int capacity;
}vector;
void vectorinit(vector*v){
	v->size=0;
	v->capacity =4;
	v->data =(int*) malloc(v->capacity*sizeof(int));
}
void vectorpushback(vector*v,int value){
	if(v->size>=v->capacity){
		v->capacity*=2;
		v->data=(int*) realloc(v->data,v->capacity*sizeof(int));
	}
	v->data[v->size++]=value;
}
int vectorget(vector*v,int index){
	if (index<0||index>=v->size){
		printf("Loi: chi so ngoai pham vi\n");
		exit(1);
	}
	return v->data[index];
}
void vectorfree(vector*v){
	free(v->data);
	v->data=NULL;
	v->size=0;
	v->capacity=0;
}

int main(){
	vector v_all,v_even;
	vectorinit(&v_all);
	vectorinit(&v_even);
	
	int num;
	printf("Nhap cac so nguyen(nhap -1 de ket thuc):\n");
	while(1){
		printf("nhap so: ");
		scanf("%d",&num);
		if(num== -1) break;
		vectorpushback(&v_all,num);
	}
	for (int i=0;i<v_all.size;i++){
		int x=vectorget(&v_all,i);
		if(x%2==0){
			vectorpushback(&v_even,x);
		}
	}
	printf("danh sach cac so chan: \n");
	if(v_even.size==0){
		printf("Khong co so chan nao.\n");
	}else{
		for(int i=0;i<v_even.size;i++){
			printf("%d",vectorget(&v_even,i));
		}
		printf("\n");
		}
		vectorfree(&v_all);
		vectorfree(&v_even);
		return 0;

}
