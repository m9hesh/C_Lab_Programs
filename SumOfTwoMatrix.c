#include<stdio.h>
int main(){
    int r, c, first[100][100], second[100][100], sum[100][100], i, j;
    printf("Enter the number of Rows(Between 1 and 100):\n");
    scanf("%d", &r);
    printf("Enter the number of Columns(Between 1 and 100):\n");
    scanf("%d", &c);

    printf("Enter the elements of first matrix\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }
    
    printf("Enter the elements of second matrix\n");
     for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }

    printf("Sum of entered matrices:-\n");
    for (i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            sum[i][j] = first[i][j] + second[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
