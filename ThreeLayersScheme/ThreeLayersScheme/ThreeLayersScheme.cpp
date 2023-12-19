#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string username, password;

    ifstream userFile("Data/Username.txt");
    if (userFile.is_open())
    {
        getline(userFile, username);
        userFile.close();
    }

    ifstream passFile("Data/Password.txt");
    if (passFile.is_open())
    {
        getline(passFile, password);
        passFile.close();
    }

    string User, Pass;
    cout << "Username: ";
    getline(cin, User);
    cout << "Password: ";
    getline(cin, Pass);

    if (User == username && Pass == password)
    {
        cout << "Login Successful!!";
    }
    else if (User == username && Pass != password) {
        cout << "Invalid Password!";
    }
    else if (User != username && Pass == password) {
        cout << "Invalid Username!";
    }
    else {
        cout << "Invalid content!";
    }
}
