#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool songuyento(int n){
	if(n<2) 
	return false;
	if(n==2)
	return true;
	if(n%2==0) return false;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0) 
		return false;
	}
	return true;
}
int demsont(int a,int b){
	int dem=0;
	for(int i=a ;i<=b;i++){
		if(songuyento(i)){
			dem++;
		}
	}
	return dem;
}
int main(){
	printf("So nguyen to trong doan[1,10] la: %d\n",demsont(1,100));
	printf("So nguyen to trong doan[1,1000] la: %d\n",demsont(1,1000));
	printf("So nguyen to trong doan[1,100000] la: %d\n",demsont(1,100000));
	return 0;
}
