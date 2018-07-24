#include<iostream>
#include<conio.h>
using namespace std;
class num
{
    int a;
public:
    num(int x)
    {
        a=x;
    }
    num(num &n)
    {
        a=n.a;
    }
    void show()
    {
        cout<<"\n number is="<<a;
    }
};
int main()
{
    num n1(5);
    num n2(6);
    num n3(n1);
    n1.show();
    n2.show();
    n3.show();
    getch();
}
