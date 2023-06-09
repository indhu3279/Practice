Row Column Pairing of matrices
Given two matrices m1 , m2 and a capacity 'C', write a code to obtain a matrix m3 after row-column pairing.
 Row - column paring is an operation in which the elements in the matrix1 are paired rowwise with elements of
 matrix2 columnwise to obtain a matrix m3. m3[i][j] is the count of elements of ith row when added with 
corressponding (column index of element in matrix1 is same as row index of element in matrix2) elements of
 jth column is less than or equal to capacity C.

For example, given a matrix m1 as below:

120 230 170 110

100 90 115 190

135 78 95 245

and m2 as below:

300 400 240 450

456 230 245 350

236 230 340 234

392 321 295 331

when capacity is 500, matrix m3 will be:

2 3 3 2

2 2 4 2

2 2 3 2

Input Format

First line contains the number of rows in matrix1, r1

Next line contains the number of columns in matrix1, c1

Next r1 contains the elements in row1 of matrix1 separated by a space

Next line contains the number of rows in matrix2, r2

Next line contains the number of columns in matrix2, c2

Next r2 contains the elements in row1 of matrix2 separated by a space

Next line contains the capacity, s

Output Format

Print matrix m3 elements of one row in a single line separated by a tab

Note: A tab is present at the end of each row


//C CODE

#include<stdio.h>
int main(){
    int r1,c1,r2,c2,c;
    scanf("%d",&r1);
    scanf("%d",&c1);
    int arr1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    scanf("%d",&r2);
    scanf("%d",&c2);
    int arr2[r2][c2];
    int arr3[r1][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int h=0,g=0;
    scanf("%d",&c);
    int count = 0;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            count = 0;
            for(int k=0;k<r2;k++){
                if(arr1[i][k]+arr2[k][j]<=c){
                    count++;
                }
            }
            arr3[i][j] = count;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
}