# Console Platformer Game

A simple C++ console-based platformer game. The player controls a hero character, navigating obstacles, enemies, and platforms to reach a friendly cat and win the game.

## Features

- **Large Scrollable Map:**  
  The game world is a 200x500 grid, with a visible window that scrolls as the hero moves.

- **Hero Character:**  
  - Move left (`a`), right (`d`), up (`w`), and down (`s`).
  - Jump diagonally with `q` (up-left) and `e` (up-right).
  - Hero sprite faces left or right based on movement.
  - Gravity pulls the hero down unless standing on a platform or elevator.

- **Projectiles:**  
  - Fire bullets (`b`) in the direction the hero is facing.
  - Fire lasers (`l`) for a powerful horizontal attack.
  - Bullets and lasers can defeat enemies.

- **Enemies:**  
  - **Dog Enemy:** Patrols a platform, changes direction at edges, and shoots bullets at intervals.
  - **Owl Enemy:** Stationary, drawn as an obstacle.
  - **Fox Enemy:** (Sprite present, can be used for additional enemies.)
  - **Mice:** Move back and forth on a platform.
  - **Spiked Ground:** Hazardous areas that can harm the hero.

- **Moving Elevator:**  
  - Elevator moves diagonally up and down.
  - Hero can ride the elevator to reach higher platforms.

- **Platforms and Obstacles:**  
  - Fancy floor, spiked ground, cactus, and clouds as environmental features.
  - Ladder for vertical movement.

- **Cat Friend (Goal):**  
  - Reach the cat friend to win the game.

- **Lives System:**  
  - Hero starts with 3 lives.
  - Getting hit by enemy bullets reduces lives.
  - Game over when lives reach zero.

- **Game States:**  
  - "GAME OVER" message when the hero loses all lives.
  - "YOU WIN" message when the hero reaches the cat friend.

- **Visual Elements:**  
  - ASCII art for hero, enemies, clouds, cactus, ladder, and more.
  - Dynamic display updates every frame.

- **Controls:**
  - `a`/`d`: Move left/right
  - `w`/`s`: Move up/down
  - `q`/`e`: Diagonal jumps
  - `b`: Fire bullet
  - `l`: Fire laser

## How to Run

1. Open the project in Visual Studio 2022.
2. Build the project (C++14 required).
3. Run the executable in a Windows console.

## Notes

- The game uses `conio.h` for keyboard input and `system("cls")` for screen clearing, so it is Windows-only.
- All game logic and rendering are handled in a single C++ file.

---

Enjoy playing and feel free to extend the game with new features or enemies!
