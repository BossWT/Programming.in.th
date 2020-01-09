#include <iostream>
#include <string.h>
using namespace std;
int main()
{
        int len;
        char str[101];
        gets(str);
        len = strlen(str);
        for(int i=0; i<len; i++)
        {
                if(str[i] == 'a' or str[i] == 'e' or str[i] == 'o' or str[i] == 'i' or str[i] == 'u')
                {
                        i+=2;
                        cout<<str[i];
                }
                else
                        cout<<str[i];
        }
}
