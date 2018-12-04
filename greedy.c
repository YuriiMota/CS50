#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float f;
    int i;
    int qua= 0;
    int des = 0;
    int five = 0;
    int one = 0;
    printf("O hai! How much change is owed?\n");
    do
    {
        f = get_float();
        if (f<0) printf("How much change is owed?\n");
    }
    while (f<0);
    i=roundf(f*100);
    qua=i/25;
    //printf("Quarter %i\n", qua);
    des=(i%25)/10;
    //printf("Tan %i\n", des);
    five=(i%25)%10/5;
    //printf("Tan %i\n", five);
    one=((i%25)%10)%5;
    //printf("Tan %i\n", one);
    int sum = qua+des+five+one;
    printf("%i", sum);

}