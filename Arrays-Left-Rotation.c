#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    int *b = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    
    int y = 0;
    for(int i = 0; i < n; i++){        
        if(k >= n){
            b[i] = a[y];
            y++;
        }
        else{
          b[i] = a[k];  
        }
        printf("%d ", b[i]);
        k++;
    }
    return 0;
}
