#include <stdio.h>

void reverseString(char str[])
{
    int length = 0;
    int i;

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main()
{
    char str[100];

    printf("Enter a string:- ");
    gets(str);

    reverseString(str);

    printf("Reversed string:- %s\n", str);

    return 0;
}
