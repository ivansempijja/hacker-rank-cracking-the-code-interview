#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int swap;
    int numswap = 0;
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    
    //swap iteration
    for (int c = 0 ; c < ( n - 1 ); c++){
        for (int i = 0; i < n - c - 1; i++){
            if (a[i] > a[i + 1]){
                swap = a[i];
                a[i] = a[i + 1];
                a[i + 1] = swap;

                numswap = numswap + 1;
            }
        }
    }
    
    printf("Array is sorted in %d swaps.\nFirst Element: %d\nLast Element: %d", numswap, a[0], a[n-1]);
    return 0;
}
