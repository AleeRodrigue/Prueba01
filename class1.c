#include<stdio.h>
/*test de los operadores++y--*/
main()
{
	int m=45;
	int n=75;
	printf("m-%d,n-%d\n",m,n);
	--m;
	--n;
	printf("m-%d, n-%d\n",m,n);
	m++;
	n--;
	printf("m-%d, n-%d\n",m,n);
	return 0;
}