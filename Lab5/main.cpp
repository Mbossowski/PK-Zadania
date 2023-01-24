#include <iostream>

using namespace std;

class wyjatek : std::exception
{
};

void zadanie1(int inp)
{
    if((inp%2==0)&&(inp%3==0)&&!(inp%5==0))
    {
        throw wyjatek();
    }
}



int main()
{
    int input1;

    cout << "Zadanie 1" << endl;
    cout << "Podaj liczbe: ";
    cin >> input1;
    try
    {
        zadanie1(input1);
    }
    catch(wyjatek)
    {
        std::cout << "Liczba jest podzielna przez 2 i 3 ale nie przez 5";
    }

}

