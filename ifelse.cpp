#include<bits/stdc++.h>
using namespace std;
 
int main()
{   char ch;
    cout<<"enter value of ch ;"<<endl;
    cin>>ch;
 
    if (ch >= 'A' && ch <= 'Z')
        cout<< ch << " is an UpperCase character\n";
 
    else if (ch >= 'a' && ch <= 'z')
    cout<< ch << " is an LowerCase character\n";
             
 
    else
        cout<< ch << " is not an aplhabetic character\n";
             
}