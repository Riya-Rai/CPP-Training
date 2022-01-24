#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    cout<<arr.size()<<endl;

    arr.push_back(1);
    arr.push_back(24);
    arr.push_back(36);

    cout<<arr.size()<<endl;

    //vector<int> a = {1,2,3,4,5};
    //vector<int> arr{1,2,3,4,5};
    // 
    
    for( int it: arr){
        cout<<it<<" ";
    }


    return 0;
}