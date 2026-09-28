#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string input_path="E://T.txt";
    fstream inf(input_path);
    string line;
    while(getline(inf,line))
    {
        cout<<line<<endl;

    }
    return 0;
}


