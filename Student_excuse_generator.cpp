#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to replace {name} with actual name
string replaceName(string text, string name) {
    size_t pos = text.find("{name}");

    while (pos != string::npos) {
        text.replace(pos, 6, name);
        pos = text.find("{name}");
    }

    return text;
}

int main() {
    string name;

    // Seed random generator
    srand(time(0));

    // Excuse templates (20+)
    vector<string> excuses = {
        "{name} couldn't finish the assignment because the laptop battery died.",
        "{name} tried completing the homework, but the internet stopped working.",
        "{name} was ready to submit when the file mysteriously disappeared.",
        "{name} couldn't complete the work because the system crashed.",
        "{name} was about to finish when a sudden power cut happened.",
        "{name} couldn't type because the keyboard stopped working.",
        "{name} tried to work, but the Wi-Fi vanished suddenly.",
        "{name} couldn't submit because the file got corrupted.",
        "{name} was working when the computer froze unexpectedly.",
        "{name} couldn't finish because the laptop started updating.",
        "{name} accidentally deleted the assignment file.",
        "{name} was about to submit when the system restarted.",
        "{name} couldn't finish due to a sudden software error.",
        "{name} tried to complete the work but forgot to save the file.",
        "{name} couldn't access the assignment due to login issues.",
        "{name} lost progress because the app suddenly closed.",
        "{name} couldn't complete because of a virus in the system.",
        "{name} tried to finish, but the screen went blank.",
        "{name} couldn't complete because the mouse stopped working.",
        "{name} was about to finish when the battery drained instantly."
    };

    while (true) {
        cout << "\nEnter student name (or X to exit): ";
        getline(cin, name);

        // Exit condition
        if (name == "X" || name == "x") {
            cout << "\nProgram exited. Thank you!\n";
            break;
        }

        // Generate random excuse
        int randomIndex = rand() % excuses.size();
        string finalExcuse = replaceName(excuses[randomIndex], name);

        // Display result
        cout << "\nGenerated Excuse:\n";
        cout << finalExcuse << endl;
    }

    return 0;
}
