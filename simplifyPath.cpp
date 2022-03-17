#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string path = "/hoome..//fun/";
    int n = path.length();
        string str = "";
        
        for( int i = 0; i<n; i++){
            if(path[i] == '/')
            {
                if(path[i]!=path[i+1]){
                str+=path[i];
                }
            }
            else 
            str += path[i];
        }
        
        for(int i=0; i<str.length(); i++){
           if( str[i] == '.')
              str.erase(str.begin()+ i);
                
        }
        int n1 = str.length() - 1;
        
        if( str[n1] == '/'){
            str.pop_back();
        }

        str.erase(std::remove(str.begin(), str.end(), '.'), str.end());

        cout << str;
    return 0;
}