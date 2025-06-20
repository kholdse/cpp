#include <iostream>
using namespace std;
/* Деструктор.Вызывается автоматически при выходе класса из области видимости
Его задача — «убрать за собой мусор»,
 то есть освободить ресурсы, 
 которые объект использовал,
  чтобы не засорять память.*/
class MyClass
{
    public:
    MyClass(int valueData)
    {
        data = valueData;
        cout << "\tObject\t"<< data <<"\tStarted Constructor\n";
    }
    ~MyClass()
    {
        cout <<"\tObject\t"<< data <<"\tStarted Destructor\n";
    }
    private:
    int data;

};
int main(){
    MyClass a(5);
    MyClass b(2);
    return 0;
}
