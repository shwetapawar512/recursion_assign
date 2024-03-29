#include<stdio.h>
void my_strncpy(char *p,char *q,int n);
void main()
{
	char s1[20],s2[20];
	int n;

	printf("Enter two strings:\n");
	scanf("%s %s",s1,s2);

	printf("Enter n:\n");
	scanf("%d",&n);

	printf("Before s1=%s\n",s1);

	my_strncpy(s1,s2,n);

	printf("After s1=%s\n",s1);
}
void my_strncpy(char *p,char *q,int n)
{
	static int i=0;
	if(i==n)
		p[i]='\0';
	if(i<n)
	{
		p[i]=q[i];
		i++;
		my_strncpy(p,q,n);
	}

	//else 
	//	p[i]='\0';

}
