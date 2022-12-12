#include <stdio.h>
#include <math.h> 
int main()
{
	int N;
	while (1<=N || N<=5){
	printf ("[1] Buoi sang\n");
	printf ("[2] Buoi trua\n"); 
	printf ("[3] Buoi chieu\n");
	printf ("[4] Buoi toi\n");
	printf ("[5] Ket thuc\n");
	printf ("Chon chuc nang: "); scanf ("%d", &N); 
		if (N == 1) printf ("Chao buoi sang\n");
			else if (N == 2) printf ("Den gio nghi trua roi, di an thoi\n");
			else if (N == 3) printf ("Het gio lam viec, ve nha nao\n");
			else if (N == 4) printf ("Chuan bi ngu buoi toi\n");
			else if (N == 5){
			printf ("Chuc ngu ngon\n");
			break;
			}
	}
	return 0; 
} 
