
#include <iostream>
#include "Zmienna.h"

int main()
{
  
    Zmienna<int> VarI;
    Zmienna<double> VarD;
    Zmienna<std::string> VarS;
  
    VarI.Display();
    VarD.Display();
    VarS.Display();
}
