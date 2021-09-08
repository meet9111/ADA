#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void MergeSort(int array[],int SIZE)
{
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
    
}
int main()
{
    srand(time(NULL));
    int SIZE,temp;
    printf("Enter size of mergearray: ");
    scanf("%d",&SIZE);                      // seeding the random number generator
   int array[SIZE-1], n, c, d, position, swap;

   clock_t start,end;
    double cpu_time_used;

   for ( c = 0 ; c < SIZE-1 ; c++ )
      array[c]=rand()%100;
        
    start=clock();
   MergeSort(array,SIZE);
   end=clock();

    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time of execution for random: %f\n", (float) cpu_time_used);

    start=clock();
   MergeSort(array,SIZE);
   end=clock();

    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time of execution for sorted: %f\n", (float) cpu_time_used);

    int i,j;
    for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (array[i] < array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;            
               }
            }
           
        }
        
       
    start=clock();
   MergeSort(array,SIZE);
   end=clock();

    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Time of execution for reverse sorted: %f\n", (float) cpu_time_used);

   return 0;
   /*printf("Sorted list in ascending order:\n");

   for ( c = 0 ; c < SIZE-1; c++ )
      printf("%d\n", array[c]);*/

}
