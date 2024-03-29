#include<stdio.h>
int rec_fun_rev_bit(int);
void rec_fun_binary(int);
void main()
{
	int num,result;

	printf("Enter a num:\n");
	scanf("%d",&num);

	rec_fun_binary(num);
	printf("\n");
	
	result=rec_fun_rev_bit(num);
	
	rec_fun_binary(result);
	printf("\n");
}
void rec_fun_binary(int num)
{
	static int pos=31;
	if(pos>=0)	
	{
		printf("%d",num>>pos&1);
		pos--;
		rec_fun_binary(num);
		pos=31;
	}
}
int rec_fun_rev_bit(int num)
{
	static int i=0,j=31,m,n;
	if(i<j)
	{
		m=num>>i&1;
		n=num>>j&1;
		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
		i++;
		j--;
		rec_fun_rev_bit(num);
	}
	else 
		return num;
}
