# Advent of Code 2024 🎄

Welcome to my Advent of Code 2024 repository! This project contains my solutions for the Advent of Code 2024 puzzles. Advent of Code (AoC) is an annual event where participants solve daily programming puzzles to earn stars and compete on global leaderboards. It's a fun way to improve your coding skills and enjoy the holiday season with the coding community. This is my first year participating, and I'm excited to share my journey with you. I've also tried solving some puzzles with Kotlin for this 2024 year, and you can check out that [repo here](https://github.com/Dino-Julius/aoc-2024-By-Julius).

## Project Structure 📂

The project is organized into directories for each day of the challenge, for now it only has the AoC 2024 puzzles. The project structure is as follows:

```
aoc-2024/
    day01/
    ...
    day25/
LICENSE
README.md
```

Each `dayXX` directory contains the following files:
- `part1.cpp`: The solution for part 1 of the challenge.
- `part2.cpp`: The solution for part 2 of the challenge.

## How to Use 🚀

To compile and run the solutions, follow these steps:

1. Navigate to the directory of the day you want to solve.
2. Create an `input.in` file with your puzzle input for the problem. You can use `Ctrl + A` to select all to copy and paste the input.
3. Compile the solution and run the program, Im using `g++` and `cat` to compile and run the program. You can use the following command to compile and run the solution:
    ```shell
    g++ part_.cpp -o solve && solve.exe && cat input.out    # For Windows
    g++ part_.cpp -o solve && ./solve && cat input.out      # For Linux
    ```
    Replace `_` with the part number (1 or 2).

4. The output will be displayed in the terminal, and the results will be written to `input.out`.

## License 📜

This project is licensed under the MIT License. See the 

[LICENSE](/LICENSE) file for details.

Happy coding and enjoy the Advent of Code! 🎅✨