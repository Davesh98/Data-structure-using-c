#include<stdio.h>
#include<string.h>
void matchStr(char *string1, char *string2)
{
	int rvalue = strcmp(string1,string2);
	if (rvalue==0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");
	printf("\nValue returned by strcmp() is: %d",rvalue);
}

int main()
{
	
	char string1[100]; 
	char string2[100];

    printf("enter the first string:");
    scanf("%s",string1);

	printf("enter second string:");
	scanf("%s",string2);

	matchStr(string1,string2);
	return 0;
}

