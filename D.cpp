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
    cout << '(' << a$ << ',' << b$ << ')' << endl;;

}



int main()
{
    Cx c;
    c.print();
    c.im(1);
    c.print();
    c.re(2);
    c.print();
    cout << "====================" << endl;
    int a, b;
    cin >> a >> b;
    Cx cc(a, b);
    cc.print();
}

//
//
//Problem D: 类的构造
//Time Limit: 1 Sec  Memory Limit: 128 MB
//Submit: 572  Solved: 432
//[Submit][Status]
//Description
//         设计一个复数类Cx，满足“Append Code”，完成程序。
//
//
//
//         Cx类由实部和虚部组成，需要定义类的构造函数。类的功能有修改实部的re()函数和修改虚部的im()函数，输出由print()函数完成。
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
//(0,0)
//(0,1)
//(2,1)
//====================
//(3,2)
//HINT
//Append Code
//append.c, append.cc,
