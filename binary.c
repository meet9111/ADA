#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void binarysearch(int arr[],int left,int right,int key)
{
    int i,mid,indx;
    mid=(left+right)/2;
    if(arr[mid]==key)
         printf("Element Found at Index :%d\t",mid);
    else if(arr[mid]>key)
    {
        binarysearch(arr,left,mid-1,key);
    }  
    else if(arr[mid]<key)
    {
        binarysearch(arr,mid+1,right,key);
    }    
    else
    printf("Element Not Found\t\t");
}
int main()
{
    int key;
    printf("Enter Number to Be Searched :");
    scanf("%d",&key);
    int n = 20000;
    int arr1[n],arr2[n],arr3[n];
    for(int i=0;i<n;i++)
          arr1[i]=i;
    clock_t t;
    t = clock();
    binarysearch(arr1,0,n-1,key);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Execution Time    = %f seconds \n", time_taken);
    return 0;
}
