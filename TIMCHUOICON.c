#include <stdio.h>
#include <string.h>
int main(){
	int i; 
	char S[100], W[100]; 
	printf ("Nhap xau S: "); 
	gets (S);
	printf ("Nhap xau W: "); 
	gets (W);
	for (i=0; i < 100;i++){
    	if (S[i]==W[0]){
    		printf ("W xuat hien trong S o vi tri %d\n", i); 
			break;
		} 
	}
	if (i==100){
		printf ("W khong xuat hien trong S\n"); 
	} 
	return 0;
}
