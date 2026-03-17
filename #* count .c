//check #* inn string if equal print  0, if < negative, if > positive

//c++
#include<iostream>
using namespace std;
int main()
{
  string s;
  getline(cin, s);
  int hash_count = 0;
int star_count = 0;
for(int i = 0; i<s.size();i++)
{
  if(s[i]=='*) star_count++;
    else if(s[i]=='#) hash_count++;
    }
    cout << starcount - hashcount << endl;
return 0;
}
