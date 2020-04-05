#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N = 10;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int min, max, begin, end, sum;
    srand(time(NULL));

    for(i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    min = 0;
    max = 0;

    for(i = 0; i < N; i++){
        if (a[i] > a[max]){
            max = i;
        }
        if (a[i] < a[min]){
            min = i;
        }
    }

    if (max > min){
        begin = min;
        end = max;
    }
    else{
        begin = max;
        end = min;
    }

    sum = 0;

    for(i = begin + 1; i < end; i++){
        sum += a[i];
    }

    printf("Sum of elements except min and max: %d\n", sum);

    return 0;
}