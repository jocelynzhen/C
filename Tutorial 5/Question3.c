#include <stdio.h>
		void mystery1(char *, const char *);
		int main()
		{
 			char string1[80], string2[80];
 			printf("Enter two strings: ");
 			scanf("%s%s", string1, string2);
 			mystery1(string1, string2);
 			printf("%s\n", string1);
 			return 0;
		}
		void mystery1(char *s1, const char *s2)
		{
 			while (*s1 != '\0')
  				++s1;
			for ( ; (*s1 = *s2) != '\0'; s1++, s2++); /* empty statement */
	}          