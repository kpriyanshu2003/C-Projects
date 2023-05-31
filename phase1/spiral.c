// C++ program to form a Spiral Matrix
// from the given Array

#include <stdio.h>

#define R 10
#define C 10

// Function to form the spiral matrix
void formSpiralMatrix(int arr[], int mat[R][C])
{
  int top = 0,
      bottom = R - 1,
      left = 0,
      right = C - 1;

  int index = 0;

  while (1)
  {

    if (left > right)
      break;

    // print top row
    for (int i = left; i <= right; i++)
      mat[top][i] = arr[index++];
    top++;

    if (top > bottom)
      break;

    // print right column
    for (int i = top; i <= bottom; i++)
      mat[i][right] = arr[index++];
    right--;

    if (left > right)
      break;

    // print bottom row
    for (int i = right; i >= left; i--)
      mat[bottom][i] = arr[index++];
    bottom--;

    if (top > bottom)
      break;

    // print left column
    for (int i = bottom; i >= top; i--)
      mat[i][left] = arr[index++];
    left++;
  }
}

// Function to print the spiral matrix
void printSpiralMatrix(int mat[R][C])
{
  for (int i = 0; i < R; i++)
  {
    for (int j = 0; j < C; j++)
      printf("%5d", mat[i][j]);
    printf("\n");
  }
}

// Driver code
int main()
{
  int arr[100];
  for (int i = 0; i < 100; i++)
    arr[i] = i + 1;
  int mat[R][C];

  formSpiralMatrix(arr, mat);
  printSpiralMatrix(mat);

  return 0;
}