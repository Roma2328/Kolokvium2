#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{
    int n;
    int k = 0;
    do
    {
        n = get_int("Введіть число n ");
    }
    while (n <1 || n > 100);

    int X[n];

    for (int i = 0; i < n; i++)
    {
        X[i] = rand() %(201) -100;
        if(X[i] > 0)
        {
            k++;
        }
    }
    int B[k];
    int a = 1;
    for (int i = 0; i < n; i++) 
    {
        if (X[i] > 0)
        {
           B[a] = X[i];
           a++; 
        }
    }
    a--;
    printf("Другий масив\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", B[i]);
    }
    if (k > 0)
    printf("Кількість позитивних елементів %d\n", k);
    else printf("NO\n");


}
