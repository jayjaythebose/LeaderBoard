#include <iostream>
#include <string>
#include <list>

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

    Team team1 = { "a", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team2 = { "b", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team3 = { "c", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team4 = { "d", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team5 = { "e", 0, 0, 0, 0, 0, 0, 0, 0 };
    list  <Team> teams = { team1, team2, team3, team4, team5 };
    for (Team& x : teams)
    {
        string nameofteam;
        cout << "Enter team name: ";
        cin >> nameofteam;

        Team team(nameofteam, 0, 0, 0, 0, 0, 0, 0, 0);
        teams.push_back(team);

        cout << "Enter wins for team " << team.teamName << ": ";
        cin >> team.W;

        cout << "Enter draws for team " << team.teamName << ": ";
        cin >> team.D;

        cout << "Enter losses for team " << team.teamName << ": ";
        cin >> team.L;

        team.MP = team.W + team.D + team.L;
        team.GF = 0;  // You can input actual values or calculate based on your requirements
        team.GA = 0;
    }

    // Find the team with the entered name and update its statistics
    for (Team x : teams)
    {



        cout << x.teamName << "\tMP: " << x.teamName << "\tW: " << x.teamName
            << "\tD: " << x.teamName << "\tL: " << x.teamName << "\tGF: " << x.teamName
            << "\tGA: " << x.teamName << "\tGD: " << x.teamName << "\tP: " << x.teamName << endl;
    }





    
}
/*
    while (!end)
    {
        for (int i = 0; i < NUM_TEAMS; i++)
        {

            cout << "Enter your team name: ";
            cin >> nameofteam;
            teams[i].teamName = nameofteam;
        }
        cout << team1.teamName;
   }     */

 
