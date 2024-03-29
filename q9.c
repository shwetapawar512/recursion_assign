#include<stdio.h>
int rec_fun_count_arr(int *p,int ele);
void main()
{
	int a[6],i,result;
	
	printf("Enter array Elements:\n");
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);

	result=rec_fun_count_arr(a,6);

	printf("Count: %d\n",result);
}
int rec_fun_count_arr(int *p,int ele)
{
	static int i=0,c=0;
	
	if(i==6)
		return c;

	if(p[i]>39 && p[i]<99)
		c++;
		i++;
	return rec_fun_count_arr(p,6);
}
