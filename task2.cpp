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
for(int i = index;i >= 0;i--)
{
  cout<<word[i];
}
}