#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

// Function to replace {name} with actual user name
string replaceName(string roast, string name) {
    size_t position = roast.find("{name}");

    while (position != string::npos) {
        roast.replace(position, 6, name);
        position = roast.find("{name}");
    }

    return roast;
}

int main() {
    // Roast templates
    vector<string> roastTemplates = {
        "{name}'s code runs so slowly that even dial-up internet feels fast.",
        "If procrastination were an Olympic sport, {name} would already have a gold medal.",
        "{name}'s debugging style is basically staring at the screen until the bug gets embarrassed and leaves.",
        "{name} writes code so messy that even spaghetti gets jealous.",
        "If laziness had a brand ambassador, it would definitely be {name}.",
        "{name} doesn't fix bugs, they just rename them as features.",
        "{name}'s typing speed is so slow that turtles are taking notes.",
        "{name}'s logic is like old software, confusing and outdated.",
        "{name} treats deadlines like optional suggestions.",
        "{name}'s code has more errors than a broken calculator.",
        "{name} debugs by restarting the computer and hoping for the best.",
        "{name}'s programs crash more often than a beginner driver.",
        "{name} writes comments like they are optional mysteries.",
        "{name}'s code formatting is a crime scene.",
        "{name} thinks copy-paste is a development strategy.",
        "{name}'s logic disappears exactly when needed the most.",
        "{name} makes bugs feel at home in their code.",
        "{name}'s code review would need a therapist.",
        "{name} treats warnings like decorations.",
        "{name}'s code compiles only out of sympathy.",
        "{name} turns simple problems into full projects.",
        "{name}'s solutions create more problems than they solve.",
        "{name} writes loops that never want to end.",
        "{name}'s variable names tell no story at all.",
        "{name} debugs like guessing answers in exams.",
        "{name}'s code structure looks like a maze with no exit.",
        "{name} forgets semicolons like it's a hobby.",
        "{name}'s logic runs away at runtime.",
        "{name} writes functions no one dares to touch.",
        "{name}'s code works only in imagination."
    };

    // Random generator setup
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, roastTemplates.size() - 1);

    string name;

    while (true) {
        cout << "Enter your name (or press x to exit): ";
        getline(cin, name);

        // Exit condition
        if (name == "x" || name == "X") {
            cout << "Exiting program." << endl;
            break;
        }

        // Check for empty input
        if (name.empty()) {
            cout << "Error: Name cannot be empty." << endl;
            continue;
        }

        int randomIndex = dist(gen);
        string finalRoast = replaceName(roastTemplates[randomIndex], name);

        cout << endl;
        cout << "Your Roast Message:" << endl;
        cout << finalRoast << endl << endl;
    }

    return 0;
}
