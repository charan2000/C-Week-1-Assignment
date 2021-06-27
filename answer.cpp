//Given a string S, remove consecutive duplicates from 
//it recursively.(do recursively)
//eg:aabccba -> abcba

#include <bits/stdc++.h>
using namespace std;

//void delete_elements(int arr[], int size){}
void remove_consecutive_chars(char *c)
{
    if (c[0] == 0)
    {
        return;
    }
    if (c[0] == c[1])
    {
        int i = 0;
        while (c[i] != 0)
        {
            c[i] = c[i + 1];
            i++;
        }
        remove_consecutive_chars(c);
    }
    remove_consecutive_chars(c + 1);
}

int main()
{
    char ch[] = "aabccba";
    remove_consecutive_chars(ch);
    cout << ch << endl;
    return 0;
}