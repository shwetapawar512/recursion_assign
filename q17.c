#include <stdio.h>
char * my_strchr(char *p,char ch);
void main()
{
	char s[20],ch,*t;

	printf("Enter string:\n");
	scanf("%s", s);
	printf("Enter ch:\n");
	scanf(" %c",&ch);

	t=my_strchr(s,ch);

	t?printf("character %c is present at %p location.\n",ch,t):printf("Character not found.\n");
}
char * my_strchr(char *p,char ch)
{
	static int i=0;
	if(p[i])
	{
		if(p[i]==ch)
			return p+i;
		if(p[i]!=ch)
		{
			i++;
			my_strchr(p,ch);
		}
	}
	else
		return 0;
}	 
