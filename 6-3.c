#include <stdio.h>

#define MAXN 10

int Sum ( int List[], int N );

int main ()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}
int Sum(int List[],int N)
{
	int j;
	int s=0;
	for(j=0;j<N;j++)
	{
		s=s+List[j];
	}
	return s;
 } 
