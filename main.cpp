#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //"1-100 ertekek duplazasa"
    for (int i = 0;) //rossz ciklusfeltetel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //rossz ciklusfeltetel
    {
        std::cout << "Ertek:" // ; endl
    }    
    std::cout << "Atlag szamitasa: " << std::endl; 
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)   // , kell ; helyett
    {
        atlag += b[i] //pontosvesszo hianyzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
