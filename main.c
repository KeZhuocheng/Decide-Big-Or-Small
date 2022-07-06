#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Please write a number:");
    scanf("%d",&x);
    if(x< 256)
        printf("samll");
    else
        printf("big");
    return 0;
}
