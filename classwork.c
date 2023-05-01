1.Arithmetic operators:
	
#include <stdio.h>
int main() {
    char operation;
    int n1, n2;

    printf("Enter an operator : ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%d %d",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%d + %d = %d",n1, n2, n1+n2);
            break;

        case '-':
            printf("%d - %d = %d",n1, n2, n1-n2);
            break;

        case '*':
            printf("%d * %d = %d",n1, n2, n1*n2);
            break;

        case '/':
            printf("%d / %d = %d",n1, n2, n1/n2);
            break;

        default:
            printf("Error! operator is not correct");
    }

    return 0;
}

2.Reversing numbers:
	
#include<stdio.h>
int main()
{
	int n,i,rev=0;
	printf("Enter the number :");
	scanf("%d",&n);
	while(n>0)
	{
		rev=rev*10;
		rev=rev+(n%10);
		n=n/10;
	}
	printf("%d",rev);
}

3.Factorial:
	
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of the number is :%d",fact);
	return 0;
}

4.Perfect number:
	
#include<stdio.h>
int main(){
   int number,i,result=0;
   printf("enter the number:");
   scanf("%d",&number);
   for(i=1;i<=number;i++){
      if(number%i==0)
         result=result+i;
   }
   if(result==2*number)
      printf("Perfect number");
   else
      printf("Not perfect number");
}

5.Square and cube:
	
#include<stdio.h>
int main()
{
	float n;
	printf("Enter the number :");
	scanf("%f",&n);
	printf("Square :%.2f\n",n*n);
	printf("Cube :%.2f",n*n*n);
	return 0;
}

6.Voting:
	
#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Eligible to vote");
	}
	else if(age<18)
	{
		printf("Not eligible to vote\n");
		printf("More %d years left to vote",18-age);
	}
	return 0;
}

7.Odd/Even:
	
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
	return 0;
}

8.Swapping:

#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter m value :");
	scanf("%d",&m);
	printf("Enter the n value :");
	scanf("%d",&n);
	int c=m;
	m=n;
	n=c;
	printf("The value of m :%d\n",m);
	printf("The value of n :%d",n);
	return 0;
}

9.Calculator:

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter the b value :");
	scanf("%d",&b);
	printf("Sum :%d\n",a+b);
	printf("Sub :%d\n",a-b);
	printf("Mul :%d\n",a*b);
	printf("Quotient :%d",a/b);
	return 0;
}

10.Thermometer:

#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter celsius value :");
	scanf("%f",&celsius);
	fahrenheit=(celsius*1.8)+32;
	printf("The fahrenheit value is:%f",fahrenheit);
	return 0;
}

11.Area of rectangle:

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the length :");
	scanf("%d",&a);
	printf("Enter the breadth :");
	scanf("%d",&b);
	printf("The area of the rectangle :%d",a*b);
	return 0;
}

12.Even number or odd  number:

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
    if(n%2==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
	return 0;
}

13.Leap year:

#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("Leap year");
	}
	else if (year%100==0)
	{
		printf("Not a leap year");
	}
	else if (year%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not a leap year");
	}
	return 0;
}

14.Max and min value:

#include<stdio.h>
int main()
{
	int arr[50],max,min,i,n;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the values:");
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("The max value is :%d\n",max);
	printf("The min value is :%d",min);
	return 0;
}

15.Sum and average:
	
#include<stdio.h>
int main()
{
	int arr[50],i,n,a;
	printf("Enter the number of values :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the numbers :");
		scanf("%d",&a);
		a=a+i;
	}
	printf("Sum :%d\n",a);
	printf("Avg :%d",a/n);
	return 0;
}
