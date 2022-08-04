#include <iostream>
#include <string>
using namespace std;
void print_nob(string input, int type)
{
    int g, a, c, t, G, A, C, T;
    g = a = c = t = G = A = C = T = 0;
    for (char base : input)
    {
        switch (base)
        {
        case 'g':
            g++;
            break;

        case 'a':
            a++;
            break;

        case 'c':
            c++;
            break;

        case 't':
            t++;
            break;

        case 'G':
            G++;
            break;

        case 'A':
            A++;
            break;

        case 'C':
            C++;
            break;

        case 'T':
            T++;
            break;

        default:
            cout << "ADN is not valid!" << endl;
            return;
        }
    }
    if (!type)
        cout << "Number of G, A, C, T (don't take upper and lower case into account) respectively is: " << g + G << " " << a + A << " " << c + C << " " << T + t << endl;
    else
        cout << "Number of g, a, c, t, G, A, C, T respectively is: " << g << " " << a << " " << c << " " << t << " " << G << " " << A << " " << C << " " << T << endl;
}

int main()
{
    cout << "Part a=======================" << endl;
    string dna = "AGTcccaaGTCAGACAATGAAtataAATCG";
    print_nob(dna, 0);

    cout << endl
         << endl
         << "Part b=======================" << endl;
    string user_input;
    cout << "Enter your ADN: ";
    getline(cin, user_input);
    print_nob(user_input, 0);

    cout << endl
         << endl
         << "Part c=======================" << endl;
    cout << "Default ADN:" << endl;
    print_nob(dna, 1);
    cout << "User ADN:" << endl;
    print_nob(user_input, 1);
}