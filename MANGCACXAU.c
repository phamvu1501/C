#include <stdio.h>
#include <string.h>
int main()
{
	int i, N;
	char a[100][50];
	printf ("N = "); scanf ("%d", &N);
	getchar();
	for(i = 0; i < N; i++){
		printf ("Ten ngon ngu lap trinh thu %d: ", i+1);
		gets(a[i]);
		}
	int min = strlen(a[0]), k;
	for (i = 0; i < N; i++)
		if (strlen(a[i]) <= min){
			min = strlen(a[i]);
			k = i; 	
		} 	
	printf ("Ngon ngu ngan nhat cuoi cung la: %s", a[k]); 
	return 0;
}
