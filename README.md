### Tic-Tac-Toe

```markdown
# 🎮 Tic-Tac-Toe in C

> A classic, terminal-based Tic-Tac-Toe game developed purely in C, with ambitious plans to become a logic challenge featuring an unbeatable AI and the complex "Super Tic-Tac-Toe" mode.

This project starts as a simple implementation of the traditional Tic-Tac-Toe for two local players, running directly in the terminal. The goal is to build a solid foundation in C for future expansions, including a single-player mode against an AI and the intriguing Super Tic-Tac-Toe mode.

---

### 🗺️ Project Roadmap

- [x] **Classic 1v1 Mode:** Functional for two local players in the terminal.
- [ ] **Unbeatable AI:** Implementation of a single-player mode against an AI that uses the optimal strategy to never lose.
- [ ] **Super Tic-Tac-Toe:** Development of the advanced game mode.
- [ ] **Code Refactoring:** Improvements to the structure and performance of the C code.

---

### ✨ Current Features

* **Classic Mode:** Play with a friend on the same device via the terminal.
* **Text-Based Interface:** Fully functional game without the need for a graphical interface.
* **Winner Detection:** Complete logic to identify a win, loss, or draw.

---

### 🎲 Rules of Super Tic-Tac-Toe (Future Implementation)

Super Tic-Tac-Toe (also known as Ultimate Tic-Tac-Toe) takes the challenge to a new level. The board is a giant 3x3 Tic-Tac-Toe grid, where each of the 9 cells is a smaller, regular Tic-Tac-Toe board.

1.  The first player can place an 'X' in any of the 81 available cells.
2.  The position of your move on the small board determines which of the large boards your opponent **must** play in on their next turn.
3.  To win the game, you need to win 3 small boards in a row, column, or diagonal on the giant board.

---

### 🛠️ Technologies Used

* **Language:** `C`
* **Compiler:** `GCC` 
* **AI Algorithm:** `Minimax` 

---

### ⚙️ How to Run the Project

To compile and run this project on your machine, you will need a C compiler like GCC installed.

👨‍💻 Author
Crafted with dedication by [Your Name].
