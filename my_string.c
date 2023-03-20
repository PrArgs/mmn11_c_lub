#include <stdio.h>
#include <string.h>

#define MAXSTR 80

int my_strcmp(char s[],char t[]);
int my_strncmp(char s[],char t[],int n);
char my_strchr();


int main()
{

	char s[MAXSTR];
	char t[MAXSTR];

    printf("please enter first string\n");
    char stest[] = gets(s);

    printf("please enter second string\n");
    char ttest[] = gets(t);

    ptitf("smy_trcmp result is: %d \n",my_strcmp(stest,ttest));

    return 0;
}

/*
 * Compares each character in a string
 * Returns 0 if s=t, -1 if s<t AND 1 if s>t
 *
 * */
int my_strcmp(char s[],char t[])
{
	int minsize = min(sizeof(s),sizeof(t));
	int i=0;
	while(i < minsize)
	{
		if(s[i]==t[i])
			i++;
		else
			return (s[i] < t[i])? -1 : 1 ;

	}

	if(sizeof(s) == sizeof(t)){
		return 0;
	}

    return (sizeof(s) < sizeof(t))? -1 : 1;
}

int my_strncmp(char s[],char t[],int n)
{
	int minsize = min(sizeof(s),sizeof(t));
	if (n > minsize)
			return my_strcmp(s,t);
	else
		int i=0;
		while(i <= n)
			{
				if(s[i]==t[i])
					i++;
				else
					return (s[i] < t[i])? -1 : 1 ;

			}
	return 0;
}


char my_strchr()
{
    return '0';
}
