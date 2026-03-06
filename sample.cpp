#include <iostream>
using namespace std;

class A{
    public:
    virtual void fun(){
        cout<<"Function A"<<endl;
    }
};

class B : public A{
    public:
    void fun() override {
        cout<<"Function B"<<endl;
    }
};

class C : public A{
    public:
    void fun() override {
        cout<<"Function C"<<endl;
    }
};

class D : public B, public C{
    public:
    void fun() override {
        cout<<"Function D"<<endl;
    }
    
};


int main(){
    A* a;
    B b;
    C c;
    a = &b;
    a->fun();
    a = &c;
    a->fun();
}