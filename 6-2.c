#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;
	
    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}
double f( int n, double a[], double x )
{
	int i;
	int j;
	double power=1;
	double f=0;

	for(i=0;i<n;i++)
	{
		double s=0;
		for (j=i;j<0;j--)
		{
			power=power*x;
		}
		s=s+a[i]*power;
	}
	return s;
}
