#include <iostream>
using namespace std;
#define f(i, n) for (i = 0; i < n; i++)

int perm(char s[], int k) //size of s is not necessary
{
 cout << s << endl;
 static int res[5]; //here i have to declare the space or number of elements
 int i = 0;
 static int map[10] = {0}; //i also dont want this to change during different function calls

 if (s[k] == '\0')
 {
  res[k] = '\0';
  cout << res[k];
 }
 else
 {
  for (i = 0; s[i] != '\0'; i++)
  {
   if (map[i] == 0)
   {
    res[k] = map[i];
    map[i] = 1; //this map is working as hash map
    perm(s, k + 1);
    map[i] = 0; //for backtracking
   }
  }
 }
 return 0;
}

int main()

{
 char s[] = "ABC";
 int k = 0;
 perm(s, k);
 return 0;
}