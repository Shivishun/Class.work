#include<stdio.h>
int main()
{
	int n,c,r,s=1;
	printf("Enter the number of rows :");
	scanf("%d",&n);
	printf("\n");
	s=n-1;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=s;c++)
		    printf(" ");
		s--;
		for(c=1;c<=2*r-1;c++)
		    printf("*");
		printf("\n");
	}
	s=1;
	for(r=1;r<=n-1;r++)
	{
		for(c=1;c<=s;c++)
		    printf(" ");
		s++;
		for(c=1;c<=2*(n-r)-1;c++)
		    printf("*");
		printf("\n");
	}
	return 0;
}