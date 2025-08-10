#define maxItems 26
#include <iostream>
#include <string>
#include "lista.hpp"
using namespace std;
int main() {
    Lista<char> lista;
    try {
        for (char i = 'a'; i <= 'z'; i++) {
            lista.addItem(i); // Adding characters 'a' to 'z'
        }
        cout << "Items added successfully." << endl;

        for (int i = 0; i < 26; i++) {
            cout << "Item at index " << i << ": " << lista.getItem(i) << endl;
        }

        cout << "Searching for item 'e': " << lista.searchItem('z') << endl;


    } catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}