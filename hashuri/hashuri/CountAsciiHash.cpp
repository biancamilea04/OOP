#include "CountAsciiHash.h"

CountAsciiHash::CountAsciiHash()
{
}

long long CountAsciiHash::CalculHash(const char* string)
{
    int i = 0;
    int count = 0;
    while (string[i] != NULL) {
        count += string[i];
        i++;
    }

    return count;
}
