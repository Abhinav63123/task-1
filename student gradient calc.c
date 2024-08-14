#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5, per;
	printf("enter marks of 5 subjects\n");
	scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	per=(s1+s2+s3+s4+s5)/5.0; 
	if(per>100)
	{
		printf("you have entered wrong marks, kindly re-entered\n");
	}
	else if(per >=60)
	{
		printf("Grade A\n");
	}
	else if(per >=50)
	{
		printf("Grade B\n");
	}
	if (per <=40)
	{
		printf("Failed!\n");
	}
	return 0;	
}
