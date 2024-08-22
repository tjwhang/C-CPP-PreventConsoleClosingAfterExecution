#include <iostream>
#include <cstdio> // <stdio.h> in C

using namespace std;

void portable_system_pause() {
    cout << "Press return to continue . . .";
    getchar();
}

int main() {
    cout << "This is a simple \"prevent closing terminal window after exe execution finishes\" implementation. "
         << "\n\nHello, World!" << endl;

    portable_system_pause();
    // In Windows, use system("pause") which is better imo but it is good to make your program portable
    return 0;
}
