#include <iostream>
#include <string>

using namespace std;

const int NUM_TEAMS = 12;

class Team
{
public:
    string teamName;
    int MP;
    int W;
    int D;
    int L;
    int GF;
    int GA;
    int GD;
    int P;

    // Constructor to initialize member variables
    Team() : MP(0), W(0), D(0), L(0), GF(0), GA(0), GD(0), P(0) {}
};

int main()
{
    Team Teams[NUM_TEAMS];

    // Initialize teams with default values
    for (int i = 0; i < NUM_TEAMS; ++i)
    {
        Teams[i].teamName = "Team" + to_string(i + 1);
        Teams[i].MP = Teams[i].W = Teams[i].D = Teams[i].L = 0;
        Teams[i].GF = Teams[i].GA = Teams[i].GD = Teams[i].P = 0;
    }

    string nameofteam;
    bool end = false;

    while (!end)
    {
        cout << "Enter your Team (or type 'end' to finish): ";
        cin >> nameofteam;

        if (nameofteam == "end")
        {
            end = true;
        }
        else
        {
            // Find the team with the entered name and update its statistics
            for (int i = 0; i < NUM_TEAMS; ++i)
            {
                if (Teams[i].teamName == nameofteam)
                {
                    // Add logic to update other statistics as needed
                    // ...

                    // Output the updated leaderboard
                    cout << "Leaderboard:\n";
                    for (int j = 0; j < NUM_TEAMS; ++j)
                    {
                        cout << Teams[j].teamName << "\tMP: " << Teams[j].MP << "\tW: " << Teams[j].W
                            << "\tD: " << Teams[j].D << "\tL: " << Teams[j].L << "\tGF: " << Teams[j].GF
                            << "\tGA: " << Teams[j].GA << "\tGD: " << Teams[j].GD << "\tP: " << Teams[j].P << endl;
                    }

                    break;  // Exit the loop once the team is found and updated
                }
            }
        }
    }

    return 0;
}
