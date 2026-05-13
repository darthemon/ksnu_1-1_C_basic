#include <unistd.h>

int    strlenn(char* str) {
    int    i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

int    atoii(char* str) {
    int    i;
    int    pm;
    int    result;

    i = 0;
    pm = 1;
    result = 0;
    if (str[i] == '-') {
        i++;
        pm *= -1;
    }
    while (str[i] != '\0') {
        result *= 10;
        result += str[i] - 48;
        i++;
    }
    return(pm * result);
}

int    main(int argc, char* argv[]) {
    int    a;
    int    b;

    a = atoii(argv[1]);
    b = atoii(argv[2]);
    if (a > b)
        write(1, ">", 2);
    else if (a < b)
        write(1, "<", 2);
    else
        write(1, "==", 3);
    return(0);
}