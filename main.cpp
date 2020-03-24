#include <iostream>
#include<string.h>
using namespace std;

string compress(string &s)
{
    char prev_char;
    string new_str="";
    prev_char=s[0];

int count=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==prev_char)
        {
         count++;
        }
        else
        {
         new_str=new_str+prev_char+to_string(count);
           prev_char=s[i];
           count=1;

        }
    }
    new_str=new_str+prev_char+to_string(count);
    return new_str;
}

int main()
{
    string example="aabccdeeeeee";
    string result=compress(example);
    cout<< endl <<"The compressed string is:"  << result;

    return 0;
}
