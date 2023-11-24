#include <iostream>

using namespace std;

int main() {
    char names[5][30];

    cout << "Enter 5 surnames:" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> names[i];
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            int k = 0;
            while (names[i][k] == names[j][k] && names[i][k] != '\0' && names[j][k] != '\0') {
                ++k;
            }
            if (names[i][k] > names[j][k]) {
                char temp[30];
                int l = 0;
                while ((temp[l] = names[i][l]) != '\0') {
                    ++l;
                }
                l = 0;
                while ((names[i][l] = names[j][l]) != '\0') {
                    ++l;
                }
                l = 0;
                while ((names[j][l] = temp[l]) != '\0') {
                    ++l;
                }
            }
        }
    }

    cout << "\nStudent surnames in acsending order:\n";
    for (int i = 0; i < 5; ++i) {
        cout << names[i] << endl;
    }

    return 0;
}