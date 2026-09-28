#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{

    string  message="well come in cpp programming";
    //string file_path="D:\filehandling\\sampletext.txt";
    string file_path = "D:\\filehandling\\sampletext.txt";

    fstream ofs(file_path);
    ofs<<message;
    cout<<"file create successfully"<<endl;
    ofs.close();
}
