// inline 内联函数
#include <iostream>
using namespace std;
// inline关键字可以定义内联函数
inline int Add(int a, int b)
{
    return a + b;
}
// 内联函数的函数体会被直接插入到调用处，避免了函数调用的开销
// 适合比较短小的函数，过大的函数不适合
// inline只是一个建议，编译器可以选择忽略
// 内联函数声明和定义通常放在同一个头文件中，不建议分离

// 建议长函数声明和定义分离，短函数可以在.h文件中定义为inline



// 访问限定符

// C++中有三种访问限定符：public、protected、private
class Person
{
public:
    string m_Name; // 公有成员，类外可访问
protected:
    int m_Age;     // 保护成员，类内和子类可访问
private:
    float m_Height; // 私有成员，类内可访问
};
// 最后的限定符作用到};结束



// 对于空类或者没有成员的类，其大小最少是1字节，进行占位


