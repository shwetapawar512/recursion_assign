#include<stdio.h>
int rec_fun_rev(int num);
void main()
{
	int num,result,i,j;

	printf("Enter a num:\n");
	scanf("%d",&num);

	printf("Before: %d\n",num);

	result=rec_fun_rev(num);

	printf("After: %d\n",result);
}
int rec_fun_rev(int num)
{
	
	int i,r;
	static int s;
	i=num;
	if(i==0)
		return s;
		
	r=i%10;
		s=s*10+r;
	
			return rec_fun_rev(i/10);
}
