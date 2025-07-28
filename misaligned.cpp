#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
using namespace std;

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    vector<string>row;
    
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            string line = to_string(i*5+j) + " | " + majorColor[i] + " | " + minorColor[i]; // BUG: should be minorColor[j]
           // std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
            cout << line << endl;
            rows.push_back(line);
        }
    }
    //return i * j;
        return rows;
}

// void testPrintColorMap() {
//     cout << "\nPrint color map test\n"; 
//     int result = printColorMap();
//     assert(result == 25);
//     std::cout << "All is well (maybe!)\n";
// }

void testPrintColorMap() {
    cout << "\nRunning strengthened color map test...\n";
    vector<string> actual = printColorMap();

    vector<string> expected = {
        "0 | White | Blue",   "1 | White | Orange", "2 | White | Green", "3 | White | Brown", "4 | White | Slate",
        "5 | Red | Blue",     "6 | Red | Orange",   "7 | Red | Green",   "8 | Red | Brown",   "9 | Red | Slate",
        "10 | Black | Blue",  "11 | Black | Orange","12 | Black | Green","13 | Black | Brown","14 | Black | Slate",
        "15 | Yellow | Blue", "16 | Yellow | Orange","17 | Yellow | Green","18 | Yellow | Brown","19 | Yellow | Slate",
        "20 | Violet | Blue", "21 | Violet | Orange","22 | Violet | Green","23 | Violet | Brown","24 | Violet | Slate"
    };

    assert(actual.size() == expected.size());  // Ensures both are 25 lines

    for (int i = 0; i < expected.size(); ++i) {
        if (actual[i] != expected[i]) {
            cout << "❌ Mismatch at index " << i << ": expected '" << expected[i]
                 << "', but got '" << actual[i] << "'" << endl;
            assert(false);  // Force failure
        }
    }

    cout << "✅ All rows match (unexpected!)\n";
}
