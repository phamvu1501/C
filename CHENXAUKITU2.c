#include <stdio.h>
#include <string.h>
int main ()
{
	char W[100], S[100], daukq[100], giuakq[100], cuoikq[100];
	int p, q, i, k=0, n=0, m=0;
	printf ("Nhap W = "); gets(W);
	printf ("Nhap S = "); gets(S);
	printf ("P = "); scanf ("%d", &p);
	printf ("Q = "); scanf ("%d", &q);
	int slen = strlen(W) ;
	if ( p >= slen || q >= slen){
		return 0;
	}else{
		int min, max;
		if (p>q){
			max = p;
			min = q;
		}else{
			max = q;
			min = p;
		}
	for (i=0; i<min; i++){
		daukq[k] = W[i];
		k++;
		}
	daukq[k] = '\0';	 
	for (i=min; i<max; i++){
		giuakq[n] = W[i];
		n++;
		}
	giuakq[n] = '\0';
	for (i=max; i<slen; i++){
		cuoikq[m] = W[i];
		m++;
		}
	cuoikq[m] = '\0';	
	strcat (daukq,S);
	strcat (daukq,giuakq);
	strcat (daukq,S);
	strcat (daukq,cuoikq);
	printf ("Ket qua: %s", daukq);	
	}
	return 0;
}
