#include<stdio.h>

int linearSearch(int arr[], int n, int size);
int main(void)
{
  int n;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};    
  int size = sizeof(arr)/sizeof(arr[0]);

  printf("Enter the number you want to search for: ");
  scanf("%d", &n);

  if (linearSearch(arr, n, size) == 0)
    printf("NOT FOUND!");
  else
    printf("Found element at index %d", linearSearch(arr, n, size));
}

int linearSearch(int arr[], int n, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == n)
      return i;
  }
  return 0;
}



