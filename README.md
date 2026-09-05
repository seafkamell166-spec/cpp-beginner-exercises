# C++ Beginner Exercises

## Overview
A collection of small C++ console programs written while learning the language — the very first "Hello, World" programs through conditionals, loops, arrays, structs, and functions. Originally each of these lived in its own Visual Studio console project (many with placeholder names like `aaaa`, `qwqw`, or `q1`); they're grouped here by topic and given descriptive names so the progression is easy to follow.

## Technologies Used
- **C++** (console I/O with `iostream`, arrays, `struct`s, functions, `switch`, loops)
- One program (`mini-games/console_snake_game.cpp`) additionally uses `<conio.h>` and `<windows.h>` for non-blocking keyboard input and screen clearing (Windows-only)

## Project Structure
```
cpp-beginner-exercises/
├── basics/                 # first programs: hello world, simple rectangle area
├── conditionals/           # if / else if / switch exercises (grades, parity, eligibility)
├── loops/                  # for / while / do-while / nested-loop exercises
├── arrays-and-structs/     # arrays, struct-based records, min/max/average
├── functions/              # standalone functions: sum/average, conversions, small "quiz" programs
└── mini-games/
    └── console_snake_game.cpp   # a complete terminal Snake game
```

## Highlight: Console Snake Game
`mini-games/console_snake_game.cpp` is a complete, playable Snake game that runs directly in the Windows console — it tracks the snake's tail as an array of coordinates, reads WASD input without blocking, redraws the board every frame, and detects wall/self collisions and food pickups. It's a good example of moving from single-concept exercises to a small complete program.

## How to Run
Each file is a standalone, single-file program:
```bash
g++ conditionals/letter_grade.cpp -o letter_grade
./letter_grade
```
The snake game needs a Windows compiler (it uses `<conio.h>`/`<windows.h>`):
```bash
g++ mini-games/console_snake_game.cpp -o snake -lwinmm
snake.exe
```

## What I Learned
- Reading input and printing output with `cin`/`cout`
- Conditional logic: `if` / `else if` / `else` and `switch`
- All three loop forms (`for`, `while`, `do-while`) and nested loops
- Arrays and `struct`s for grouping related data
- Writing and calling functions, including passing arrays and structs by reference
- Basic terminal-based game logic (game loop, input handling, collision detection)

## Known Limitations
This is early learning code, kept as-found rather than cleaned up. A handful of real bugs found during review have since been fixed (see commit history for the exact diffs):
- `arrays-and-structs/array_average.cpp` indexed a 3-element array at positions 1–3 instead of 0–2 (off-by-one) — **fixed**.
- `arrays-and-structs/salary_raise.cpp` used `i == 9` as a loop condition instead of `i < 10`, so its loops never executed — **fixed**.
- `functions/array_bounds_draft.cpp` read into `array[9]` on a 9-element array (valid indices are 0–8), an out-of-bounds write — **fixed** (now reads into a valid index).
- `conditionals/enum_favorite_club.cpp` never actually read the user's choice before comparing it, so it always took the same branch — **fixed** (now reads and converts the input).

A couple of files are still intentionally left as unfinished drafts rather than completed, since the point of this repository is to show real progress while learning, not a polished final product:
- `arrays-and-structs/array_sum_draft.cpp` and `conditionals/hello_world_stub.cpp` / `loops/hello_world_stub.cpp` / `arrays-and-structs/hello_world_stub.cpp` are either fully commented out or left as the default "Hello World" template without the intended logic.
- `functions/array_bounds_draft.cpp` (bug fixed above) still only reads a single value rather than looping over the whole array — it was left as a draft, not completed into a full array-input routine.
