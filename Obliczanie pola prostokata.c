#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pole(int dl, int sz)
{
    int wynik;
    wynik = dl * sz;

    return wynik;
}

int main(void)
{
    int a, b, w;

    printf("Podaj dlugosci bokow: \n");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0){
        printf("Podano zle wartosci!!");

    } else {
        w = pole(a,b);
        printf("Pole prostakata wynosi: %d \n", w);
    }
return 0;
}


