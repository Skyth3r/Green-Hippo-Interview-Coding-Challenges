#include <iostream>
using namespace std;

bool isFound(char table[][10] , string string1);

int main() {
    /*
    Create a function that takes two parameters; a string and a
    2D array of chars, that searches for words vertically and horizontally.
    This fucntion is in complete and currently can only search the first row for words
    */

    // The word being searched
    string word = "def";

    char table [][10]  =
    {
        {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'g'},
        {'n', 'h', 'd', 's', 's', 'd', 'f', 'o', 's', 's'},
        {'d', 'f', 'f', 'c', 'x', 'f', 'g', 'z', 'd', 's'},
        {'k', 's', 'x', 'v', 'v', 'b', 'r', 'j', 'v', 'c'},
        {'w', 'q', 'g', 'h', 'b', 'f', 'e', 'f', 'b', 'v'},
        {'j', 'a', 'j', 'n', 'n', 'n', 'e', 'b', 'v', 'v'},
        {'y', 'g', 'j', 'h', 'i', 'p', 'p', 'o', 'c', 'x'},
        {'r', 'h', 'v', 'r', 'e', 'n', 'g', 'j', 's', 'x'},
        {'w', 'j', 'o', 'w', 'c', 'f', 'g', 'f', 'c', 'a'},
        {'g', 'h', 'k', 's', 'n', 'w', 'g', 'i', 'h', 'g'}
    };

    // cout<<"Hello"<<endl;
    isFound(table, word);

    return 0;
}

    bool isFound(char table[][10], string word){
        int count = 0;
        string check;

        for (int y = 0; y<10; y++){
            // Searching rows
            for (int x = 0; x<10; x++){
                // Finding first character

                //cout << table[y][x];
                if (word[count] == table[y][x]){
                    // Print the word found
                    check += table[y][x];
                    count++;
                    cout << table[y][x];
                } else {
                    count = 0;
                }
            }
            cout<<endl;
            // Check if word is found
            if (word == check){
            cout << "true" << endl;
            return true;
            } else {
            cout << "false" << endl;
            return false;
            }

            // Make string null when going to next row
            // check[count] = '\0';
        }
    }
