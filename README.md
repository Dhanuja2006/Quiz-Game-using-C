# Quiz Game

### Description
This is a simple quiz game implemented in C, where players can test their knowledge across multiple levels. The game tracks the player's score, allows multiple attempts, and stores the player's name in a notepad file. The game provides a fun way to learn while keeping track of performance.

### Features
- **Multiple Levels**: The quiz consists of different difficulty levels.
- **Scoring System**: Players earn points for correct answers, and the total score is displayed at the end.
- **Player Names**: The player’s name and score are saved to a notepad file for record-keeping.
- **Unlimited Attempts**: Players can attempt the quiz multiple times.
  
### Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)

### Installation
To get started with the quiz game, follow these steps:

1. **Clone the repository**:
    ```bash
    git clone https://github.com/your-username/quiz-game.git
    ```
2. **Navigate to the project directory**:
    ```bash
    cd quiz-game
    ```
3. **Compile the game**:
    ```bash
    gcc -o quiz_game main.c
    ```
4. **Run the game**:
    ```bash
    ./quiz_game
    ```

### Usage
1. After launching the game, enter your name.
2. Choose the quiz level you want to play.
3. Answer each question by typing the corresponding option number.
4. At the end of the quiz, your score will be displayed, and your name and score will be saved to the notepad file.
5. You can choose to play again or exit the game.

### File Structure
```bash
.
├── main.c          # Main program logic
├── questions.c     # Contains the quiz questions and levels
├── questions.h     # Header file for quiz logic
├── scores.txt      # File where player names and scores are stored
├── README.md       # Project documentation
└── LICENSE         # License file
