#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void linearsearch(int arr[], int n,int val)
{
    int i,index,flag=0;
    for (i = 0; i < n; i++)
    {
        if(arr[i]==val)
        {   flag=1;
            index=i;
            break;
        }   
    }
    if(flag==0)
    printf("Element Not Found\t\t");
    else
    printf("Element Found at Index :%d\t",index);
}
int main()
{
    int key,val;
    printf("Enter Number to Be Searched :");
    scanf("%d",&val);
    int n = 10000;
    int arr1[n],arr2[n],arr3[n];
    for(int i=0;i<n;i++)
        {
            arr1[i]=i;
        }    
    clock_t t;
    t = clock();
    linearsearch(arr1,n,val);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Execution Time    = %f seconds \n", time_taken);
    for(int i=0;i<n;i++)
        {
            arr2[i] = rand();
        }
    return 0;
}
