#include <iostream>
using namespace std;

main()
{
  int arrsize = 4;
  float number[arrsize];
  float price;
  cout << "Enter the price : ";
  cin >> price;
  float total;
  for (int index = 0; index < arrsize; index++)
  {
    cout << "Enter the number : ";

    cin >> number[index];
   
  }
   total = (number[0] * 0.25) + (number[1] * 0.10) + (number[2] * 0.05) + (number[3] * 0.01);

  if (price > total)
  {
    cout << "False";
  }
  if (price <= total)
  {
    cout << "True";
  }
}