#include<stdio.h>
int rec_fun_sum(int num);
void main()
{
	int num,result,i,j;

	printf("Enter a num:\n");
	scanf("%d",&num);

	result=rec_fun_sum(num);

	printf("Sum of even digits: %d\n",result);
}
int rec_fun_sum(int num)
{
	
	int i,r;
	i=num;
	if(i==0)
		return 0;
		
	r=i%10;
		if(r%2==0)
			return r+rec_fun_sum(i/10);

		else		
			return rec_fun_sum(i/10);	
}
