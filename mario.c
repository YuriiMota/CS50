#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    do
    {
        printf("height: ");
        height = get_int();
    }
    while ((height<0) || (height>23));
    for(int i=0;i<height;i++)
    {
        for(int j=height-i-1;j>0;j--)
        {
            printf(" ");
        }
        for(int k=0;k<i+2;k++)
        {
            printf("#");
        }
    printf("\n");
    }
}