#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
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

    ofstream out("items.txt");
    for(int i = 0; i < items.size(); i++) out << items[i] << '\n';

    return 0;
}
