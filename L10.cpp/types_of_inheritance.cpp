#include<bits/stdc++.h>
using namespace std;
//Single inheritance
class A{};
class B: public A{};

//Hierarchial inheritance
class A{};
class B: public A{};
class C: public A{};

//Multiple Inheritance
class A{};
class B{};
class C: public A, public B{};

//Multi-level inheritance
class A{};
class B: public A{};
class C: public B{};

//Hybrid Inheritance
class A{};
class B: public A{};
class C: public A{};
class D: public C, public B{}; 