#include <iostream> 
#include <ctime> 
#include <stdlib.h>

int bubbleC, selectionC, quickC; 

void bubblesort()
{
   int bubble[10] = {2, 4, 1, 3, 6, 7, 8, 5, 9, 10}; 
   
   std::cout << "The original Bubble Sort sequence is" <<std::endl;
   for(int i = 0; i < 10; ++i)
   {
        std::cout << bubble[i] << " "; 
   } 
    
   for(int i = 0; i <= 9; ++i)
   {
     bubbleC +=2; 
     bubbleC += 2; 
        int t; 
        for(int j = i + 1; j < 10; ++j)
        {
          bubbleC += 3; 
            if(bubble[i] > bubble[j])
            {
                t = bubble[i]; 
                bubble[i] = bubble[j]; 
                bubble[j] = t; 
              bubbleC+= 3; 
            }
        }
   }
  bubbleC++; 
   std::cout << std::endl; 
   std::cout << "The Bubble Sort sequence is" << std::endl; 
   for(int i = 0; i < 10; ++i)
   {
        std::cout << bubble[i] << " ";
   }
   
}
int Partition(int arr[], int s, int e)
{
    int pivot = arr[e]; 
    int pIndex = s; 

    bubbleC++; 
    for(int i = s; i < e; ++i)
    {
    
        if(arr[i] <= pivot)
        {
            int temp = arr[i]; 
            arr[i] = arr[pIndex]; 
            arr[pIndex] = temp; 
            pIndex++; //Swapped from the pivot of the start
        }
    }
    int temp = arr[e]; 
    arr[e] = arr[pIndex];
    arr[pIndex] = temp; //Swapped from pivot to the right

    return pIndex; 
}

void QuickSort(int arr[], int s, int e)
{
    if(s < e)
    {
        int p = Partition(arr, s, e); quickC += 3; 
        QuickSort(arr, s, (p -1)); quickC += 4; //Pivot left for smaller
        QuickSort(arr, (p +1), e); quickC +=4;//Pivote right for taller
    }
}
void printQuickSort()
{
    
    int size = 10; 
    int myarr[10] = {2, 4, 1, 3, 6, 7, 8, 5, 9, 10}; 
    std::cout << std::endl; 
    std::cout << "The originl Quick Sort Sequence is" << std::endl; 
    for(int i = 0; i < size; ++i)
    {
        std::cout << myarr[i] << " "; 
    }
  
    QuickSort(myarr, 0, (size -1));
    std::cout << std::endl;
    std::cout << "The new Quick Sort Sequence is" << std::endl; 
    for(int i = 0; i < size; ++i)
    {
        std::cout << myarr[i] << " "; 
    }
    
}
void SelectionSort()
{
    int arr[10] = {2, 4, 1, 3, 6, 7, 8, 5, 9, 10};
    std::cout << std::endl; 
    std::cout << "Original Selection Sort Sequence is" << std::endl;; 
    for(int i = 0; i < 10; ++i)
    {
        std::cout << arr[i] << " "; 
    }
    for(int i = 0; i < 9; ++i)
    {
       selectionC += 3; 
        int minval = i; 
        for(int j = i+1; j < 10; ++j)
        {
          selectionC += 3;
            if(arr[j] < arr[minval])
            {
                minval = j; 
            }
        }
      selectionC +=2;
        if(minval != i)
        {
            int t = arr[minval]; 
            arr[minval] = arr[i]; 
            arr[i] = t; 
        }
    }
    std::cout << std::endl;
    std::cout << "New Selection Sort Sequence is" << std::endl; 
    for(int i = 0; i < 10; ++i)
    {
        std::cout << arr[i] << " "; 
    }

}
int main()
{
    bubblesort(); 
    printQuickSort(); 
    SelectionSort(); 
    std::cout << std::endl; 
    std::cout << std::endl; 
    std::cout << std::endl;
    std::cout << "Quick sort time complexity:  " << quickC <<std::endl;
    std::cout << "Bubble sort time complexity: " << bubbleC <<std::endl; 
    std::cout << "Selection sort time complexity: " << selectionC<<std::endl;

  std::cout << std::endl; 
  
    std::cout << "The most efficient algorithm to sort the array is Quick sort and the least efficeint algorithm is Bubble sort" << std::endl;
}
