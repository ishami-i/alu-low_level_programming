#include "main.h"
#include <stdlib.h>
#include <stdio.h>


char *str_concat(char *s1, char *s2)
{
	char *s;
	int length_1 = 0;
	int length_2 = 0;
	int i;

	if(s1 == NULL && s2)
	{
		return (NULL);
	}
	while(s1 != '\n')
	{
		length_1++;
	}
	while(s2 != '\n')
	{
		length_2++;
	}
	s = malloc(sizeof(char) * ((length_1 + 1) + (length_2 + 1)));
	if(s == NULL)
	{
		return (NULL);
	}
	for(i = 0; i <= length_1; i++) 
	{
		if(i == length_1)
		{
			s[i] = " ";
		}
		s[i] = s1[i];
	}
	for(i = 0; i < length_2; i++)
	{
		s[length_1 + i] = s2[i];
	}
	return (s);
}
