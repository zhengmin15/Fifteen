#include <iostream>
#include <vector>

using namespace std;
using vi = vector<int>;

int main(int argc, char const *argv[])
{
    vector<int> v;

    for (int i=0; i < 10; i++)
    {
        v.push_back(i + 1);
    }
    // 迭代器 iter,是一个指针
    // const 简单理解为常量限定，例如v.cbegin()/v.vend()
    // 常量不允许被修改，变量允许被修改    
    for (auto iter = v.cbegin(); iter < v.cend(); iter++)
    {

        cout << *iter << ' ';
    }
    // for(auto i ： v) 与下一行实现的功能一致，代表for(auto 临时变量 : 容器)
    // for (vector<int> :: iterator iter = v.begin(); iter < v.end(); iter++)
    //v.begin()代表容器的第一位元素；end()表示容器的末尾一位的下一位元素
    // {
    //     // * 叫做解引用符
    //     (*iter)++;//对应位置的数值加1.
    //     cout << *iter << ' ';
    // }
    // 迭代器是用来访问C++ STL（标准模板库）的容器
    return 0;
}