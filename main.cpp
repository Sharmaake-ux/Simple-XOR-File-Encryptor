#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool processFile(const string& inputFile, const string& outputFile, char key) {
    ifstream inFile(inputFile, ios::binary);
    ofstream outFile(outputFile, ios::binary);

    if (!inFile) {
        cerr << "Error: Cannot open input file." << endl;
        return false;
    }
    if (!outFile) {
        cerr << "Error: Cannot open output file." << endl;
        return false;
    }

    char byte;
    while (inFile.get(byte)) {
        byte ^= key; // XOR operation
        outFile.put(byte);
    }

    inFile.close();
    outFile.close();
    return true;
}

int main() {
    string inFile, outFile;
    char key;

    cout << "--- XOR File Encryptor / Decryptor ---" << endl;
    cout << "Enter input filename: ";
    cin >> inFile;
    cout << "Enter output filename: ";
    cin >> outFile;
    cout << "Enter a single character key: ";
    cin >> key;

    if (processFile(inFile, outFile, key)) {
        cout << "Operation completed successfully!" << endl;
    } else {
        cout << "Operation failed." << endl;
    }

    return 0;
}
