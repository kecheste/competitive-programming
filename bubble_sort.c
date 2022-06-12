#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    
    int i,j,temp,k=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                k++;
            }
        }
    }
    
    printf("Array is sorted in %d swaps.\n",k);
printf("First Element: %d\n",a[0]);
printf("Last Element: %d\n",a[n-1]);
    
    
    return 0;
}
