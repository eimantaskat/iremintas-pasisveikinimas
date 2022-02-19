#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string name;
    cout << "Iveskite varda: ";
    cin >> name;

    string horizontal_line = string(14 + name.length(), '*') + '\n';
    string vertical_line = "*" + string(12 + name.length(), ' ') + "*\n";
    string greeting_line = "* Sveikas, " + name + "! *\n";
    
    cout << horizontal_line << vertical_line << greeting_line << vertical_line << horizontal_line;
}