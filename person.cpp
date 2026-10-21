#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void input() {
        cout << "Enter name: ";
        getline(cin >> ws, name);

        cout << "Enter age: ";
        cin >> age;
    }

    void display() const {
        cout << "Name: " << name
             << ", Age: " << age << '\n';
    }

    static void populate(Person people[], int count) {
        for (int i = 0; i < count; i++) {
            cout << "\nPerson " << i + 1 << '\n';
            people[i].input();
        }
    }

    static void displayAll(const Person people[], int count) {
        cout << "\n--- Person Records ---\n";
        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". ";
            people[i].display();
        }
    }
};

int main() {
    const int SIZE = 100;
    Person people[SIZE];

    int count;
    cout << "How many persons (1-100)? ";
    cin >> count;

    if (count < 1 || count > SIZE) {
        cout << "Invalid number of persons.\n";
        return 1;
    }

    Person::populate(people, count);
    Person::displayAll(people, count);

    return 0;
}
