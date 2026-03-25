# Two Sum Problem (DSA Practice)

This repository contains solutions to the classic **Two Sum** problem in both **C++** and **PHP**.

## Problem Statement
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

Constraints:
- Each input has exactly one solution.
- You may not use the same element twice.

## Solutions

### Brute Force
- Check all pairs.
- Time Complexity: O(n²)
- Space Complexity: O(1)

### Hash Map
- Store numbers in a hash map.
- For each number, check if its complement exists.
- Time Complexity: O(n)
- Space Complexity: O(n)

## File Structure