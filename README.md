# EXPERIMENT 9: Pointers in C++

## Aim
- To study and implement the use of pointers in C++:
  1. Incrementing different data types
  2. Sum and difference using pointers
  3. Parsing through an array using pointers
  4. Concatenation of a string using pointers

## Tools Used
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Pointers in C++
A pointer is a variable that stores the memory address of another variable. Pointers allow direct memory access and manipulation, which makes them powerful in certain programming scenarios.

### Pointer Operations:
- **Incrementing Pointers**: Increases the pointer's address by the size of its data type.
- **Pointer Arithmetic**: Supports operations like addition, subtraction, and comparison.
- **Traversing Arrays**: Arrays can be accessed and modified using pointers.
- **String Manipulation**: Strings (char arrays) can be concatenated by manipulating pointers.

---

## Algorithm

### 1. Incrementing Different Data Types
1. Start  
2. Declare variables of `int`, `float`, and `char` types  
3. Create pointers for each  
4. Increment each pointer and display the change in memory address  
5. Stop  

### 2. Sum and Difference Using Pointers
1. Start  
2. Declare two integer variables and assign values  
3. Create pointers pointing to these variables  
4. Use dereferencing (`*`) to calculate sum and difference  
5. Display results  

### 3. Parsing Through an Array Using Pointers
1. Start  
2. Declare and initialize an array  
3. Create a pointer to the first element of the array  
4. Use pointer arithmetic to access and display all elements  
5. Stop  

### 4. Concatenation of a String Using Pointers
1. Start  
2. Declare two character arrays (strings)  
3. Create a pointer to the first string and move it to the end  
4. Copy characters from the second string to the first using pointers  
5. Display the concatenated string  

---

## Functions
- `cin` and `cout` for input/output  
- Pointer arithmetic (`++`, `+`, `-`) for traversal and manipulation  
- Dereferencing (`*`) to access and modify values  
- `'\0'` character to identify end of a string  

---

## Conclusion
Through this lab, I learned how pointers work in C++. I understood how pointer arithmetic depends on data type size, how to use pointers to traverse arrays, and how to manipulate strings directly in memory. I also realized that while pointers are powerful, they must be used carefully to avoid memory-related bugs.
