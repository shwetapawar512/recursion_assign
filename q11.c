#include<stdio.h>
void rec_fun_rev_arr(int *p,int *q);
void main()
{
	int a[6],result,i,*q;

	int ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array elements:\n");
	
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	printf("Before.....\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	rec_fun_rev_arr(a,&a[ele-1]);
	
	printf("After.....\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");	
}
void rec_fun_rev_arr(int *p,int *q)
{
	static int i;
	int t;

	if(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		return rec_fun_rev_arr(++p,--q);
	}
}














