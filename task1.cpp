#include <iostream>
using namespace std;

main()
{
 string word;
 cout<< "Enter the word : ";
 cin>>word;
 
 for(int index = 0;word[index] != '\0';index++)
 {
   cout<< word[index]<< " is present in "<<index<<endl;
 }
}