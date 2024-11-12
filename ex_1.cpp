#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string Timetables[3] = {"7:30", "9:20", "11:10"};

    string Monday[3] = {"Estruturas de Dados", "Probabilidade", "Calculo Vetorial"};
    string Thusday[3] = {"Livre", "Algebra Linear Numerica", "Tecnicas e Algoritmos em Ciencia de Dados"};
    string Wednesday[3] = {"Estruturas de Dados", "Probabilidade", "Calculo Vetorial"};
    string Thursday[3] = {"Livre", "Algebra Linear Numerica", "Livre"};
    string Friday[3] = {"Livre", "Probabilidade", "Tecnicas e Algoritmos em Ciencia de Dados"};

    int GivenDay;
    int GivenTimetable;
    string newCompromise;

    cout << "Insira o dia que deseja consultar (2 para segunda, 3 para terca, e assim por diante), 0 para sair ou -1 para editar a grade: ";
    cin >> GivenDay;

    while (true)
    {
        switch (GivenDay)
        {
            case 0:
                return 0;
            case 2:
                cout << "Seus horarios de segunda sao:" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << Timetables[i] << ": " << Monday[i] << endl;
                }
                cout << "Insira um novo dia ou tecle 0 para sair: ";
                cin >> GivenDay;
                break;
            case 3:
                cout << "Seus horarios de terca sao:" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << Timetables[i] << ": " << Thusday[i] << endl;
                }
                cout << "Insira um novo dia ou tecle 0 para sair: ";
                cin >> GivenDay;
                break;
            case 4:
                cout << "Seus horarios de quarta sao:" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << Timetables[i] << ": " << Wednesday[i] << endl;
                }
                cout << "Insira um novo dia ou tecle 0 para sair: ";
                cin >> GivenDay;
                break;
            case 5:
                cout << "Seus horarios de quinta sao:" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << Timetables[i] << ": " << Thursday[i] << endl;
                }
                cout << "Insira um novo dia ou tecle 0 para sair: ";
                cin >> GivenDay;
                break;
            case 6:
                cout << "Seus horarios de sexta sao:" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << Timetables[i] << ": " << Friday[i] << endl;
                }
                cout << "Insira um novo dia ou tecle 0 para sair: ";
                cin >> GivenDay;
                break;
            case -1:
                cout << "Insira um dia para ser alterado: ";
                cin >> GivenDay;

                while (GivenDay < 2 || GivenDay > 6)
                {
                    cout << endl << "Dia invalido. Insira outro dia: ";
                    cin >> GivenDay;
                }

                cout << endl << "Insira um horario para ser alterado: ";
                cin >> GivenTimetable;

                while (GivenTimetable < 1 || GivenTimetable > 3)
                {
                    cout << endl << "Horario invalido. Insira outro horario: ";
                    cin >> GivenTimetable;
                }

                cout << endl << "Insira o novo compromisso: ";
                cin >> newCompromise;

                switch (GivenDay)
                {
                    case 2:
                        Monday[GivenTimetable - 1] = newCompromise;
                        break;
                    case 3:
                        Thusday[GivenTimetable - 1] = newCompromise;
                        break;
                    case 4:
                        Wednesday[GivenTimetable - 1] = newCompromise;
                        break;
                    case 5:
                        Thursday[GivenTimetable - 1] = newCompromise;
                        break;
                    case 6:
                        Friday[GivenTimetable - 1] = newCompromise;
                        break;
                }

            default:
                cout << "Dia invalido. Por favor, insira um dia valido ou 0 para sair: ";
                cin >> GivenDay;
        }
    }

    return 0;
}