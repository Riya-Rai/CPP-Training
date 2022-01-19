#include<bits/stdc++.h>
using namespace std;

int byvalue(int a){
    a++;
}

int byadd(int *ptr){

(*ptr)++;

}

int byref(int &a){

    a++;

}

int main(){
    int a=10;

    byvalue(a);

    byadd(&a);
    byref(a);
    cout<<a<<endl;

    return 0;
}