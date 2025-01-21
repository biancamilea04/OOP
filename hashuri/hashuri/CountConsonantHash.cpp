#include "CountConsonantHash.h"

CountConsonantHash::CountConsonantHash()
{
}

long long CountConsonantHash::CalculHash(const char* string)
{
    int i = 0;
    int count = 0;
    while (string[i] != NULL) {
        if (!(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')) {
            count++;
        }
        i++;
    }
    return count;
}
