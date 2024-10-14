#include <iostream>
#include <conio.h>   // For _getch() to capture user input
#include <cstdlib>
#include <ctime>
d
using namespace std;

// Game dimensions
const int width = 20;
const int height = 10;
int playerX, playerY, bonusX, bonusY, score;

// Function to initialize the game
void setup() {
    // Starting position of player in the center of the grid
    playerX = width / 2;
    playerY = height / 2;

    // Randomly place the bonus item
    srand(time(0));
    bonusX = rand() % width;
    bonusY = rand() % height;

    score = 0;
}

// Function to draw the game on the console
void draw() {
    system("cls");  // Clear the screen

    // Draw the top border
    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    // Draw the grid with player and bonus
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (x == 0) cout << "#"; // Left border

            if (x == playerX && y == playerY)
                cout << "P";  // Player
            else if (x == bonusX && y == bonusY)
                cout << "B";  // Bonus
            else
                cout << " ";  // Empty space

            if (x == width - 1) cout << "#"; // Right border
        }
        cout << endl;
    }

    // Draw the bottom border
    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    // Display the score
    cout << "Score: " << score << endl;
}

// Function to handle player movement and input
void input() {
    if (_kbhit()) {  // Check if a key is pressed
        switch (_getch()) {  // Get the pressed key
            case 'w': playerY--; break;  // Move up
            case 's': playerY++; break;  // Move down
            case 'a': playerX--; break;  // Move left
            case 'd': playerX++; break;  // Move right
            case 'q': exit(0);           // Quit the game
        }
    }
}

// Function to update the game logic
void logic() {
    // Check if player has collected the bonus
    if (playerX == bonusX && playerY == bonusY) {
        score++;

        // Respawn bonus at a new random position
        bonusX = rand() % width;
        bonusY = rand() % height;
    }

    // Boundary conditions to keep player within the grid
    if (playerX < 0) playerX = 0;
    if (playerX >= width) playerX = width - 1;
    if (playerY < 0) playerY = 0;
    if (playerY >= height) playerY = height - 1;
}

int main() {
    setup();  // Initialize the game

    // Main game loop
    while (true) {
        draw();   // Draw the game
        input();  // Handle input
        logic();  // Update game logic
    }

    return 0;
}

  