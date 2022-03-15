#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotateBy1( int arr[], int n){
    int temp = arr[0], i;
    for( i = 0; i<n-1; i++)
    arr[i] = arr[i+1];
    arr[n-1] = temp;
} 


void rotateLeft(int arr[], int d, int n){
    for(int i = 0; i<d; i++)
    rotateBy1(arr,n);
}

void display( int arr[], int n){
    for( int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int d = 2;
    int n = 5;
    rotateLeft(arr, 2, 5);
    display(arr, n);
    return 0;
}