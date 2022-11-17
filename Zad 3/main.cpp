#include <iostream>
#include "Kolejka.cpp"
int main()
{
    int NoI = 3;
    int NoS = 5;
    Kolejka<int> QueueI;
    Kolejka<std::string> QueueS;
    int InI;
    std::string InS;

    std::cout << "Podaj " << NoI << " cyfry" << std::endl;
    for(int o=0;o<NoI;o++)
    {
        std::cin >> InI;
        QueueI.wloz(InI);
    }

    std::cout << std::endl;

    std::cout << "Podaj " << NoS << " slow" << std::endl;
    for(int p=0;p<NoS;p++)
    {
        std::cin >> InS;
        QueueS.wloz(InS);
    }

    std::cout << std::endl;
    QueueI.drukuj();

    std::cout << std::endl;
    QueueS.drukuj();
}
