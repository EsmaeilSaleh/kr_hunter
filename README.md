# kr_hunter

`kr_hunter` is an interactive terminal-based C learning and typing app that helps you study and memorize code from the classic book **The C Programming Language** by Kernighan & Ritchie (K&R).

It presents the original code examples from the book — chapter by chapter — in a stringified format so you can type them out from memory or practice via copy mode.

## 📘 Chapters Covered

- Chapter 1: A Tutorial Introduction
- Chapter 2: Types, Operators, and Expressions
- Chapter 3: Control Flow
- Chapter 4: Functions and Program Structure
- Chapter 5: Pointers and Arrays
- Chapter 6: Structures
- Chapter 7: Input and Output
- Chapter 8: The UNIX System Interface

## 📎 Appendices

- Appendix 1: The C Preprocessor _(optional extension)_

## ✍️ Modes

- **Copy Mode** – Type the displayed code and get immediate feedback.
- **Recall Mode** – Try to write the code from memory based on description and function name.

## ⚙️ Technical

- 100% C-based terminal app
- Norminette-safe formatting for 42 students
- Modular codebase with each function in stringified form

## 🏁 Goal

To help you master the K&R book through deliberate practice and typing, making you faster, sharper, and more confident in C — especially useful if you're studying at 42 or self-teaching low-level programming.

---

📦 Project maintained by Esmaeil Saleh – Berlin, 2025

## 🚀 Installation & Usage

### 1. Clone the Repository

```bash
git clone https://github.com/your-username/kr_hunter.git
cd kr_hunter
```

### 2. Build the Project

```bash
make
```

This will compile the app using the provided Makefile.

### 3. Run the App

```bash
./kr_hunter
```

You’ll be prompted to select a chapter and mode (Copy or Recall).

---

### ⌨️ Keyboard Shortcuts

- `Ctrl + C` – Quit anytime
- `Enter` – Submit typed code or move to next
- `Backspace` – Edit your input

---

### ⚠️ Requirements

- A POSIX-compliant terminal (macOS, Linux, or WSL)
- `gcc` and `make` installed

---

Happy typing!
