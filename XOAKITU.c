#include<stdio.h>
#include <string.h> 
int main()
{
	char W[50];
	int i; 
	printf ("Nhap W = "); gets(W);
	for (i = 0; i < 50;i++){
		if (isdigit(W[i])){
			strcpy(&W[i], &W[i+1]);
			i--; 
		}
	}
	printf ("W sau khi xoa cac chu so = %s", W);
	return 0;
}
