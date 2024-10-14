#include <iostream>
#include <conio.h>   // For _getch() to capture user input
#include <cstdlib>
#include <ctime>

using namespace std;

// Game dimensions
const int width = 20;
const int height = 10;
int playerX, playerY, bonusX, bonusY, score;
int enemy1X, enemy1Y, enemy2X, enemy2Y, enemy3X, enemy3Y;
int enemy1Dir = 1, enemy2Dir = 1, enemy3DirX = 1, enemy3DirY = 1; // Direction variables

// Function to initialize the game
void setup() {
    // Player starts at the center of the grid
    playerX = width / 2;
    playerY = height / 2;

    // Randomly place the bonus item
    srand(time(0));
    bonusX = rand() % width;
    bonusY = rand() % height;

    // Initialize enemies at random positions
    enemy1X = rand() % width; enemy1Y = rand() % height; // Horizontal enemy
    enemy2X = rand() % width; enemy2Y = rand() % height; // Vertical enemy
    enemy3X = rand() % width; enemy3Y = rand() % height; // Diagonal enemy

    score = 0;
}

// Function to draw the game on the console
void draw() {
    system("cls");  // Clear the screen

    // Draw the top border
    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    // Draw the grid with player, bonus, and enemies
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (x == 0) cout << "#"; // Left border

            if (x == playerX && y == playerY)
                cout << "P";  // Player
            else if (x == bonusX && y == bonusY)
                cout << "B";  // Bonus
            else if (x == enemy1X && y == enemy1Y)
                cout << "E";  // Enemy 1 (horizontal)
            else if (x == enemy2X && y == enemy2Y)
                cout << "E";  // Enemy 2 (vertical)
            else if (x == enemy3X && y == enemy3Y)
                cout << "E";  // Enemy 3 (diagonal)
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
    // Enemy 1: Horizontal movement
    enemy1X += enemy1Dir;
    if (enemy1X >= width || enemy1X < 0) enemy1Dir *= -1;  // Reverse direction at edges

    // Enemy 2: Vertical movement
    enemy2Y += enemy2Dir;
    if (enemy2Y >= height || enemy2Y < 0) enemy2Dir *= -1;  // Reverse direction at edges

    // Enemy 3: Diagonal movement
    enemy3X += enemy3DirX;
    enemy3Y += enemy3DirY;
    if (enemy3X >= width || enemy3X < 0) enemy3DirX *= -1;  // Reverse X direction at edges
    if (enemy3Y >= height || enemy3Y < 0) enemy3DirY *= -1; // Reverse Y direction at edges

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

    // Check if player hits an enemy
    if ((playerX == enemy1X && playerY == enemy1Y) ||
        (playerX == enemy2X && playerY == enemy2Y) ||
        (playerX == enemy3X && playerY == enemy3Y)) {
        cout << "\nGame Over! You collided with an enemy.\n";
        exit(0);  // End the game if player hits an enemy
    }
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