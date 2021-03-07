#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , p;
    double sum = 0.0;
    double c ;
    scanf("%d" , &n);


    for ( p = n ; p>=1 ; p-- ){
    c = 1.0 / (double)p;
    sum += c;


    }

printf("%f" , sum);


    return 0;
}
