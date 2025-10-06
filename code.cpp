

// namespace 命名域

// namespace关键字可以定义一个命名域
namespace HelloWorld
{
    int Hworld = 320;
    int HelloWorldFunc() // namespace里面可以定义变量、函数和类型等
    {
        return 0;
    }
}

// 不同的命名域可以有相同的变量名


// :: 域作用限定符

// 在变量前加上命名域名可以解决同名问题，
int value = HelloWorld::Hworld; // value = 320，即HelloWorld域里的Hworld
// ::默认是使用全局变量
while true