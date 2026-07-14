#include <iostream>
using namespace std;
int main()
{
  int arr1[5];

  cout << "Enter 5 elements in the array: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cin >> arr1[i];
  }
  cout << "The elements of array 1 are: ";
  for (int i = 0; i < 5; i++)
  {
    cout << arr1[i] << " ";
  }
  cout << endl;
  return 0;
}