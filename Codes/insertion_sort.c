//INSERTION SORT
#include<stdio.h>
int main()
{
    int num,i,j,value,hole;
    printf("Enter the number of elements :");
    scanf("%d",&num);
    int array[num];

    for(j=0;j<num;j++)
     {
         array[j]=rand();

     }

     printf("The unsorted array :\n");
     for(j=0;j<num;j++)
     {
         printf(" %d ",array[j]);

     }

     for(i=1;i<num;i++)
     {
        value=array[i];
        hole=i;
        while(hole>0 && array[hole-1]>value)
        {
            array[hole]=array[hole-1];
            hole=hole-1;
        }
        array[hole]=value;
     }



    printf("\n\nThe sorted array is :\n");
     for(j=0;j<num;j++)
     {

         printf(" %d ",array[j]);
     }


    return 0;
}
