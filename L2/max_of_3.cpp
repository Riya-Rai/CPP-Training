#include<bits/stdc++.h>
using namespace std;

int main(){

    int a=1;
    int b=2;
    int c=3;
    int* p1=&a;
    int* p2=&b;
    int* p3=&c;

    if(*p1>*p2 && *p1 > *p3){
        cout<<*p1;
    }
    else if(*p2>*p1 && *p2>*p3){
        cout<<*p2;
    }
    else{
        cout<<*p3;
    }
}