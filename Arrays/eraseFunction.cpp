#include<iostream>
#include<vector>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    vector<int> nums;
    
   nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(3);

int val = 2;

    vector<int>::iterator it;
        int c=0;
        for( int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                it = nums.begin()+i;
                nums.erase(it);
                
            }
            
        }
        
        for(int i = 0; i < nums.size(); i++){
                cout<< nums[i] ;
            }
}