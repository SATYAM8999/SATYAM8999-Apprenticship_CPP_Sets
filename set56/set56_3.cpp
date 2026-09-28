#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class TestConcat
{
public:
      string  getFileContent(string filepath)
      {
          ifstream ifs(filepath);
          string content="";
          string line;
          while(getline(ifs,line))
          {
              content=content+""+line;
          }
          ifs.close();
          return content;
      }
};
class TextFileWriter
{
public:
       bool isFileWritter(string content,string path)
       {
            bool flag=false;
            ofstream ofs(path);
            ofs<<content;
            ofs.close();
            flag=true;
            return flag;
       }

};
int main()
{
    TestConcat tc;
    string path1="D://java.txt";
    string content1=tc.getFileContent(path1);
    string path2="D://python.txt";
    string content2=tc.getFileContent(path2);
    string concatString=content1+" "+content2;
    string newpath="D://concatfile.txt";
    TextFileWriter tfw;
    if(tfw.isFileWritter(concatString,newpath))
        cout<<"File are concat successfully"<<endl;
    else
        cout<<"Error in concatinating file"<<endl;


    return 0;

}
