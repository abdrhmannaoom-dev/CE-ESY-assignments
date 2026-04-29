Ring Buffer in C

Overview

This project implements a simple Ring Buffer (Circular Buffer) in C. It demonstrates how to store and retrieve characters efficiently using a fixed-size array with wrap-around indexing.

Features

- Fixed-size buffer ("BUFFER_SIZE = 20")
- FIFO (First In, First Out) behavior
- Circular indexing using modulo operation
- Functions to:
  - Initialize the buffer
  - Check if empty or full
  - Insert data
  - Remove data

How It Works

1. The user enters their name.
2. The program appends ""CE-ESY"" to the input.
3. Each character is inserted into the ring buffer.
4. Characters are then removed and printed in order.

Functions

- "initialize()" → Initializes the buffer
- "isVacant()" → Checks if buffer is empty
- "isComplete()" → Checks if buffer is full
- "insert()" → Adds a character to the buffer
- "removeChar()" → Removes and returns a character

Example

Input:  Mohamed
Output: MohamedCE-ESY

Notes

- Input is limited to 49 characters to prevent overflow.
- If the buffer is full, insertion is blocked.
- If the buffer is empty, removal returns "'\0'".

Compilation & Run

gcc ring_buffer.c -o ring_buffer
./ring_buffer

Author

Student implementation for learning data structures in C.
