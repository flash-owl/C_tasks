#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a = 5, b = 5, flag = 0, i, j;
    int arr1[5] = {1, 2, 3, 4, 5}, arr2[5] = {6, 7, 8, 9, 1};

    for(i = 0; i < b; i++){
        for(j = 0; j < a; j++){
            if(arr1[i] == arr2[j])
                flag++;
        }
    }
    printf("%d", flag);
    return 0;
}