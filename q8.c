#include<stdio.h>
int rec_fun_prime(int,int);
void main()
{
	int num;

	printf("Enter a num:\n");
	scanf("%d",&num);

	if(rec_fun_prime(num,2))
		printf("yes, it is prime\n");
}
int rec_fun_prime(int num,int i)
{
	if(i==num)
		return num;
	if(num%i!=0)
		return rec_fun_prime(num,++i);
	else 
		return 0;
}		
	

