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
    ~Cx(){}
    void re(int);
    void im(int);
    void print();
};


inline void Cx::re(int re)
{
    a$ = re;
}

inline void Cx::im(int im)
{
    b$ = im;
}

inline void Cx::print()
{
    cout << '(' << a$ << ',' << b$ << ')';

}

int main()
{
    Cx cc;
    int a, b;
    cin >> a >> b;
    cc.re(a);
    cc.im(b);
    cc.print();
}



//Problem C: 类
//Time Limit: 1 Sec  Memory Limit: 128 MB
//Submit: 620  Solved: 466
//[Submit][Status]
//Description
//         设计一个复数类Cx，满足“Append Code”，完成程序。
//
//
//
//         Cx类由实部和虚部组成，类的功能有修改实部的re()函数和修改虚部的im()函数，输出由print()函数完成。
//
//Input
//         输入为两个整数。
//
//Output
//         见样例。
//
//Sample Input
//3 2
//Sample Output
//(3,2)
//HINT
//Append Code
//append.c, append.cc,
