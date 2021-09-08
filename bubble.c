#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void BubbleSort(int array[],int SIZE)
{
   int num[SIZE - 1];
void bubbleSort(int x[])
{
    int i, j;
    for(i = 1; i < SIZE; i++)
    {
        for( j = 0; j < SIZE - 1; j++)
        {
            if(num[j] > num[j+1])
                swap(j, j+1);
        }
    }
}

void sortedlist()
{
    int i;
    printf("\nSorted num=");
    for( i = 0; i < SIZE - 1; i++)
    {
    printf(" %d\n", num[i]);
    }
}

void swap(int x, int y)
{
    int temp;
    temp = num[x];
    num[x] = num[y];
    num[y] = temp;
}

}
int main()
{
    srand(time(NULL));
    int SIZE,temp;
    printf("Enter size of array: ");
    scanf("%d",&SIZE);                      // seeding the random number generator
   int array[SIZE-1], n, c, d, position, swap;

   clock_t start,end;
    double cpu_time_used;

   for ( c = 0 ; c < SIZE-1 ; c++ )
      array[c]=rand()%100;
        
    start=clock();
   BubbleSort(array,SIZE);
   end=clock();

    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time of execution for random: %f\n", (float) cpu_time_used);

    start=clock();
   BubbleSort(array,SIZE);
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
   BubbleSort(array,SIZE);
   end=clock();

    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Time of execution for reverse sorted: %f\n", (float) cpu_time_used);

   return 0;
   /*printf("Sorted list in ascending order:\n");

   for ( c = 0 ; c < SIZE-1; c++ )
      printf("%d\n", array[c]);*/

}
