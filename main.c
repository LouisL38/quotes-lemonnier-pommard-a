// Created by Louis on 26/03/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include "quotes.h"
#include <time.h>

int main() {
    char * quotes[MAX_QUOTES] = {
            "Programmer - An organism that turns caffeine into code",
            "Why do programmers prefer dark mode? Because light attracts bugs.",
            "If debugging is the process of removing software bugs, then programming must be the process of putting them in.",
            "I don't always test my code, but when I do, I do it in production.",
            "Why do programmers always mix up Christmas and Halloween? Because Oct 31 == Dec 25!",
            "Why did the programmer quit his job? Because he didn't get arrays.",
            "Why do programmers prefer iOS development? Because the Swift.",
            "Why do programmers prefer dogs over cats? Because dogs have fetch and cats have catch.",
            "Why do programmers hate nature? It has too many bugs.",
            "There are only 10 types of people in the world: Those who understand binary and those who don't."
    };

    srand(time(NULL));
    print_random_quote(quotes);
    return 0;
}