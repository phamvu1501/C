#include <stdio.h>
#include <string.h> 
int main()
{
	int i;
	char w[50];
	printf ("Nhap W = "); gets(w);
	for (i = 0; i < strlen(w); i++){
		if(isspace(w[0])) strcpy(&w[0], &w[1]);
            if(isspace(w[i]) && isspace(w[i+1])){
                strcpy(&w[i], &w[i+1]);
                i--;
            }
            if(isspace(w[strlen(w)-1])) strcpy(&w[strlen(w)-1], &w[strlen(w)]);
        }
    printf ("Chuan hoa = %s", w);	
	return 0;
}
