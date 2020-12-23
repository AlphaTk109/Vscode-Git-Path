/*input
3
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    //test
    int t;
    cin>>t;
    vector<int> myi;
    for(int i=0;i<t;i++)
        myi.push_back(i);
    for(int i=0;i<t;i++)
        cout<<myi[i];
    return 0;
}