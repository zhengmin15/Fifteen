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
    // ������ iter,��һ��ָ��
    // const �����Ϊ�����޶�������v.cbegin()/v.vend()
    // �����������޸ģ����������޸�    
    for (auto iter = v.cbegin(); iter < v.cend(); iter++)
    {

        cout << *iter << ' ';
    }
    // for(auto i �� v) ����һ��ʵ�ֵĹ���һ�£�����for(auto ��ʱ���� : ����)
    // for (vector<int> :: iterator iter = v.begin(); iter < v.end(); iter++)
    //v.begin()���������ĵ�һλԪ�أ�end()��ʾ������ĩβһλ����һλԪ��
    // {
    //     // * ���������÷�
    //     (*iter)++;//��Ӧλ�õ���ֵ��1.
    //     cout << *iter << ' ';
    // }
    // ����������������C++ STL����׼ģ��⣩������
    return 0;
}