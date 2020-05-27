//BUBBLE SORT
//Largest element is at the correct position(at the highest index of the array ) after each pass.
#include<stdio.h>
int main()
{
     int k,i,flag, num, j, temp;
     printf("Enter the number of elements ");
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

     for(k=0;k<num-2;k++)
     {
         flag=0;
         for(i=0;i<num-k-1;i++)
         {
             if( array[i]>array[i+1])
             {
                 temp=array[i+1];
                 array[i+1]=array[i];
                 array[i]=temp;
                 flag=1;

             }
         }
         if (flag==0)
         {
             break;
         }
     }

     printf("\n\nThe sorted array is :\n");
     for(j=0;j<num;j++)
     {

         printf(" %d ",array[j]);

     }


    return 0;
}
