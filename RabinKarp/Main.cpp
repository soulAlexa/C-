/*! \file */
#include "rabinkarp.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
/*!
 * \brief Функция мейн 
 * \details Данная функция запускается из командной строки,переводит текстовый файл в формат string и вызывает функцию rabinkarp
 * \author Volert A.V.
 */
int main(int argc, char** args)
{
    setlocale(LC_ALL, "rus");
    
    int mod = 13;

    string search , text , str , h = args[1];

    cout << "Введите искомую строку" << endl;

    getline(cin, search);


    ifstream ff(h);
    if (!ff.is_open())
    {
        cout << h << " Файл не может быть открыт!" << endl;
    }

    while (getline(ff, str))
    {
        text = text + str;

        if (!ff.eof())
        {
            text += '\n';
        }

    }

    

    rabinkarp(search, text, mod);

    return 0;

}
