#include <iostream>
using namespace std;

main()
{
 int arrsize;
 cout<<"Enter the size of array : ";
 cin>>arrsize;
 int resistance[arrsize];
 int sum = 0;
 for(int index = 0;index < arrsize;index++)
 {
   cout<<"Enter the resistance : ";
   cin>>resistance[index];
   sum = sum + resistance[index];
 }
 cout<<"The sum of resistance is "<<sum;
 
}