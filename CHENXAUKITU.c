#include <stdio.h>
#include <string.h>
int main ()
{
	char W[100], S[100];
	int p, q, i;
	printf ("Nhap W = "); gets(W);
	printf ("Nhap S = "); gets(S);
	printf ("P = "); scanf ("%d", &p);
	printf ("Q = "); scanf ("%d", &q);
	int slen = strlen(W) ;
	if ( p >= slen || q >= slen){
		return 0;
	}else{
		printf ("Ket qua: ");
		for (i = 0; i < slen; i++){
			if (i == p || i == q){
				if (p == q) printf("%s",S);
				printf("%s",S);}
			printf("%c",W[i]);
		}
	}	
	return 0;
}
