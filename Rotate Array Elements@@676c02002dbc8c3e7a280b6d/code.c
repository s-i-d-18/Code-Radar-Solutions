// Your code here...
#include <stdio.h>

void main(){
    int n;
    scanf("%D", &n);
    int arr[n];
    for(int i = 0; i<n;l i++){
        scanf("%d", arr[i]);
    }
    int a;
    scanf("%d", &n);

    int temp[n];
    for(int i = 0; i<a; i++){
        temp[i] = arr[n-a];
    }
    for(int i = a; i<n; i++){
        temp[i] = arr[i-a];
    }

    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
}