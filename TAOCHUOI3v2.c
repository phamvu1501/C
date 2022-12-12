#include <stdio.h>
#include <string.h>
char str[50], b[150];
int main(){
	
	int i,y = 0,x = 1;
	printf("Nhap W = "); gets(str);
	printf("Cac xau con la:\n");
	while ( x <= 3){
		strcat(b, str);
		x++;
	}
	for (i = 0;i < strlen(b); i++)
		{
		printf("%c", b[i]);
		y++;
		while (y>2) {
		printf("\n");
		y=0;
		}
	}
	return 0;
}
