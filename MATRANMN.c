#include <stdio.h>
int main()
{
	int M, N, i, j;
	printf ("M = "); scanf ("%d", &M);
	printf ("N = "); scanf ("%d", &N);
	for (i=0; i < M; i++){
		for (j=0; j < N; j++){
			if (j == N-1){
			printf ("0\n");
			}
			else{
			printf ("0 "); 
			} 
		}
	}
	return 0;
} 
