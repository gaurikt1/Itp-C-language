#include<stdio.h>
#include<math.h>
void main()
{
	int sum=0,d,n,cnt=0;
	printf("\nEnter the number:");
	scanf("%d",&n);
	int num=n,temp=n;
	while(n!=0)
	{
		d=n%10;
		cnt++;
		n=n/10;
	}
	while(num!=0)
	{
	     d=num%10;
		 sum=sum+pow(d,cnt);
		 num=num/10;	
	}
	if(sum==temp)
	{
		printf("%d is a armstrong no",temp);
	}
	else
	{
		printf("%d is a not armstrong no",temp);
	}
}