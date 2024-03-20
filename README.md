# Chess-project: A Chess Game Implemented in C++

## Description

As an avid chess player, this project holds a special place in my heart as it marks my first steps within the realm of IT. Having two applications that communicate via subprocesses, it embodies the classic game of chess, taking in consideration all its rules: from castling to promotion and en passant. The game is designed for 1 vs 1 play.

## Technologies Utilized

- C++
- SFML (Simple and Fast Multimedia Library)
- Subprocess Utilities
- CMake
## Environment

- The project was developed on Linux Ubuntu (not sure which version)
- The project is pretty much cross-platform. It just needs gcc compiler and SFML installed.

## Implementation Details

This project consists of 2 applications: Chess-Interface and Chess-AI(no AI involved sadly). 

The Chess-Interface is just a SFML project which creates the interface, but has no idea of any chess rule. It creates the Chesss-AI project as a subprocess when it starts. 

The Chess-AI is the main application, which has all the rules implemented, has all the move history. It communicates with the interface via a pipe. 

## Usage

- Load the CMake file from the Chess-AI application(the top-level not the CMake from the *src* directory). Create the executable (Chess-AI_run).
- Load the CMake file from Chess-Interface applcation. Compile it and if the first step was done before hand the interface should show on the screen.


## Program in action

- How the interface should look.
<img width="880" alt="image" src="https://github.com/CirsteanPaul/Chess-project/assets/106026094/5d6edbcd-da4c-4f3f-9d6e-05eb9dd333ef">

- Each piece when selected will have it's valid moves highlighted.
<img width="880" alt="image" src="https://github.com/CirsteanPaul/Chess-project/assets/106026094/d904dd67-0b14-47c4-a51f-85e0f49f17f1">

- This knight cannot move because it's pinned by the bishop. The king would be in check if it moved.
<img width="880" alt="image" src="https://github.com/CirsteanPaul/Chess-project/assets/106026094/43b97028-8c95-452b-a9aa-a44374c339e3">

- How the interface will respond if you want to promote a pawn.
<img width="880" alt="image" src="https://github.com/CirsteanPaul/Chess-project/assets/106026094/dbb58cb4-bf23-4424-9d03-dd3c9a64fc14">



