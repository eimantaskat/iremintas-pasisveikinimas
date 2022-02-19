#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string name;
    string framed_greeting;
    string greeting;
    int width;

    cout << "Iveskite varda: ";
    cin >> name;
    cout << "Iveskite remelio ploti: ";
    cin >> width;
    
    if(name.back() == 'e' || name.back() == 'a') {
        greeting = ("Sveika, " + name + "!");
    } else {
        greeting = "Sveikas, " + name + "!";
    }

    try {
        string greeting_line = "*" + string((width - 2 - greeting.length()) / 2, ' ') + greeting;
        greeting_line += string(width - greeting_line.length() - 1, ' ') + "*\n";

        cout << string(greeting_line.length() - 1, '*') + '\n'
        << "*" + string(greeting_line.length() - 3, ' ') + "*\n"
        << greeting_line
        << "*" + string(greeting_line.length() - 3, ' ') + "*\n"
        << string(greeting_line.length() - 1, '*') + '\n';
    } catch (std::bad_alloc) {
        cout << "Pasisveikinimas netelpa i remeli";
        return 1;
    }
}