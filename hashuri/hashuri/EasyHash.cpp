#include "EasyHash.h"

EasyHash::EasyHash()
{
}

long long EasyHash::CalculHash(const char* string)
{
    int i = 0;
    int count = 0;
    while (string[i] != NULL) {
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')) {
            {
                if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
                    count += string[i] * 10;
                }
                else {
                    count += string[i] * 11;
                }

            }
        }
        else {
            count += string[i] * 12;
        }
        i++;
    }
    return count;
}
