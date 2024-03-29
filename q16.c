#include <stdio.h>
int my_strncmp(char *p,char *q,int n);
void main()
{
    char s1[20],s2[20];
    int n,r;
    
    printf("Enter two strings:\n");
    scanf("%s %s", s1,s2);
    printf("Enter n:\n");
    scanf("%d",&n);
    
    r=my_strncmp(s1,s2,n);
    if(r==0)
    printf("Same strings.\n");
    else
    printf("Different strings.\n");
}
int my_strncmp(char *p,char *q,int n)
{
    static int i=0;

    if(i<n)
    {
        if(p[i]==q[i] && p[i] && q[i])
        {
            i++;
            my_strncmp(p,q,n);
        }
        else
            return p[i]-q[i];
    }
    if(i==n)
        return 0;
    
}
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
    
    t?printf("charachter %c is present at %p location.\n",ch,t):printf("Character not found.\n");
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
