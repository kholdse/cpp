#include <iostream>
#include <string>
using namespace std;
///Метод(Функция) класса
class Human
{
public:

    int age;
    int weight;
    string name;
    void Print()
    {
        cout << "Имя" << name << "\tВес" << weight << "\tВозраст" << age;
    }

private:
};
int main()
{
    setlocale(LC_ALL, "ru");
    Human firstHuman;
    firstHuman.age = 15;
    firstHuman.name = "Sanyok";
    firstHuman.weight = 60;
    firstHuman.Print();
        Human secondHuman;
    secondHuman.age = 12;
    secondHuman.name = "Masha";
    secondHuman.weight = 30;
    secondHuman.Print();

}