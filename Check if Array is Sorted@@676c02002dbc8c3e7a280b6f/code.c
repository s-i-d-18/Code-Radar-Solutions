#include <stdio.h>
void main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    int temp[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
        temp[i] = arr[i];
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1; j++){
            if(temp[j]>temp[j+1]){
                int a = temp[j+1];
                temp[j+1] = temp[j];
                temp[j] = a;
            }
        }
    }
    int b = 1;
    for(int i = 0; i<n; i++){
        if(arr[i] == temp[i]){
            b = 1;
        }
        else{
            b = 0;
            break;
        }
    }

    if(b = 1){
        printf("Sorted");
    }
    else
    printf("Not Started");
}