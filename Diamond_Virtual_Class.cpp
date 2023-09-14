#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    int i ;
    A()
    {
        std::cout<<"A is CALLED"<<endl;
    }
};
class B : virtual public A
{
    public:
    int j ;
    B()
    {
        std::cout<<"B is CALLED"<<endl;
    }
};
class C : virtual public A
{
    public:
    int k ;
    C()
    {
        cout<<"C is CALLED"<<endl;
    }
};
class D : public B ,public C
{
    public:
    int l ;
    D()
    {
        cout<<"D is CALLED"<<endl;
    }
};
int main()
{
    D obj1;
}
