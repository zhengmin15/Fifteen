#include <iostream>
#include <vector>
#include <string>

using namespace std;
// A������
class A
{
 private:
    string name;
public:
// ��������Ϊ�������������캯��
    A (string name)
    {
        this->name = name;
        cout << this->name << "�ഴ���ɹ�" << '\n';
    }
    A ()
    {
        this->name ="*";
    }
// ����ǰ����ȡ�����š�~����Ϊ������������������
     ~A ()
    {
        cout << this->name << "�����ٳɹ�" << '\n';
    }
    // ��Ա����
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