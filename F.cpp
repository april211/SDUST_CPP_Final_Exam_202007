#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

class Cx
{
protected:
    int a$;
    int b$;
public:
    Cx():a$(0), b$(0){}
    Cx(int a, int b):a$(a), b$(b){}
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
    int a, b;
    cin >> a >> b;
    Cx c, cc(a, b);
    c += cc;
    c.print();
}
//
//
//Problem F: 类的运算符
//Time Limit: 1 Sec  Memory Limit: 128 MB
//Submit: 416  Solved: 340
//[Submit][Status]
//Description
//         设计一个复数类Cx，满足“Append Code”，完成程序。
//
//
//
//         Cx类由实部和虚部组成，需要定义类的构造函数，并且在类上重载运算符“+=”。
//
//
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
//(1,2)
//HINT
//Append Code
//append.c, append.cc,

