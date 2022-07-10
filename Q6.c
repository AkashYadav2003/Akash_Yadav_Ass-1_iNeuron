#include <stdio.h>

int main()
{
    char a[10000];
    printf("Enter the username : ");
    gets(a);
    printf("\"Hello, %s \"",a);
    return 0;
}