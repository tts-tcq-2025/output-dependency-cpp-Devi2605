#include <iostream>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

// void testTshirtSize() {
//     std::cout << "\nTshirt size test\n";
//     assert(size(37) == 'S');
//     assert(size(40) == 'M');
//     assert(size(43) == 'L');
//     std::cout << "All is well (maybe!)\n";
// }

void testTshirtSize() {
    std::cout << "\nTshirt size test\n";

    assert(size(37) == 'S');  // Passes
    assert(size(40) == 'M');  // Passes
    assert(size(43) == 'L');  // Passes

    // These will fail because the function returns '\0'
    assert(size(38) == 'S');  // FAILS: 38 is not < 38 or > 38
    assert(size(42) == 'M');  // FAILS: 42 is not > 42 or < 42

    std::cout << ""All is well (maybe!)\n");
}

