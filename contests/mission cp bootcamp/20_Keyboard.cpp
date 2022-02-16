#include <iostream>

using namespace std;
int main()
{
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";
    char shift;
    cin >> shift;
    string input;
    cin >> input;
    if (shift = 'L')
    {
        string s1u = "qwertyuio";
        string s2u = "asdfghjkl";
        string s3u = "zxcvbnm,.";
    }
    else if (shift = 'R')
    {
        string s1u = "wertyuiop";
        string s2u = "sdfghjkl;";
        string s3u = "xcvbnm,./";
    }
     
    return 0;
}