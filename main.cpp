#include<iostream>
using namespace std;

class  A
{
protected:
    int a;
public:
    void input()
    {
        cout<<"\n Enter the value:";
        cin>>a;
    }
    void output()
    {
        cout<<"\n value of a="<<a;
    }


};

class B
{
protected:
    int b;
public:
    void input()
    {
        cout<<"\n Enter the value:";
        cin>>b;
    }
    void putdata();
};

void B::putdata()
{
    cout<<"\n value of b="<<b;

}


class C : public A, public B
{
    int c;
public :
    void input()
    {
        cout<<"\n Enter the value :";
        cin>>c;
        A::input();
        B::input();
    }
    void display();

};

void C ::display()
{
    cout<<"\n value of c="<<c;
}

int main()
{
    C aa;
    aa.input();
    aa.display();
    aa.output();
    aa.putdata();
    return 0;


}
