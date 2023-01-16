C - Preprocessor
TASKS
0. Object-like Macro
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
1. Pi
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
2. File name
Write a program that prints the name of the file it was compiled from, followed by a new line.

You are allowed to use the standard library

3. Function-like macro
Write a function-like macro ABS(x) that computes the absolute value of a number x.
4. SUM
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.C - Structures, typedef
TASKS
0. Poppy
Define a new type struct dog with the following elements:

name, type = char *

age, type = float

owner, type = char *

1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);

Format: see example bellow

You are allowed to use the standard library

If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))

If d is NULL print nothing.

3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Define a new type dog_t as a new name for the type struct dog.
4. A door is what a dog is perpetually on the wrong side of
Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);

You have to store a copy of name and owner

Return NULL if the function fails

5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);