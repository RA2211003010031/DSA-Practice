#include<stdio.h>
#include<stdlib.h>

int **allocate(int row, int col) {
    int **matrix = (int **) malloc(row * sizeof(int));
    for(int i = 0; i<row; i++) {
        matrix[i] = (int *) malloc(col * sizeof(int));
    }

    return matrix;
}



int main() {

    int row1,col1;
    printf("Enter the size of m and n : ");
    scanf("%d %d", &row1, &col1);

    int row2,col2;
    printf("Enter the size of p and q : ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2)
    {
        printf("\nSize of n and p are not equal, hence exiting the code.");
        return 0;
    }

    int **matrix1 = allocate(row1, col1);
    int **matrix2 = allocate(row2, col2);
    int **result = allocate(row1, col2);



    


    return 0;
}