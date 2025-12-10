# Advent of Code Solutions

My solutions for the [Advent of Code](https://adventofcode.com/) challenges.

## About

Advent of Code is an annual programming challenge that runs from December 1st to 25th, featuring daily puzzles that become progressively more challenging.

## Language

Solutions are written in **C++**.

## Structure

```
.
├── template/
│   ├── solution.cpp    # Template for solving problems
│   └── input.txt       # Placeholder for input
├── DOCS.md             # C++ competitive programming tips & tricks
└── YYYY/               # Solutions organized by year
    ├── 01/
    │   ├── solution.cpp
    │   └── input.txt
    ├── 02/
    │   ├── solution.cpp
    │   └── input.txt
    └── ...
```

## Template

The `template/solution.cpp` file includes:
- Standard C++ headers (compatible with macOS)
- Fast I/O setup (`ios_base::sync_with_stdio(false)`)
- Common macros and type definitions
- Utility functions for competitive programming

For detailed documentation, see [DOCS.md](DOCS.md).

## Getting Input

1. Visit [Advent of Code](https://adventofcode.com/)
2. Navigate to the specific day (e.g., https://adventofcode.com/2015/day/1)
3. Log in and click "get your puzzle input"
4. Save the input to the corresponding `input.txt` file

## Installing C++

### macOS

Install Xcode Command Line Tools (includes g++ compiler):

```bash
xcode-select --install
```

Verify installation:

```bash
g++ --version
```

### Windows

**Option 1: MinGW-w64 (Recommended)**

1. Download from [winlibs.com](https://winlibs.com/) or [mingw-w64.org](https://www.mingw-w64.org/)
2. Extract the archive (e.g., to `C:\mingw64`)
3. Add to PATH: `C:\mingw64\bin`
4. Restart terminal and verify:
   ```cmd
   g++ --version
   ```

**Option 2: MSYS2**

1. Download and install [MSYS2](https://www.msys2.org/)
2. Open MSYS2 terminal and run:
   ```bash
   pacman -S mingw-w64-x86_64-gcc
   ```
3. Add to PATH: `C:\msys64\mingw64\bin`

**Option 3: Visual Studio**

1. Download [Visual Studio Community](https://visualstudio.microsoft.com/)
2. During installation, select "Desktop development with C++"
3. Use `cl` compiler or `g++` from Developer Command Prompt

## Running Solutions

### Compile and Run

From the project root directory:

```bash
# Navigate to the specific day `cd yyyy/dd`
cd 2015/01

# Compile the solution
g++ -std=c++17 -O2 -o solution solution.cpp

# Run with input file
./solution < input.txt
```

### One-liner (Compile + Run)

```bash
# Navigate to the specific day `cd yyyy/dd`
cd 2015/01

# Compile and run
g++ -std=c++17 -O2 -o solution solution.cpp && ./solution < input.txt
```

### Compiler Flags Explained

- `-std=c++17` - Use C++17 standard
- `-O2` - Optimization level 2 (faster execution)
- `-o` - Output executable name

## Commit Message Format

Keep it simple and descriptive for this personal project:

```
[YYYY/DD] Brief description of what you did

Optional: Additional details if needed
```

### Examples

```
[2015/01] Complete part 1 and 2

[2015/03] Fix off-by-one error in part 2

[2015/05] Optimize solution using hashmap

[template] Add string utility functions

[docs] Update README with Windows setup

[2015/06] Part 1 done, still working on part 2
```

### Quick Guide

- **[YYYY/DD]** - Year and day number (e.g., `[2015/01]`)
- **[template]** - Changes to template files
- **[docs]** - Documentation updates
- **[project]** - Project-wide changes (structure, config, etc.)

No need to be formal - just make it clear what you did!

## Progress

- 2015: In Progress

---

🎄 Happy Coding!
