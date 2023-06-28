#include "head.h"

using namespace std;


void highl_op(const string& output) {
    
    string highlightedOutput = output;
    string::size_type pos = 0;

    while ((pos = highlightedOutput.find(".txt", pos)) != pos) {
        highlightedOutput.insert(pos, "\033[1;31m");  
        highlightedOutput.insert(pos + 5, "\033[0m");
        pos += 12;  
    }

    cout << highlightedOutput << endl;
}
