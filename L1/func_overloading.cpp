#include<bits/stdc++.h>
using namespace std;

//IT has different numbers of parameters
//It has same number of parameters but different data-types of parameters
//It has diff. no. of parameters and different data-types of parameters

int max_self(int a, int b){
    return a>b?a:b;
}

int max_self(int a, int b, int c){
    return max_self(a, max_self(b,c));
    //not recurrsion bcs both functions are different.
}

int max_self(int a, int b, int c, int d){
    return max_self(max_self(a,b,c),d);
}

int main(){
    cout<<"MAX of 2 no.s : "<<max_self(10, -20);
    cout<<"MAX of 3 no.s : "<<max_self(10, -20, 100);

    return 0;
}