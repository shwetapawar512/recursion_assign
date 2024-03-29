#include<stdio.h>
void rec_fun_rev_string(char *p,char *q);
void main()
{
	char s[20];
	int length;

	printf("Enter string:\n");
	scanf("%[^\n]",s);

	for(length=0;s[length];length++);
	
	printf("Before: %s\n",s);
	
	rec_fun_rev_string(s,&s[length-1]);
	
	printf("After: %s\n",s);
	
}
void rec_fun_rev_string(char *p,char *q)
{
	char t;

	if(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		return rec_fun_rev_string(++p,--q);
	}
}
