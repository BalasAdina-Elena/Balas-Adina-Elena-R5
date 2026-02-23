#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char p[256], t[100], s[256][100];
	int v[100], i, j, k, a;

	scanf(" %[^\n]", p);

	i = 0; k = 0;
	while (p[i] != '\0')
	{
		j = 0;
		while (p[i] == ' ' && p[i] != '\0')
			i++;
		
		while (((p[i] >= 'a' && p[i] <='z') || (p[i]>='A' && p[i]<='Z')) && p[i] != '\0')
		{
			s[k][j] = p[i];
			i++;
			j++;
		}
		
		if (j > 0)
		{
			s[k][j] = '\0';
			v[k] = j;
			k++;
		}
	
	}
	
	for (i = 0; i < k - 1; i++)
	{
		for (j = i + 1; j < k; j++)
		{
			if (v[i] < v[j] || (v[i] == v[j] && strcmp(s[i], s[j]) > 0))
			{
				a = v[i]; 
				v[i] = v[j]; 
				v[j] = a;
				strcpy( t,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j], t);
				
			}
		}
	}

	for ( i = 0; i < k; i++)
	{
		printf("%s", s[i]);
		printf("\n");
		
	}
}