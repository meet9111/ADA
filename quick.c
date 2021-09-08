#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void quicksort(int array[],int SIZE)
{

void swap(int array[],int i,int j)
{
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
}
int partition(int array[],int p,int r)
{
    int pi=array[r];
    int i=p-1;
    for(int j=p;j<r;j++)
    {
        if(array[j]<pi)
        {   i++;
            swap(array,i,j);
        }
    }
    swap(array,i+1,r);
    return i+1;

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
   quicksort(array,SIZE);
   end=clock();

    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time of execution for random: %f\n", (float) cpu_time_used);

    start=clock();
   quicksort(array,SIZE);
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
   quicksort(array,SIZE);
   end=clock();

    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Time of execution for reverse sorted: %f\n", (float) cpu_time_used);

   return 0;
   /*printf("Sorted list in ascending order:\n");

   for ( c = 0 ; c < SIZE-1; c++ )
      printf("%d\n", array[c]);*/

}
