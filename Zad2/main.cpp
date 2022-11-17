
#include <iostream>
#include "Zmienna.cpp"

int main()
{
  
    Zmienna<int> VarI;
    Zmienna<double> VarD;
    Zmienna<std::string> VarS;
  
    VarI.Input(3);
    VarD.Input(4.5);
    VarS.Input("Lorem ipsum");
  
    VarI.Display();
    VarD.Display();
    VarS.Display();
}
