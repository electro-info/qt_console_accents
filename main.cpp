#include <QCoreApplication>
#include <iostream>     // Pour cout
#include <Windows.h>    // Pour GetConsoleOutputCP et SetConsoleOutputCP

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    uint temp = GetConsoleOutputCP();   // Sauvegarde du réglage par défaut
    SetConsoleOutputCP(CP_UTF8);        // Modification du réglage

    std::cout << "La journée s'annonce ensoleillée !";

    SetConsoleOutputCP(temp);   // Restauration du réglage par défaut

    return a.exec();
}
