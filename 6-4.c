#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Average( ElementType S[], int N );

int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%.2f\n", Average(S, N));

    return 0;
}
ElementType Average( ElementType S[], int N )
{
	int j;
	float sum=0;
	float aver=0;
	for(j=0;j<N;j++)
	{
		sum=sum+S[j];
	}
	aver=sum/N;
	return aver;
}
