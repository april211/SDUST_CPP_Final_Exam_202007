#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


class A
{
protected:
    int a$;
public:
    A(int a):a$(a){}
    ~A(){}
    virtual void print()
    {
        cout << "A : " << a$ << endl;
    }
};

class A1: public A
{
protected:
    int b$;
public:
    A1(int a, int b):A(a), b$(b){}
    ~A1(){}
    void print()
    {
        cout << "A1 : " << a$ << ' ' << b$ << endl;
    }
};

class A2: public A
{
protected:
    int c$;
public:
    A2(int a, int c):A(a), c$(c){}
    ~A2(){}
    void print()
    {
        cout << "A2 : " << a$ << ' ' << c$ << endl;
    }
};

class A3: public A
{
protected:
    int d$;
public:
    A3(int a, int d):A(a), d$(d){}
    ~A3(){}
    void print()
    {
        cout << "A2 : " << a$ << ' ' << d$ << endl;
    }
};


int main()
{
    int a, b, c, d, e, x, y, z;
    cin >> a >> b >> c >> d >> e;
    cin >> x >> y >> z;

    A *p[5];
    p[0] = new A(a);
    p[1] = new A1(b, x);
    p[2] = new A2(c, y);
    p[3] = new A3(d, z);
    p[4] = new A(e);

    for(int i = 0; i < 5; i++)
        p[i]->print();

    for(int i = 0; i < 5; i++)
        delete p[i];
}


//Problem H: 类的多态
//Time Limit: 1 Sec  Memory Limit: 128 MB
//Submit: 679  Solved: 242
//[Submit][Status]
//Description
//         设计一个父类A和三个子类A1、A2、A3，满足“Append Code”，完成程序。
//
//
//
//         类A存储一个整数值，类A1、A2、A3在类A上增加了一个整数值，输出由print()函数完成，且可以多态的调用print()函数。
//
//Input
//         输入为八个整数。
//
//Output
//         见样例。
//
//Sample Input
//1 2 3 4 5
//10 20 30
//Sample Output
//A : 1
//A1 : 2 10
//A2 : 3 20
//A2 : 4 30
//A : 5
//HINT
//Append Code
//append.c, append.cc,
