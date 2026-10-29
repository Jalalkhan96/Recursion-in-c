//Binary search using recursion;
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] > key)
    {
        return binarySearch(arr, low, mid - 1, key);
    }
    return binarySearch(arr, mid + 1, high, key);
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int key;

    printf("Enter number to search: ");
    scanf("%d", &key);

    int pos = binarySearch(arr, 0, n - 1, key);
    if (pos == -1)
    {
        printf("%d not found\n", key);
    }
    else
    {
        printf("%d found at index %d\n", key, pos);
    }

    return 0;
}
