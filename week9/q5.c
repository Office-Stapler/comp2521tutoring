#include "q5.h"

int itemCmp(Item a, Item b) {
    if (a.k == b.k) {
        if (a.j < b.j) return -1;
        if (a.j > b.j) return 1;
        return 0;
    }
    if (a.k < b.k) return -1;
    return 1;
}