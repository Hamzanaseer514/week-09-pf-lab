#include <iostream>
using namespace std;

main()
{
  int arrSize;
  cout<<"Enter the sixe of array : ";
  cin>>arrSize;
  int number[arrSize];
  int maximum = 0;
  int answer;
  for(int index = 0;index < arrSize;index++)
  {
    cout<<"Enter the number : ";
    cin>>number[index];

  }
  int max = number[0];

  for(int index = 1;index < arrSize;index++)
  {
    if(max > number[index])
    {
      continue;
    }
    else
    {
      max = number[index];
    }

  }
  cout<<max <<" is the largest number . ";

}