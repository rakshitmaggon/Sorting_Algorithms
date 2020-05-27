//HEAP SORT
#include <stdio.h>

  void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }

  void heapify(int arr[], int n, int i) {

    int largest = i; //initialize largest as root
    int left = 2 * i + 1;
    int right = 2 * i + 2;


    if (left < n && arr[left] > arr[largest])
      largest = left;

    if (right < n && arr[right] > arr[largest])
      largest = right;

      //largest is not root
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest); //recursive
    }
  }


  void heapSort(int arr[], int n) {


      //this has to be in reverse order , as we are moving from leaf to root
    for (int i = n - 1; i >= 0; i--)
      heapify(arr, n, i); //heap made


    //extracting elements from the heap
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
      heapify(arr, i, 0);
    }
  }


  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }


  int main() {
      int j,n;
      printf("Enter the number of elements ");
     scanf("%d",&n);
     int arr[n];

     for(j=0;j<n;j++)
     {
         arr[j]=rand();

     }

     printf("The unsorted array :\n");
     for(j=0;j<n;j++)
     {
         printf(" %d ",arr[j]);

     }

    heapSort(arr, n);


    printf("\nSorted array is \n");
    printArray(arr, n);

  }
