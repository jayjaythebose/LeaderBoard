#include <iostream>
#include <string>

using namespace std;

const int NUM_TEAMS = 3;

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
    Team(string teamName, int MP , int W, int D, int L, int GF, int GA, int GD, int P)
    {
        this->teamName = teamName;
        this->MP = MP;
        this->W = W;
        this->D = D;
        this->L = L;
        this->GF = GF;
        this->GA = GA;
        this->GD = GD;
        this->P = P;
    }
};

int main()
{

    // Initialize teams with default values
   

    string nameofteam;
    bool end = false;

    Team team1 = { "", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team2 = { "", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team3 = { "", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team4 = { "", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team5 = { "", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team teams[5] = {team1, team2, team3, team4, team5};

    while (!end)
    {
        for (int i = 0; i < NUM_TEAMS; i++) 
        {

            cout << "Enter your team name: ";
            cin >> nameofteam;
            teams[i].teamName = nameofteam;
        }
        cout << team1.teamName;

            // Find the team with the entered name and update its statistics
            for (int j = 0; j < NUM_TEAMS; ++j)
            {



        cout << teams[j].teamName << "\tMP: " << teams[j].MP << "\tW: " << teams[j].W
                            << "\tD: " << teams[j].D << "\tL: " << teams[j].L << "\tGF: " << teams[j].GF
                            << "\tGA: " << teams[j].GA << "\tGD: " << teams[j].GD << "\tP: " << teams[j].P << endl;
            }
        
    }

    return 0;
}
