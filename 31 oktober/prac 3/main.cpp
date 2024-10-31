#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string name ;
    name = "zaki" ;
    int size = name.length() ;
    cout << size << endl ;
    int i;
    for(i=0;i<name.size();i++)
     cout << name[i] ;
    
    return 0;
}
