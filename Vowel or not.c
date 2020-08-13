#include <stdio.h>
int main()
{ 
	char a;
	printf("enter the alphabet");
	scanf("%c",&a);
	if(a==97||a==101||a==105||a==111||a==117)
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
	}
