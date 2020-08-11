#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

class Rl
{
protected:
    int a$;
public:
    Rl(int a = 0):a$(a){}
    ~Rl(){}
    void print()const;
};

inline void Rl::print()const
{
    cout << a$ << endl;;
}

class Cx: public Rl
{
protected:
    int b$;
public:
    Cx():Rl(0), b$(0){}
    Cx(int a, int b):Rl(a), b$(b){}
    ~Cx(){}
    void re(int);
    void im(int);
    int re()const;
    int im()const;
    void print()const;
    void operator+= (const Cx& tt)
    {
        (*this).a$ += tt.a$;
        (*this).b$ += tt.b$;
    }
};


inline void Cx::re(int re)
{
    a$ = re;
}

inline void Cx::im(int im)
{
    b$ = im;
}

inline int Cx::re()const
{
    return a$;
}

inline int Cx::im()const
{
    return b$;
}

inline void Cx::print()const
{
    cout << '(' << a$ << ',' << b$ << ')' << endl;;

}


int main()
{
    int r, i;
    cin >> r >> i;
    Rl rl(r);
    Cx cx(r, i);
    rl.print();
    cx.print();
}

//
//Problem G: 类的继承
//Time Limit: 1 Sec  Memory Limit: 128 MB
//Submit: 438  Solved: 359
//[Submit][Status]
//Description
//         设计一个实数类Rl和一个复数类Cx，其中Rl是Cx的父类，满足“Append Code”，完成程序。
//
//
//
//         Rl类由一个实部组成，Cx扩展了Rl类，增加了虚部，需要定义类的构造函数。类的功能有读取实部的函数re()、读取虚部的函数im()，输出由print()函数完成。
//
//Input
//         输入为两个整数。
//
//Output
//         见样例。
//
//Sample Input
//1 2
//Sample Output
//1
//(1,2)
//HINT
//Append Code
//append.c, append.cc,
