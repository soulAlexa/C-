/*! \file */
#include "rabinkarp.h"
#include <string>                                  
#include <iostream>
using namespace std;

/*!
 *  
 * \param[in] search строка которую мы будем искать в тексте
 * \param[in] text текст в котором мы будем искать строку
 * \param[in] mod простое число которое используется в функции как модуль для упрощения вычислений
 * \return Данная функция ничего не возвращает
 * \details Функция выводит на экран позицию в тексте в которых найдена строка
 */
void rabinkarp(string& search, string& text, int mod) {
    int number_character_line = search.length();
    int number_character_text = text.length();
    int number_char_alphabet = 256;
    int hash_string = 0;
    int hash_text = 0;
    int h = 1;
    int i = 0,j = 0;
    

    for (i = 0; i < number_character_line - 1; i++)
    {
        h = (h * number_char_alphabet) % mod;
    }
    
    for (i = 0; i < number_character_line; i++)
    {
        hash_string = (number_char_alphabet * hash_string + search[i]) % mod;
        hash_text = (number_char_alphabet * hash_text + text[i]) % mod;
    }

    
    for (i = 0; i <= number_character_text - number_character_line; i++)
    {
        if (hash_string == hash_text)
        {
            for (j = 0; j < number_character_line; j++)
            {
                if (text[i + j] != search[j])
                    break;
            }

            if (j == number_character_line)
            {
             
                cout << "Строка найдена на позиции " << i + 1 << endl;
            }
        }
            if (i < number_character_text - number_character_line)
            {
                hash_text = (number_char_alphabet * (hash_text - text[i] * h) + text[i + number_character_line]) % mod;

                if (hash_text < 0)
                {
                    hash_text = (hash_text + mod);
                }
            }
        
    }
}


