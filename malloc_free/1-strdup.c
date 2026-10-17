#include "main.h"
#include "stdlib.h"


char *_strdup(char *str)
{
	char s = *str;
	int length = 0;
	
	for(int i = 0; i++)
	{
		if(s[i] == "\n")
		{
			return (length + 1);
		}
		else 
		{
			length++;
		}
	}
	if(length == 0)
	{
		return (NULL);
	}
	char *s = malloc(sizeof(char) * length);
	printf("%s\n", s);
	free(s);
	return (0);
}
