#include<stdio.h>

int countPairsWithDiff(int arr[], int n, int k)
{
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
            if (arr[i] - arr[j] == k )
                count++;
    }
    return count;
}

int main()
{
    int arr[] =  {5, 2,  1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int count = countPairsWithDiff(arr,n,k);
    printf("Count of pairs with given diff is %d \n",count);
    return 0;
}