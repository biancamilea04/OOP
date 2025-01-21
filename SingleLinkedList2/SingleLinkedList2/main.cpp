#include <iostream>
#include "SingleLinkedList.h"

// Definition of print function
void print(const int& value) {
    printf("%d ", value);
}

int main() {
    // Declaration of SingleLinkedList class
    SingleLinkedList<int> s;

    // Chained addition of elements to the list
    (((s += 10) += 20) += 30);
    s.print(print);
    // Print elements of the list


    // Check if 20 is in the list
    if (s && 20) {
        printf("\n 20 is in the list !");
    }

    // Check if 25 is not in the list
    if (!(s && 25)) {
        printf("\n 25 is not in the list !");
    }


    // Pop and print elements until the list is empty
  while (s) {
    printf("\n%d", s.pop_first());
    }

    return 0;
}
