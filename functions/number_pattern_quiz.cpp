
#include <iostream>

using namespace std;
int main()
{
    int answers[ 3 ];
    int points=0;
    int ready;

    cout << "ready to play?? 1::yes 2::no\n";
    cin >> ready;

    if (ready == 1)
    {
        int questions[3][5] = {
            {1,3,5,7,9},
            {2,4,6,8,10},
            {10,15,20,25,30}
        };
        cout << "question 1 = 1,3,5,7,????\n ";
        cin >> answers[ 0 ];
        cout << "question 2 = 2,4,????,8,10\n";
        cin >> answers[ 1 ];
        cout << "question 3 = ????,15,20,25,30\n";
        cin >> answers[ 2 ];
        if (answers[0] == questions[0][4]) {
            cout << "correct\n";
            points += 5;
        }
        else
            cout << "wrong\n";

        if (answers[1] == questions[1][2])
        {
            cout << "corret\n";
            points += 5;
        }
        else
            cout << "wrong\n";
        if (answers[2] == questions[2][0])
        {
            cout << "correct\n";
            points += 5;
        }
        else
            cout << "wrong\n";



        cout << "congrats your points is!!!!" << points << "\n";

    }

    else
        cout << "sorry come back when you are ready\n";
    

    return 0;
}
