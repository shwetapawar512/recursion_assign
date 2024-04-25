/*Recursive function to check given no is perfect or not*/
#include<stdio.h>
static int num;
int rec_fun_perfect(int );
void main()
{
	int result,i=1;
	printf("Enter a num:\n");
	scanf("%d",&num);

	result=rec_fun_perfect(i);
	if(result==num)
		printf("Yes Perfect\n");
	else 
		printf("Not a perfect\n");
}
int rec_fun_perfect(int i)
{
	if(num==i)
		return 0;
	if(num%i==0)
		return i+rec_fun_perfect(i+1);
	else
		return rec_fun_perfect(i+1);
}

