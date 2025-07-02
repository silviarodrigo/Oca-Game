# The Game of the Goose (Juego de la Oca)
A classic board game brought to life as a console application. This project is an implementation of the traditional **"Game of the Goose"** (known in Spanish as "Juego de la Oca"), developed as a final assignment for a first-year programming course.

## How to play
The game is a simple race where players roll dice to advance their token along a spiral track. The board contains special "goose" squares that allow the player to jump forward, as well as several "trap" or "penalty" squares that can send them back or make them lose turns. The first player to reach the final square wins.

## Features
- **Classic Gameplay**: Implements all the standard rules of the Game of the Goose.
- **Player vs. Player**: Designed for two players to compete.
- **Save & Load**:
    - **Continue a Game**: Load a previously saved game and pick up right where you left off.
    - **Start a New Game**: Begin a fresh match from square one.
- **Debug Mode**: A special mode for developers and testers to manually input dice roll values, allowing for precise control over the game flow and easy testing of specific board squares.

### Debug Mode

To enable **Debug Mode**, you will need to change to true the MODO_DEBUG constant within the source code before compiling.
When active, instead of a random dice roll, the game will enter the value for the dice rolls provided in the main. This is perfect for testing specific game scenarios.
