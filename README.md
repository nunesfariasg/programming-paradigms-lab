# Programming Paradigms Lab

A practical study laboratory focused on understanding fundamental programming paradigms and how they influence the way software is designed and implemented.

The laboratory uses small exercises to explore different programming models, with emphasis on understanding their concepts and characteristics rather than building a complete application.

## Objectives

* Understand the main programming paradigms.
* Identify the characteristics of each paradigm.
* Implement the same problems using different paradigms.
* Compare how the same problem can be expressed in different ways.
* Understand how paradigms influence program design and reasoning.

## Paradigms

### Imperative Programming

Focuses on describing a sequence of commands that modify program state.

**Language:** C

### Object-Oriented Programming

Focuses on modeling software through objects that encapsulate state and behavior.

**Language:** Java

### Functional Programming

Focuses on functions, immutability, and the composition of operations.

**Language:** Haskell

### Logic Programming

Represents problems using facts, rules, and logical relationships from which solutions can be inferred.

**Language:** Prolog

The goal is not to achieve proficiency in all languages, but to learn enough of each language to understand and experiment with its programming model.

## Exercises

The laboratory contains small exercises implemented in all four paradigms.

Each exercise solves the same problem using:

* Object-Oriented Programming
* Imperative Programming
* Functional Programming
* Logic Programming

Current exercises:

* Searching
* Sorting
* Expression Evaluation

## Project Structure

```text
.
├── README.md
├── Makefile
├── .gitignore
│
└── exercises/
    ├── searching/
    │   ├── oop/
    │   ├── imperative/
    │   ├── functional/
    │   └── logic/
    │
    ├── sorting/
    │   ├── oop/
    │   ├── imperative/
    │   ├── functional/
    │   └── logic/
    │
    └── expressions/
        ├── oop/
        ├── imperative/
        ├── functional/
        └── logic/
```

## Build and Run

The `Makefile` provides a common interface for running the exercises.

```bash
make searching
make sorting
make expressions
```

Each command runs the corresponding exercise using all four paradigms.

To run all exercises:

```bash
make all
```

To clean generated files:

```bash
make clean
```
