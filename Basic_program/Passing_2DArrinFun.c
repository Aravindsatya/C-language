/*
 * Program is for passing a 2d array into the fuction using single pointer.
 */
#include <stdio.h> 
void print(int *arr, int row, int col) { 
    int i, j; 
    for (i = 0; i < row; i++) 
      for (j = 0; j < col; j++) 
        printf("%d ", *((arr+i*col) + j));
   printf("\n"); 
} 
  
int main() { 
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    int row = 3, col = 3; 
  
    // We can also use "print(&arr[0][0], m, n);" 
    print((int *)arr, row, col); 
    return 0; 
} 

