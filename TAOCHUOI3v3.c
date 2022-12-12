#include <stdio.h>
#include <string.h>
char w[50],s[50];
int main(){
	
	int i, x=1;
	printf("Nhap W = ");
	gets(w);
	strcpy(s, w);
	printf("Cac xau con la:\n");
	for(i=0; i<2; i++)
		strcat(s, w);
	for(i=0; i<strlen(s); i++){
		printf("%c",s[i]);
		x++;
		if(x>3){
			printf("\n");
			x=1;
		}
	}
	return 0;
}
