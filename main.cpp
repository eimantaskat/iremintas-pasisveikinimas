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
    char custom_width;

    cout << "Iveskite varda: ";
    cin >> name;

    if(name.back() == 'e' || name.back() == 'a') {
        greeting = ("Sveika, " + name + "!");
    } else {
        greeting = "Sveikas, " + name + "!";
    }

    cout << "Ar norite pasirinkti remelio ploti? (t/n): ";
    cin >> custom_width;
    if(custom_width == 't') {
        cout << "Iveskite remelio ploti: ";
        cin >> width;
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
    } else {
        cout << string(greeting.length() + 4, '*') + '\n'
            << "*" + string(greeting.length() + 2, ' ') + "*\n"
            << "* " + greeting + " *\n"
            << "*" + string(greeting.length() + 2, ' ') + "*\n"
            << string(greeting.length() +  4, '*') + '\n';
    }
}