#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void SelectionSort(int array[],int SIZE)
{
    int c,d,swap,position;
    for ( c = 0 ; c < ( SIZE-1 - 1 ) ; c++ )
   {
      position = c;

      for ( d = c + 1 ; d < SIZE-1 ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c )
      {
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
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
      for(i=0;i<n;++i)
        printf("%d",array[i]);  
    start=clock();
   SelectionSort(array,SIZE);
   end=clock();

    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time of execution for random: %f\n", (float) cpu_time_used);

    start=clock();
   SelectionSort(array,SIZE);
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
   SelectionSort(array,SIZE);
   end=clock();

    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    
    printf("Time of execution for reverse sorted: %f\n", (float) cpu_time_used);

   return 0;
   /*printf("Sorted list in ascending order:\n");

   for ( c = 0 ; c < SIZE-1; c++ )
      printf("%d\n", array[c]);*/

}
