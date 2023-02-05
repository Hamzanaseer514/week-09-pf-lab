#include <iostream>
using namespace std;

main()
{
  int arrSize;
  cout<<"Enter the size of array : ";
  cin>>arrSize;
  int number[arrSize];
  for(int index = 0; index < arrSize;index++)
  {
    cout<<"Enter the number : ";
    cin>>number[index];
  }
  int scalarNumber;
  cout<<"Enter the scalar number to multiply : ";
  cin>>scalarNumber;
  for(int index = 0; index < arrSize;index++)
  {
    cout<<number[index]*scalarNumber<<endl;
  }
}