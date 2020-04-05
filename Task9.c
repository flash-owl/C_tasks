#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a = 6, b = 6, flag = 0, i, j;
    int arr1[a] = {1, 2, 3, 4, 5, 1}, arr2[b];

    for(i = 0; i < a; i++){
        arr2[i] = arr1[i];
    }

    for(i = 0; i < a; i++){
        printf("%d\n", arr2[i]);
    }
    return 0;
}