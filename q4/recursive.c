#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int maxSubArray(int A[], int start, int end)
{
    if (start > end)
        return 0;
    if (start == end)
        return max(0, A[start]);
    int middle = (start + end)/2;
    int i = 0, left = MIN, right = MIN, sum;
    sum = 0;
    for (i = middle + 1; i <= end; i++) {
        sum += A[i];
        if (sum > right)
            right = sum;
    }
    sum = 0;
    for (i = middle; i >= start; i--) {
        sum += A[i];
        if (sum > left)
            left = sum;
    }
    sum = left + right;

    return (max(sum, max(maxSubArray(A, start, middle), maxSubArray(A, middle + 1, end))));
}

int main()
{
    int sum, count = 0;
    printf("enter the num of array : ")
    scanf("%d", &count);
    int arr[&count];
    printf("enter the array's num as follows : ")
    for(int i=0;i<id_length;i++)
    scanf("%d", &array[i]);
    
    sum = maxSubArray(A, 0, count-1);
    printf("%d\n", sum);
    return 0;
}
