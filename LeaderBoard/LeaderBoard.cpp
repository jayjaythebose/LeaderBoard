#include <iostream>
#include <string>
#include <list>

using namespace std;
const int NUM_TEAMS = 3;
bool ende = false;
int choice;
int teamMatch1;
int teamMatch2;
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
    Team(string teamName, int MP, int W, int D, int L, int GF, int GA, int GD, int P)
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

// Function to add a match result
void addMatchResult(list<Team>& teams) 
{
    // Implements  logic for adding match result here
    cout << "pick the 1st team  to change MatchResult" << endl;
    cin >> teamMatch1;
    cout << "pick the 2st team  to change MatchResult" << endl;
    cin >> teamMatch2;
    cout << teamMatch1 + '\n' + teamMatch2;
}

// Function to add a team
void addTeam(list<Team>& teams) 
{
    string addateam;
    // Implements  logic for adding a team here
    cout << "Adding a team..." << endl;
    cin >> addateam;
    Team team6 = { addateam, 0, 0, 0, 0, 0, 0, 0, 0 };
    teams.push_back(team6);
}

// Function to delete a team
void deleteTeam(list<Team>& teams) 
{
    string removeateam;
    // Implements logic for deleting a team here
    cout << "Input your team to remove";
    cin >> removeateam;
    cout << "removing team..." << endl;
    //teams.remove(teams.removeateam);

}

// Function to display leaderboard
void displayLeaderboard(list<Team>& teams) 
{
    for (Team x : teams)
    {
     // Implements logic for displaying leaderboard 
     cout << "Displaying Leaderboard..." << endl;
     cout << x.teamName << "\tMP: " << x.teamName << "\tW: " << x.teamName
        << "\tD: " << x.teamName << "\tL: " << x.teamName << "\tGF: " << x.teamName
        << "\tGA: " << x.teamName << "\tGD: " << x.teamName << "\tP: " << x.teamName << endl;
    }
}

int main()
{
    string nameofteam;

    Team team1 = { "a", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team2 = { "b", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team3 = { "c", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team4 = { "d", 0, 0, 0, 0, 0, 0, 0, 0 };
    Team team5 = { "e", 0, 0, 0, 0, 0, 0, 0, 0 };
    list<Team> teams = { team1, team2, team3, team4, team5 };

    for (Team& x : teams)
    {
        cout << "Enter team name: ";
        cin >> x.teamName;

        cout << "Enter wins for team " << x.teamName << ": ";
        cin >> x.W;
        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Wins cannot be negative. Please enter a non-negative value: ";
            cin >> x.W;
        }

        cout << "Enter draws for team " << x.teamName << ": ";
        cin >> x.D;
        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Enter draws for team " << x.teamName << ": ";
            cin >> x.D;
        }

        
        cout << "Enter losses for team " << x.teamName << ": ";
        cin >> x.L;
        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Enter losses for team " << x.teamName << ": ";
            cin >> x.L;
        }
        x.MP = x.W + x.D + x.L;
        x.GF = 0;  //  inputs actual values or calculate based on requirements
        x.GA = 0;
    }

    while (!ende)
    {
        cout << "Input 1 to Add a Match result" << endl;
        cout << "Input 2 to add a team" << endl;
        cout << "Input 3 to Delete a team" << endl;
        cout << "Input 4 to Display LeaderBoard teams" << endl;
        cout << "Input 5 to exit" << endl;
        cin >> choice;

       switch (choice)
       {
        case 1:
            addMatchResult(teams);
            break;
        case 2:
            addTeam(teams);
            break;
        case 3:
            deleteTeam(teams);
            break;
        case 4:
            displayLeaderboard(teams);
            break;
        case 5:
            ende = true;
            break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 5." << endl;
            break;
       }
    }

    return 0;
}
