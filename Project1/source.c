#include    <stdio.h>
#include	<io.h>
#include    "luke.h"

int main(void) {

    TwoF();
    _write(1, "======= TwoF done =======\n\n", 30);
    TwoS();
    _write(1, "======= TwoS done =======\n\n", 30);
    TwoM();
    _write(1, "======= TwoM done =======\n\n", 30);
    TwoD();
    _write(1, "======= TwoD done =======\n\n", 30);
    return(0);
}