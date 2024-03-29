#include<stdio.h>
int rec_fun_count(int num);
void main()
{
	int num,result,i,j;

	printf("Enter a num:\n");
	scanf("%d",&num);

	result=rec_fun_count(num);

	printf("Count is: %d\n",result);
}
int rec_fun_count(int num)
{
	static int c=1;
	int r,i;
	i=num;
	if(i==0)
		return 0;
		
	r=i%10;
		if(r<6)
			return c+rec_fun_count(i/10);

		else		
			return rec_fun_count(i/10);	
}
