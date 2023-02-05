#include <iostream>
using namespace std;

main()
{
  int arry1[2] = {15,150};
  int arry2[] = {45,75,35};
  int size = (sizeof(arry2)/4) + 2;
  int arry3[size];
  arry3[0] = 15;
  arry3[size-1] = 150;
  for(int i = 1; i <= size-2; i++)
  {
    arry3[i] = arry2[i-1];
  } 
  for(int i = 0; i < size; i++)
  {
    cout << arry3[i] << endl;
  }

}