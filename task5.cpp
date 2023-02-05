#include <iostream>
using namespace std;

main()
{
  string word;
  cout<<"Enter the word : ";
  getline(cin,word);
  int counter = 0;
  for(int index = 0;word[index] != '\0';index++)
  {
    if(word[index] == 'a' || word[index] == 'e' || word[index] == 'i' || word[index] == 'o' || word[index] == 'u' || word[index] == 'A' || word[index] == 'E' || word[index] == 'I' || word[index] == 'O' || word[index] == 'U')
    {
      counter = counter + 1;
    }
  }
  cout<<"The number of vowels in a given word is : " <<counter;
}