#include<stdio.h>
int rec_fun_count(int *);
void main()
{
	int num,result;

	printf("Enter a num:\n");
	scanf("%d",&num);

	result=rec_fun_count(&num);

	printf("No. of set bits: %d\n",result);
}
int rec_fun_count(int *p)
{
	static int pos=31,c=0;

	if(pos<0)	
		return c;
	if(*p>>pos&1)
		c++;
		pos--;
		return rec_fun_count(p);
	
}

