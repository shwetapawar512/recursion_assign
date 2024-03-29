#include<stdio.h>
int rec_fun_count_arr(int *p,int ele);
void main()
{
	int a[6],result,i;

	int ele=sizeof(a)/sizeof(a[0]);
	
	printf("Enter array elements:\n");
	
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	result=rec_fun_count_arr(a,ele);

	printf("sum=%d\n",result);
}
int rec_fun_count_arr(int *p,int ele)
{
	static int i=0,s=0;

	if(i==ele/2)
		return s;
	s=s+p[i];
	i++;
		return rec_fun_count_arr(p,ele);

}
