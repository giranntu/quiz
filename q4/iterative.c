#include <stdlib.h>
#include <stdio.h>

int maxSubArray(int arr[], int len)
{
    int sum = 0;
    int largestsum = arr[0];
    for(int j = 0; j < len; j++)
    {
        if(sum > 0) sum += arr[j];                
        else sum = arr[j];
        if(largestsum < sum) largestsum = sum;
    }
    return largestsum;
}

int main()
{

    printf("Enter the num of array : ");
    scanf("%d", &num);
    int arr[&num];
    printf("Enter the num of array : ");
    for(int i=0;i<&num;i++)
    scanf("%d", &arr[i]);
    fflush(stdin);

    int len = sizeof(arr) / sizeof(arr[0]);
    maxSubArray(arr, len);
    return 0;
}
