#include <iostream>
#include <vector>
#include <string>

using namespace std;
// A是类名
class A
{
 private:
    string name;
public:
// 以类名作为函数名——构造函数
    A (string name)
    {
        this->name = name;
        cout << this->name << "类创建成功" << '\n';
    }
    A ()
    {
        this->name ="*";
    }
// 类名前加上取反符号“~”作为函数名——析构函数
     ~A ()
    {
        cout << this->name << "类销毁成功" << '\n';
    }
    // 成员函数
    void Display()
    {
        std::cout << name << '\n';
    }
};


int main(int argc, char const *argv[])
{
    // A a("12345");
    // A b("666");
    // a.Display();
    // b.Display();
    A c;
    c.Display();
    
    return 0;
}