#include <iostream>

using namespace std;

int main()
{
    int score;
    int count = 0;
    int passingScores = 0;
    float total = 0.0f;
    bool continueEntering = true;

    while (continueEntering)
    {
        cout << "Enter a test score (0 - 100): ";
        cin >> score;

        total += score;
        count++;

        if (score >= 70)
        {
            passingScores++;
        }

        cout << "Enter another score? (1 for true, 0 for false): ";
        cin >> continueEntering;
    }

    float average = 0.0f;

    if (count > 0)
    {
        average = total / count;
    }

    cout << "\nResults" << endl;
    cout << "-------" << endl;
    cout << "Scores Entered: " << count << endl;
    cout << "Passing Scores: " << passingScores << endl;
    cout << "Average Score: " << average << endl;

    bool classPassed = average >= 70.0f;

    cout << "Class Average Passing: " << classPassed << endl;

    return 0;
}
