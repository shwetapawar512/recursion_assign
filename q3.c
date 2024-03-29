#include<stdio.h>
int rec_fun_product(int num);
void main()
{
	int num,result,i,j;

	printf("Enter a num:\n");
	scanf("%d",&num);

	result=rec_fun_product(num);

	printf("product of digits factor of 3 : %d\n",result);
}
int rec_fun_product(int num)
{
	
	int i,r;
	
	i=num;
	if(i==0)
		return 1;
		
	r=i%10;
		
		if(r%3==0)
			return r*(rec_fun_product(i/10));

		else		
			return rec_fun_product(i/10);	
			
}
