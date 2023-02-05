#include <iostream>
using namespace std;

main()
{
  string word;
  cout<<"Enter the statement from which vowels are extracted : ";
  getline(cin,word);
  
  for(int index = 0;word[index] != '\0';index++)
  {
    if(word[index] == 'a' || word[index] == 'e' || word[index] == 'i' || word[index] == 'o' || word[index] == 'u' || word[index] == 'A' || word[index] == 'E' || word[index] == 'I' || word[index] == 'O' || word[index] == 'U')
    {
     continue;
    }
     cout << word[index];
  }
 
}