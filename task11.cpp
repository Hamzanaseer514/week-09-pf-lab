#include <iostream>
using namespace std;

main()
{
  int arrsize = 4;
  int number[arrsize];
  bool answer = false;

  for (int index = 0; index < arrsize; index++)
  {
    cout << "Enter the number : ";
    cin >> number[index];
  }
  int value;
  cout << "Enter the number which is to be find : ";
  cin >> value;
  for (int index = 0; index < arrsize; index++)
  {
 
    if (value == number[index])
    {
      answer =  true;
      break;
    }
    else
    {
      continue;
    }
  }
  if (answer == true)
  {
    cout << "The number is exist in given array  ";
  }
  else
  {
    cout << "The number doesnot exist in the given array ";
  }
}
