#include <stdio.h>

char smallest_character(char str[], char c)
{
    int i=0;
    while(str[i]!='\0') {
        if(str[i]>c)
            return str[i];
        i++;
    }
    return str[0];
}

int main()
{
    char str[100];
    char c;
    printf("Enter the string : ");
    gets(str);
    printf("Enter the search character : ");
    scanf("%c",&c);
    fflush(stdin);
    printf("%c\n",smallest_character(str, c));

    return 0;
}