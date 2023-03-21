#include "my_string.h"

#define MAXSTR 80


int main()
{
	printf("Start testing\n");
	int i=0;
	for(;i <4; i++)
	{
	char s[MAXSTR];
	char t[MAXSTR];

    printf("please enter first string\n");
    scanf("%s",s);

    printf("please enter second string\n");
    scanf("%s",t);

    printf("smy_trcmp result is: %d \n",my_strcmp(s,t));

    printf("my_strncmp result is: %d \n",my_strncmp(s,t,i*2));

    printf("you chose %c\n",'c');
    printf("my_strchr result is: %p \n",my_strchr(s,'c'));
	}

    return 0;
}

/*
 * Compares each character in a string
 * Returns 0 if s=t, -1 if s<t AND 1 if s>t
 *
 * */
int my_strcmp(char *s,char *t)
{
	int i=0;
	while(s[i]==t[i])
	{
		if(s[i]=='\0')
			return 0;
		i++;
	}
	return (s[i] < t[i])? -1 : 1 ;
}

int my_strncmp(char *s,char *t,int n)
{
	int i=0;
	while(i <= n)
	{
		if(s[i]=='\0')
			return 0;
		if(s[i] != t[i])
			return (s[i] < t[i])? -1 : 1 ;
		i++;
	}
	return 0;
}

char *my_strchr(char *s, int c)
{
	int i = 0;
	char comp = (unsigned char)c;
	while(s[i] != '0')
	{
		if(s[i] == comp)
			return &s[i];
		else
			i++;
	}
    return NULL;
}
