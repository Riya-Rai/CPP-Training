#include<bits/stdc++.h>
using namespace std;

void grades(int score){

    if(score>=91 && score<=100)
        cout << "AA";
    else if(score>=81 && score<=90) 
        cout << "AB";
    else if(score>=71 && score<=80) 
        cout << "BB";
    else if(score>=61 && score<=70) 
        cout << "BC";
    else if(score>=51 && score<=60) 
        cout << "CD";
    else if(score>=41 && score<=50) 
        cout << "DD";
    else 
        cout << "FAIL";

}

int main(){
    int score;
    cout<<"Enter your marks : ";
    cin>>score;

    cout<<"Your subject grade is : "<<endl;
    grades(score);
}