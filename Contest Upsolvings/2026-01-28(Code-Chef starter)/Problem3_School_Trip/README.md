# School Trip – Minimum Mind Changes

## Problem Statement
There are `N` students in a school, and `X` of them have said they want to go on the school trip.  

The school buses can each carry `K` students, and **every bus must be completely full**. No partially filled buses are allowed. Hence, the number of students going on the trip must be divisible by `K`. There are enough buses available.  

As their teacher, you can convince some students to change their mind (either they originally wanted to go and now don’t, or they didn’t want to go and now do).  

Your task is to find the **minimum number of students you need to convince** so that the number of students going on the trip is divisible by `K`.  

> It is allowed that no student goes on the trip.

---

## Input Format

- The first line contains an integer `T`, the number of test cases.  
- Each of the next `T` lines contains three integers: `N`, `X`, and `K`.

---

## Output Format

- For each test case, output a single line containing the **minimum number of students whose minds need to be changed**.

---

## Constraints

- `1 ≤ T ≤ 100`  
- `1 ≤ X ≤ N ≤ 100`  
- `1 ≤ K ≤ 100`