#include <iostream>
#include <string>
using namespace std;
/*
    Что такое класс
    Что такое обьект
*/
class Human
{
public:
    int age;
    string name;
private:
};

/*
int main()
{   
    Human Roman;
    Roman.age = 20;
    Roman.name = "Kharitonoff Roman";
    Human Vasya;
    Vasya.age = 18;
    Vasya.name = "Vasiliy Shuyski";
    cout << Roman.age;
    cout << Roman.name;
    cout << Vasya.age;
    cout << Vasya.name;
}
    */
class Point
{
    public:
    int x;
    int y;
    int z;
};
int main()
{
    Point a;
    a.x = 1;
    a.y = 2;
    a.z = 3;
}