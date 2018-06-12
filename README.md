# HackerRank - Grading Students

## Table of Contents
<!-- TOC -->

- [HackerRank - Grading Students](#hackerrank---grading-students)
    - [Table of Contents](#table-of-contents)
    - [Description](#description)
    - [Example](#example)
    - [Input Format](#input-format)
    - [Constraints](#constraints)
    - [Output Format](#output-format)
    - [Samples](#samples)
        - [Sample Input 0](#sample-input-0)
        - [Sample Output 0](#sample-output-0)
        - [Explanation 0](#explanation-0)
    - [Solving](#solving)
        - [Algorithm](#algorithm)

<!-- /TOC -->

## Description
* HackerLand University has the following grading policy:
	* Every student receives a _grade_ in the inclusive range from **0** to **100**
	* Any _grade_ less than **40** is a failing grade
* Sam is a professor at the university and likes to round each student's _grade_ according to these rules:
	* If the difference between _grade_ and the next multiple of 5 is less than **3**, round _grade_ up to the next multiple of **5**
	* If the value of _grade_ is less than **38**, no rounding occurs as the result will still be a failing grade
* Given the initial value of _grade_ for each of Sam's _n_ students, write code to automate the rounding process

## Example
* _grade_ = **84** will be round to **85** but _grade_ = **29** will not be rounded because the rounding will result in a number that is less than **40**

## Input Format
* The first line contains a single integer denoting _n_ (the number of students)
* Each line _i_ of the _n_ subsequent lines contains a single integer, _grade<sub>i</sub>_, denoting _i_'s grade

## Constraints
* **1 &le; n &le; 60**
* **0 &le; _grade<sub>i</sub>_ &le; 100**

## Output Format
* For each _grade<sub>i</sub>_ of the _n_ grades, print the rounded grade on a new line

## Samples

### Sample Input 0
```
73
67
38
33
```

### Sample Output 0
```
75
67
40
33
```

### Explanation 0
* Student 1 received a **73**, and the next multiple of **5** from **73** is **75**. Since **75** - **73** < **3**, the student's grade is rounded to **75**
* Student 2 received a **67**, and the next multiple of **5** from **67** is **70**. Since **70** - **67** = **3**, the student's grade will not be modified and the final grade is **67**
* Student 3 received a **38**, and the next multiple of **5** from **38** is **40**. Since **40** - **38** < **3**, the student's grade is rounded to  **40**
* Student 4 received a grade below **38**, the grade will not be modified and the student's final grade is **33**

## Solving


### Algorithm
1. Read from input
2. No operation performed if grade is less than 38 or when the result of mod is 0 or 1 or 2
3. Round up when the result of mod is 3 or 4
	* Add 2 when result of mod is 3
	* Add 1 when result of mod is 4
4. Print grade on new line

```
38 -> 40 ------ 38 % 5 -> 3
39 -> 40 ------ 39 % 5 -> 4
40 -> 40 ------ 40 % 5 -> 0
41 -> 40 ------ 41 % 5 -> 1
42 -> 40 ------ 42 % 5 -> 2
43 -> 45 ------ 43 % 5 -> 3
44 -> 45 ------ 44 % 5 -> 4
45 -> 45 ------ 45 % 5 -> 0
46 -> 45 ------ 46 % 5 -> 1
47 -> 45 ------ 47 % 5 -> 2
48 -> 50 ------ 48 % 5 -> 3
49 -> 50 ------ 49 % 5 -> 4
50 -> 50 ------ 50 % 5 -> 0
```
