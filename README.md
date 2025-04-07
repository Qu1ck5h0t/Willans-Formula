### Note: This code only serves as a PoC mathematical implementation of the formula, do NOT use this for practical purposes as it is computationally inefficient and breaks quickly due to integer overflow
In 1964, C.P. Willans' formula for finding primes was published on a maths journal and can be written as below:

![image](https://github.com/user-attachments/assets/0eb5a7bb-c9c9-4594-9598-46d90723a10b)

It faced heavy criticism due to the computational complexity of (j-1)! nested in a series, nested in another series. It makes sense why nobody decided to implement this before I did...

I got very bored on the day of writing this so I decided to implement it in C. While the code is consistent with the given formula, it returns incorrect numbers for n>6, with a pattern of 2^n +1 for n>7. 

After further analysis, I've determined that this behaviour is due to integer overflow of computing (j-1)! for values of j greater than 20, which quickly becomes the case due to the first series having a boundary of 2^n. After that, the rest of the logic consequently breaks.
