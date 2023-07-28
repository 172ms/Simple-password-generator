#include <iostream>
#include <random>
#include <string>

using namespace std;

string generatePssword(int length) {
    char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+{}[];:<>,.?/";
    int size = sizeof(characters) - 1;
    string password;
    
    for (int i = 0; i < length; i++) {
        password += characters[rand() % size];
    }
    
    return password;
}

int main() {
    int lengthPassword;
    
    cout << "Hello user, this is a lightweight program that generates a password. (MIN LENGTH = 6, MAX LENGTH = 32)" << endl;
    cout << "Enter the length of the password: ";
    cin >> lengthPassword;
    
    if (cin.fail() || lengthPassword < 6 || lengthPassword > 32) {
        cout << "[!] Invalid password length!" << endl;
        return 0;
    }
    
    string password = generatePssword(lengthPassword);
    cout << "Your password is: " << password << endl;
    return 0;
}
