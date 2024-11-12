#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void bhaskara(float fA, float fB, float fC)
{
    float fDelta = fB*fB - 4*fA*fC;

    if (fDelta < 0)
    {
        cout << "Essa equacao nao tem raizes reais" << endl;
    }
    else if (fDelta == 0)
    {
        float fX = (-fB)/(2*fA);
        cout << "Essa equacao tem uma raiz real: " << fX << endl;
    }
    else
    {
        float fX1 = (-fB + sqrt(fDelta))/(2*fA);
        float fX2 = (-fB - sqrt(fDelta))/(2*fA);

        cout << "Essa equacao tem duas raizes reais: " << fX1 << " e " << fX2 << endl;
    }
}

int main()
{
    bhaskara(1, 41, 26);

    return 0;
}