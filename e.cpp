#include<stdio.h>
int main(){
  printf("hello");
}
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[10][10];  // 根据题目要求，n,m<=10

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int Max1[100];
    for (int i = 0; i < n; i++) {
        Max1[i] = arr[i][0];  
        for (int j = 1; j < m; j++) {
            if (arr[i][j] > Max1[i]) {
                Max1[i] = arr[i][j];
            }
        
        }
    }

    
    int Max2[10];
        for (int j = 0; j < m; j++) {
            Max2[j] = arr[0][j]; 
            for (int i = 1; i < n; i++) {
                if (arr[i][j] > Max2[j]) {
                    Max2[j] = arr[i][j];
                }
            }
        }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == Max1[i] && arr[i][j] == Max2[j])
            {
                printf("%d %d %d\n", arr[i][j], i + 1, j + 1);
            }
           
        }
    }

    return 0;
}
