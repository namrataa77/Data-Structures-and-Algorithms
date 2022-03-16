#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void display( vector<int> temp, vector<int> temp2){
     vector<int> finalArray;
    finalArray.insert( finalArray.begin(), temp2.begin(), temp2.end());
    finalArray.insert( finalArray.end(), temp.begin(), temp.end());

    for (auto i = finalArray.begin(); i != finalArray.end(); ++i)
            cout << *i << " ";

}

void splitArray(int arr[], int start, int end, int n){

    vector<int> temp;
        for( int i = start; i <= end; i++){
            temp.push_back(arr[i]);
        }
    vector<int> temp2;
        for( int i = 0; i < start; i++){
            
            temp2.push_back(arr[i]);
        }
        for( int i = end + 1; i < n; i++){
            
            temp2.push_back(arr[i]);
        }

        display( temp, temp2);
        
}


int main()
{
    int arr[5];
    cout<<"Enter array"<<endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }


    int start, end, n = 5;
    cout << "enter start and end values (1 to 5 index values): " << endl;
    cin >> start >> end;
    splitArray(arr, start, end, n);
    return 0;
}