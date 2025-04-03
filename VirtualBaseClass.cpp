#include <iostream>
using namespace std;

class Person // Base class for Academic and Sports performance
{
protected:
    int id;

public:
    void setID(int identifier)
    {
        id = identifier;
    }
    void displayID()
    {
        cout << "Student ID: " << id << endl;
    }
};

// Base class for Academic Performance
class Academic : virtual public Person
{
protected:
    double mathScore, scienceScore;

public:
    void setScores(double math, double science)
    {
        mathScore = math;
        scienceScore = science;
    }
    void displayScores()
    {
        cout << "Math Score: " << mathScore << endl;
        cout << "Science Score: " << scienceScore << endl;
    }
};

// Base class for Sports Performance
class Sports : virtual public Person
{
protected:
    double sportsScore;

public:
    void setSportsScore(double score)
    {
        sportsScore = score;
    }
    void displaySportsScore()
    {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class OverallPerformance : public Academic, public Sports // Inherited from Academic and Sports
{
public:
    void displayPerformance()
    {
        displayID();
        displayScores();
        cout << "Total Academic Marks: " << mathScore + scienceScore << endl;
        displaySportsScore();
        cout << "Total Performance Score: " << mathScore + scienceScore + sportsScore << endl;
    }
};

int main()
{
    OverallPerformance student;
    int identifier;
    double math, science, sports;
    cout << "Enter student ID, math and science scores, and sports score: ";
    cin >> identifier >> math >> science >> sports;
    
    student.setID(identifier);
    student.setScores(math, science);
    student.setSportsScore(sports);
    student.displayPerformance();

    return 0;
}
