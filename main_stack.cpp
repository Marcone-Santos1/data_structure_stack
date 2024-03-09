#include <iostream>
#include "stack.h"

using namespace std;

void execute(int& option, int& item, stack& stack);

int main() {
    stack stack;
    T item;

    int option;

    cout << "Stack generator: \n";

    do {

        system("timeout 5 || sleep 5");
        system("clear || cls");

        cout << "\nOptions: \n";        
        cout << "0 - stop \n";
        cout << "1 - push one element in stack \n";
        cout << "2 - pop one element of stack \n";
        cout << "3 - print stack \n";
        cout << "Enter with a option: ";
        cin >> option;

        execute(option, item, stack);

    } while (option != 0);
    

    return 0;
}

void execute(int& option, int& item, stack& stack) {
    if (option == 1) {
        cout << "Enter with a element to push in stack: ";
        cin >> item;
        stack.push(item);
        return;
    }

    if (option == 2) {
        item = stack.pop();
        
        if (item == 0) {
            return;
        }

        cout << "Poped element: " << item << endl;
        return;
    }

    if (option == 3) {
        stack.print();
        return;
    }
}