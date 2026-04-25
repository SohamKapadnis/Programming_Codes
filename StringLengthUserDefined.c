#include <stdio.h>

// Call by Address
int strlenX(char *ptr)
{
    int i = 0;

    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }

    return i;
}

int main()
{
    char str[] = "Ganesh";      // 100
    int ret = 0;
    
    ret = strlenX(str);     //StrlenX(100)

    printf("String Length is : %d\n ",ret);
    
    return 0;
}