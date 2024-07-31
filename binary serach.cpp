

#include <iostream>
using namespace std;

int binarySearch(int array[], int key, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    
    if (array[mid] == key)
      return mid;


    if (array[mid] > key)
      return binarySearch(array, key, low, mid - 1);

    
    return binarySearch(array, key, mid + 1, high);
  }

  return -1;
}

int main(void)
 {
  int array[] = {4, 17, 32, 44, 75, 80, 86};
  cout << "The array to be searched is: ";
    for (int i; array;) 
	{
      cout << i << ", ";
    }
  cout << std::endl;
  int key = 80;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, key, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
    
}
    
    
    
    
