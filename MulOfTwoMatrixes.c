Write a program to implement multiplication of two matrixes.
#include<stdio.h>
int main(){
    int r, c, first[10][10], second[10][10], mul[10][10], i, j, k;
    printf("Enter the number of Row:\n");
    scanf("%d", &r);
    printf("Enter the number of Col:\n");
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

    printf("multiply of the matrix=\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            mul[i][j]=0;
            for (k = 0; k < c; k++){
                mul[i][j]+=first[i][k]*second[k][j];
            }
             printf("%d\t", mul[i][j]);
        }
        printf("\n");

    }
}
