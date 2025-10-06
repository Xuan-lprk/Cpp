// 函数重载

// 通过参数个数或类型的不同来实现同名函数的不同版本
int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

add(1, 2);      // 调用第一个add，返回3
add(1, 2, 3);   // 调用第二个add，返回6



// 引用

// 引用是某个变量的别名，使用&符号定义
int x = 10;
int& ref = x; // ref是x的引用
ref = 20;     // 修改ref也会修改x
// 现在x的值是20

// 引用必须在定义时初始化，且不能改变引用的对象
// 一个变量可以有多个引用

// 引用返回
int& getRef(int& a) {
    return a; // 返回a的引用
}
// 可以通过返回的引用修改原变量

// 有些函数不可以使用引用返回
// 例如返回局部变量的引用是错误的
int a = 10;
int b = 30;
int& wrongRef(int a, int b) {
    int c = a + b;
    return c; // 错误，c是局部变量，函数返回后c就不存在了
}


// 引用不可放大权限
// 不能将一个const引用绑定到一个非const变量上
const int& constRef = x; // 正确，const引用可以绑定到非const
int& nonConstRef = constRef; // 错误，不能将const引用赋给非const引用

