#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string input_path="E://satyam.txt";
    fstream inf(input_path);
    string line;
    string content="";
    while(getline(inf,line))
    {
        content=content+line;

    }
    inf.close();
    cout<<"enter the key for encryption "<<endl;
    int key;
    cin>>key;
    for(int i=0;i<content.length();i++)
    {
        content[i]=content[i]+key;
    }
    cout<<"encryption content is:"<<content<<endl;

    ofstream ofs(input_path);
    ofs<<content;
    ofs.close();


    int choice;
    cout<<"Do you want to Decrypt the data press 1 for yes and zero for no:"<<endl;
    cin>>choice;
    if(choice==1)
    {
        string encrypted_content="";
        ifstream inf2(input_path);
         while(getline(inf2,line))
         {
              encrypted_content=encrypted_content+line;

         }
         inf2.close();
         cout<<"enter the key for Decryption "<<endl;
         int key1;
         cin>>key1;
         for(int i=0;i<encrypted_content.length();i++)
         {
             encrypted_content[i]=encrypted_content[i]-key1;
         }
         cout<<"After Decrypted data is:"<<encrypted_content<<endl;
         ofstream ofs1(input_path);
         ofs1<<encrypted_content;
         ofs1.close();
    }
   return 0;

}


