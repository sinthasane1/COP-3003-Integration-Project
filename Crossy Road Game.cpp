// Name: Sebastian Inthasane
// Course: COP 3003 - Programming II
// Instructor: Professor Scott Vanselow
// Time: Monday (4:30PM - 7:15PM)
// Project: Crossy Road Game (Integration Project)

#include <iostream>
#include <deque>

using namespace std;

class cPlayer
{
public:
    int x, y; // player's position on map
    cPlayer(int width) { x = width / 2; y = 0; } // constructor, width of map, player starts at top/middle

};

class cLane
{
private:
    deque<bool> cars; // bool used to indicate dots in lane as true (car in that position) and false (no car in that position, player can pass through)

public:
    cLane(int width)
    {
        for (int i = 0; i < width; i++) 
            cars.push_front(false); //
    }
    void Move() // shifts cars to different position in the array
    {
        if (rand() % 10 == 1)
            cars.push_front(true);
        else
            cars.push_front(false);
        cars.pop_back();
    }
    bool CheckPos(int pos) { return cars[pos]; } // Checks position and returns position of cars
};

class cGame
{
private:
    bool quit; 

public: // public so functions can be accessed
    void Draw() // draws game
    {

    }
    void Input() // handles input
    {

    }
    void Logic() // handles logic when an object collides with player
    {

    }
    void Run()
    {
        while (!quit)
        {
            Input();
            Draw();
            Logic();
        }

    }
};

int main()
{
    cLane lane1(20); // creates lane
    for (int i = 0; i < 20; i++) // prints lane
    {
        if (lane1.CheckPos(i))
            cout << "1";
        else
            cout << "0";
    }
    lane1.Move();
    cout << endl;
    for (int i = 0; i < 20; i++)
    {
        if (lane1.CheckPos(i))
            cout << "1";
        else
            cout << "0";
    }
    lane1.Move();
    lane1.Move();
    lane1.Move();
    lane1.Move();
    cout << endl;

    for (int i = 0; i < 20; i++)
    {
        if (lane1.CheckPos(i))
            cout << "1";
        else
            cout << "0";
    }

    getchar();
    return 0;
}


