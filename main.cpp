#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string name;
    string greeting_line;

    cout << "Iveskite varda: ";
    cin >> name;
    
    if(name.back() == 'e' || name.back() == 'a') {
        greeting_line = "* Sveika, " + name + "! *\n";
    } else {
        greeting_line = "* Sveikas, " + name + "! *\n";
    }

    string horizontal_line = string(greeting_line.length() - 1, '*') + '\n';
    string vertical_line = "*" + string(greeting_line.length() - 3, ' ') + "*\n";
    
    cout << horizontal_line << vertical_line << greeting_line << vertical_line << horizontal_line;
}