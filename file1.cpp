#include<iostream>
#include"2_QuickSort.h"
using namespace std;
int main() {
    int t=6;
    int a[6];
    for(int i=0;i<t;i++) 
    {
        cin>>a[i];
    }
    QuickSort(a,6);
    for(int i=0;i<t;i++) 
    {
        cout<<a[i];
    }
}