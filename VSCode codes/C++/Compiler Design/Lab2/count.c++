#include<iostream>
#include<fstream>
using namespace std;

void countChar(char filename[]){
    char ch;
    int tot=0;
    ifstream fp;
    fp.open(filename, ifstream::in);
    if(!fp)
    {
        cout<<endl<<"File doesn't exist or Access denied!";
        return;
    }
    while(fp>>noskipws>>ch)
        tot++;
    fp.close();
    cout<<endl<<"Total Characters = "<<tot;
    cout<<endl;
}

void countWord(char filename[]){
    char ch, str[1000];
    int tot=0, i=0, tot_word=0;
    ifstream fp;
    fp.open(filename, ifstream::in);
    if(!fp)
    {
        return;
    }
    while(fp>>noskipws>>ch)
    {
        str[tot] = ch;
        tot++;
    }
    fp.close();
    str[tot]='\0';
    while(str[i]!='\0')
    {
        if(str[i]=='\n')
        {
            if(str[i+1]!='\0' && str[i+1]!=' ')
                tot_word++;
            i++;
        }
        else if(str[i]!=' ')
            i++;
        else
        {
            if(str[i+1]!='\0' && str[i+1]!=' ')
                tot_word++;
            i++;
        }
    }
    cout<<endl<<"Total Words = "<<tot_word;
    cout<<endl;
}

void countLine(char filename[]){
    char ch, str[1000];
    int tot=0, i=0, tot_lines=0;
    ifstream fp;
    fp.open(filename, ifstream::in);
    if(!fp)
    {
        return;
    }
    while(fp>>noskipws>>ch)
    {
        str[tot] = ch;
        tot++;
    }
    fp.close();
    str[tot]='\0';
    while(str[i]!='\0')
    {
        if(str[i]=='\n')
            tot_lines++;
        i++;
    }
    tot_lines++;
    cout<<endl<<"Total Number of Lines = "<<tot_lines;
    cout<<endl;
}

void countBlank(char filename[]){
    char ch, str[1000];
    int tot=0, i=0, tot_blanks=0;
    ifstream fp;
    fp.open(filename, ifstream::in);
    if(!fp)
    {
        return;
    }
    while(fp>>noskipws>>ch)
    {
        str[tot] = ch;
        tot++;
    }
    fp.close();
    str[tot]='\0';
    while(str[i]!='\0')
    {
        if(str[i]==' ')
            tot_blanks++;
        i++;
    }
    cout<<endl<<"Total Number of Blank Spaces = "<<tot_blanks;
    cout<<endl;
}

int main()
{

    char filename[30];
   
    cout<<"Enter the Name of File: ";
    cin>>filename;

    countChar(filename);
    countWord(filename);
    countLine(filename);
    countBlank(filename);

    return 0;
}