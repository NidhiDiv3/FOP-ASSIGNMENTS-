#include <stdio.h>

 Function to add two matrices
void addMatrix(int r, int c, int A[r][c], int B[r][c]) {
    int sum[r][c];
    printf("\nAddition of matrices:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint(int r, int c, int A[r][c]) {
    int found = 0;
    for(int i=0;i<r;i++) {
        int min = A[i][0], col = 0;
        for(int j=1;j<c;j++) {
            if(A[i][j] < min) {
                min = A[i][j];
                col = j;
            }
        }

        int k;
        for(k=0;k<r;k++) {
            if(A[k][col] > min)
                break;
        }

        if(k == r) {
            printf("\nSaddle Point: %d\n", min);
            found = 1;
        }
    }
    if(!found)
        printf("\nNo Saddle Point\n");
}


void inverse2x2(int A[2][2]) {
    int det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

    if(det == 0) {
        printf("\nInverse not possible (Determinant = 0)\n");
        return;
    }

    printf("\nInverse Matrix:\n");
    printf("%0.2f %0.2f\n", (float)A[1][1]/det, (float)-A[0][1]/det);
    printf("%0.2f %0.2f\n", (float)-A[1][0]/det, (float)A[0][0]/det);
}

 Function to check magic square
void magicSquare(int n, int A[n][n]) {
    int sum = 0;
    for(int j=0;j<n;j++)
        sum += A[0][j];

    int flag = 1;

     Check rows
    for(int i=0;i<n;i++) {
        int rsum = 0;
        for(int j=0;j<n;j++)
            rsum += A[i][j];
        if(rsum != sum)
            flag = 0;
    }

    Check columns
    for(int j=0;j<n;j++) {
        int csum = 0;
        for(int i=0;i<n;i++)
            csum += A[i][j];
        if(csum != sum)
            flag = 0;
    }

     Diagonals
    int d1 = 0, d2 = 0;
    for(int i=0;i<n;i++) {
        d1 += A[i][i];
        d2 += A[i][n-i-1];
    }

    if(d1 != sum || d2 != sum)
        flag = 0;

    if(flag)
        printf("\nIt is a Magic Square\n");
    else
        printf("\nNot a Magic Square\n");
}

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c];

    printf("Enter elements of Matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &B[i][j]);

    addMatrix(r, c, A, B);

    saddlePoint(r, c, A);

    if(r == 2 && c == 2)
        inverse2x2(A);
    else
        printf("\nInverse only implemented for 2x2 matrix\n");

    if(r == c)
        magicSquare(r, A);
    else
        printf("\nMagic Square check only for square matrix\n");

    return 0;
}
