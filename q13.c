#include<stdio.h>
int rec_fun_count_string(char *p,char ch);
void main()
{
	char s[20],ch,count=0;
	printf("Enter a string:\n");
	scanf("%[^\n]",s);

	printf("Enter a char:\n");
	scanf(" %c",&ch);

	count=rec_fun_count_string(s,ch);

	printf("Count=%d\n",count);
}
int rec_fun_count_string(char *p,char ch)
{
	static int i=0,c=0;
	if(p[i]=='\0')
		return c;
	if(p[i]==ch)
		c++;
		i++;
		return rec_fun_count_string(p,ch);

}
