#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <windows.h>
using namespace std;

int main()
{
    ofstream out("items.txt");
    char* clipboardText;

    if(OpenClipboard(NULL))
    {
        HANDLE clip = GetClipboardData(CF_TEXT);
        clipboardText = (LPSTR)GlobalLock(clip);
        GlobalUnlock(clip);
        CloseClipboard();
    }

    vector<char*> raw;
    char delim[3] = {(char)10,(char)13,'\0'};

    char *p = strtok(clipboardText,delim);
    while(p)
    {
        out << p << '\n';
        p = strtok(NULL,delim);
    }

    out.close();


    ifstream in("items.txt");
    string item;
    vector<string> items;

    while(getline(in,item))
    {
        if(item[0]     != '('              &&
           item.size() != 0                &&
           item        != "content_copy"   &&
           item        != "Hair"           &&
           item        != "Dress"          &&
           item        != "Coat"           &&
           item        != "Top"            &&
           item        != "Bottom"         &&
           item        != "Hosiery"        &&
           item        != "Shoes"          &&
           item        != "Makeup"         &&
           item        != "Accessory"      &&
           item        != "Soul"             )
                items.push_back(item);
    }

    out.open("items.txt");
    for(int i = 0; i < items.size(); i++) out << items[i] << '\n';

    return 0;
}
