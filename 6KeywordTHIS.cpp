#include <iostream>
using namespace std;
class Chess
/// Ключевое слово THIS. Это указатель или ссылка на текущий объект, внутри которого выполняется код.
{
    private:
    int r;
    int u;
    public:
    Chess(){
        r = 0;
        u = 0;
    }
    void SetR(int r)
    {
        this ->r  = r; 
    }
    int GetR()
    {
        return r;
    
    }
    void Print(){
        cout << "\t R=" << r << "\t U=" << u;
    }
};
int main(){
    Chess King;
    King.SetR(5);
    King.Print();
}