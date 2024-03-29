#include<stdio.h>
int rec_fun_sum(int num,int c);
void main()
{
	int num,result,n;

	printf("Enter a num:\n");
	scanf("%d",&num);

	printf("Enter n:\n");
	scanf("%d",&n);


	result=rec_fun_sum(num,n);

	printf("Sum of even digits: %d\n",result);
}
int rec_fun_sum(int num,int c)
{
	
	int i,r;
	i=num;
	if(c>0)	
	{
		r=i%10;
		return r+rec_fun_sum(i/10,--c);
	}
	return 0;
			
}
