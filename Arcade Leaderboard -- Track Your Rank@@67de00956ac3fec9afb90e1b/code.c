#include <stdio.h>;

void main(){
    int n;
    scanf("%d", &n);

    int score[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &score[i]);
    }

    int m;
    scanf("%d", &m);

    int marray[m];
    for(int i = 0; i<m; i++){
        scanf("%d", &marray[i]);
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            int temp = marray[i];
            int rank = 1;
            if(temp < score[j]){
                rank = rank + 1;
            }
       }
       printf("%d", rank);
       printf("\n");
    }
}