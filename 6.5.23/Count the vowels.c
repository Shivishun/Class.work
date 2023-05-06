#include<stdio.h>
int main()
{
	char str[100];
	int i,v=0;
	printf("Enter the string\n");
	scanf("%s",&str);
	for(i=0;str[i];i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			v++;
		}
	}
	printf("Total number of vowels=%d\n",v);
	return 0;
}