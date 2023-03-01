#include <iostream>
using namespace std;

struct Choices
{
    string option1, option2, option3, option4;
};

int main()
{
    string questions[] = {
        "What is the oldest religion?",
        "Who invented AC current?",
        "What is the name of the largest desert?",
        "Which scientist's notes are incased in lead?",
        "Which country does not have a constitution?",
        "What is the particle with second fastest speed in the universe?",
        "Who invented dynamite?",
        "What is the main reason of loss of egyptian mummies?",
        "What is Mach 1 equivalent to?",
        "Which is the first high level language"};

    Choices ch[10];
    ch[0].option1 = "Taoism";
    ch[0].option2 = "Hinduism";
    ch[0].option3 = "Shintoism";
    ch[0].option4 = "Islam";
    ch[1].option1 = "Nicola Tesla";
    ch[1].option2 = "James Watt";
    ch[1].option3 = "Victor Frankenstien";
    ch[1].option4 = "Thomas Alba Edition";
    ch[2].option1 = "Sahara";
    ch[2].option2 = "Gobi";
    ch[2].option3 = "Antartica";
    ch[2].option4 = "Atakama";
    ch[3].option1 = "Marie Curie";
    ch[3].option2 = "Hans Gieger";
    ch[3].option3 = "Walther Muller";
    ch[3].option4 = "Reis Al Gul";
    ch[4].option1 = "Canada";
    ch[4].option2 = "Zimbabwe";
    ch[4].option3 = "Egypt";
    ch[4].option4 = "Korea";
    ch[5].option1 = "Proton";
    ch[5].option2 = "Muon";
    ch[5].option3 = "Photon";
    ch[5].option4 = "Electron";
    ch[6].option1 = "Alfred Noble";
    ch[6].option2 = "James Gun";
    ch[6].option3 = "Charles Darwin";
    ch[6].option4 = "Jeremy Dynamite";
    ch[7].option1 = "Theft";
    ch[7].option2 = "Carelessness";
    ch[7].option3 = "Canibalism";
    ch[7].option4 = "Smugling";
    ch[8].option1 = "343 m/s";
    ch[8].option2 = "521 m/s";
    ch[8].option3 = "256 m/s";
    ch[8].option4 = "434 m/s";
    ch[9].option1 = "Cobol";
    ch[9].option2 = "Basic";
    ch[9].option3 = "Fortran";
    ch[9].option4 = "Plankalkul";

    int ans[] = {2, 1, 3, 1, 1, 4, 1, 3, 1, 3};
    int cans;
    system("clear");
    cout << "Welcome to KBC" << endl;
    system("read");
    cout << "Answer all the Questions Correctly to win The Proxe Money" << endl;
    system("read");
    cout << "Even one wrong question and you will fail" << endl;
    system("read");
    cout << "Lets Begin!" << endl;
    system("read");
    for (int i = 0; i < 10; i++)
    {
        system("clear");
        cout << "Question No. " << i + 1 << endl;
        cout << questions[i] << endl;
        cout << "1. " << ch[i].option1 << endl;
        cout << "2. " << ch[i].option2 << endl;
        cout << "3. " << ch[i].option3 << endl;
        cout << "4. " << ch[i].option4 << endl;
        cout << endl;
        cout << "Enter your choice:" << endl;
        cin >> cans;
        if (cans == ans[i])
        {
            cout << "Correct!" << endl;
            cout << "Press enter to proceed!" << endl;
            system("read");
        }
        else
        {
            cout << "Incorrect!" << endl;
            cout << "Gameover!" << endl;
            system("read");
            break;
        }

        if (i == 9 && cans == ans[i])
        {
            cout << "Congratulations! You won 1 crore rupees!" << endl;
            system("read");
        }
    }
    system("clear");
    return 0;
}