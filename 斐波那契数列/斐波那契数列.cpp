#include <stdio.h>
#include<malloc.h>
int main()
{
	int n, i;
	long int s = 0;
	scanf("%d", &n);
	s = (1+n) * n / 2;
	printf("%ld", s);
}