#include<bits/stdc++.h>
using namespace std;

class ComplexNumbers{
    //(a=bi)*(c+di);
    //(ac-bd)+i(ad+bc);

    public:
    int real;
    int imag;

    ComplexNumbers(int r, int i):
    real(r),
    imag(i)
{}

    void display(){
        cout<<real<<(imag>=0?"+":"-")<<imag<<"i"<<endl;
    }

    //return-type operator symbol(can take argumenst)=>(operator overloading syntax)
    void operator ++(){
        real++;
        imag--;
    }

    ComplexNumbers operator +(ComplexNumbers &c){
        int re = real + c.real;
        int im = imag + c.imag;

        return ComplexNumbers(re,im);
    }

    //Implement div '/' operator overload

};

int main(){
    ComplexNumbers c1(3,5);
    ComplexNumbers c2(1,-7);
    c1.display();
    ++c1;
    c1.display();

    ComplexNumbers c3 = c1+c2;
    c3.display();

    return 0;
}