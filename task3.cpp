#include <iostream>
using namespace std;

main()
{
  string word;
  cout<<"Enter the word : ";
  getline(cin,word);
 int index = 0;
 while(word[index] != '\0')
 {
  index++;
 }
 if(index % 2 == 0)
 {
  cout<<"True";
 }
 else 
 {
   cout<<"False";
 }
}