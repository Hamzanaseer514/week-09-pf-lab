#include <iostream>
using namespace std;

main()
{
  string word;
  cout<<"Enter the word : ";
  getline(cin,word);
 char letter;
 cout<<"Enter the character : ";
 cin>>letter;
 char result;
 for(int index = 0;word[index] != '\0';index++)
 {
  result = word[index];
 }
 if(result == letter)
 {
  cout<<"Same";
 }
 else
 {
   cout<<"Not same ";
 }
}