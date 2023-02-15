//
// Created by rituparn on 15.02.23.
//
#include <stdbool.h>

bool IsIsogram(char *str) {
    char cache[26] = {0};
    for (int i = 0; str[i] != 0; ++i) {
        char c = tolower(str[i]) - 'a';
        if (cache[c]) return false;
        cache[c] = 1;
    }
    return str[0] == 0 || true;
}

/*
 * kinda like mine solution just that it's more elegantly applied
 */