#include <iostream>
using namespace std;

main()
{
  int arrSize;
  cout<<"Enter the size of array : ";
  cin>>arrSize;
  int number[arrSize];
  for(int index = 0;index < arrSize;index++)
  {
    cout<<"Enter the number : ";
    cin>>number[index];
  }
  for(int index = arrSize-1;index >= 0;index--)
  {
    cout<<number[index];
  }
  
}