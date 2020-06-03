## Chapther 3

### Members

* [Arana Andrew](https://github.com/Andrewbejar/Programming-2/blob/master/subprogram3.md)
* [Pinelo Jason](https://github.com/JasonPinelo95/Programming_2/blob/master/subprogram3.md)
* [Valdez Karla](https://github.com/karlave14/Programming_2/blob/master/subprogram3.md)

### Subprograms

* A program inside any larger program that can be reused any number of times*

A subprogram **is a secuence of instructions** whose execution is invoked from one or more remote locations
in a program, with the expectation that when the subprogram execution is complete, execution resumes
at the instructuion after the one that invoked the subprogram.

* In **high-level languages** subprograms are also called subroutines, procedures, and functions.
* In **object-oriented languages** they are usually called methods or constructors.
* In most **modern high-level languages** subprograms can have parameters, local variables, and returned values.
* At the **assembly language level** use of subprograms requires subprogram linkage protocols.

#### Characteristics of a subprogram
	1. A Subprogram is implemented using the Call & Return instructions in Assembly Language.
	2. The Call Instruction is present in the Main Program and the Return(Ret)
   	Instruction is present in the subprogram itself
	3. It is important to note that the Main Program is suspended during the execution of any subprogram
	Moreover, after the completion of the subprogram the main program executes from the next sequential
	address present in the Program Counter.
	4. For the implementation of any subprogram, a “Stack” is used to store the “Return Address”
	to the Main Program.
	5. The Main advantage of Subprogram is that it avoids repetition of Code and allows us to reuse
	the same code again and again.
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
##Parameters in Subprograms
You can choose between two methods of parameter passing to optimize a program call. 
* By value 
* By reference

### **By value**
With the by-value method, the value of an actual parameter is passed to the subprogram.

    #include <stdio.h> 
    int square(int x); // prototype for function square
    int main()
    {
	int a = 10;
	printf("%d squared: %d\n", a, squared(a));
	return 0; //indicate succesful termination
    } // end main
    // returns the quare of an integer
    int square(int x) //x is a local variable
    {
	return x*x;
    }

### **By reference**
With the by-reference method, only a pointer to the value is passed, in which case the actual the actual and formal parameters reference the same item.

    #include <stdio> 
    void hello();
    int main()
    {
	hello();
    }
    void hello()
    {
	printf("Hello world!");
    }

* [Subprograms](https://www.d.umn.edu/~gshute/asm/subprograms.xhtml)
* [Parameters in subprograms](https://docs.oracle.com/cd/A58617_01/server.804/a58236/07_subs.htm)

### Recursion

Recursion is the way to get things done in a functional language. Recursion happens when a function calls itself. Because of the principle of referential transparency a function must never call itself with the same arguments. If it were to do that, then the function would do exactly what it did the last time, call itself with the same arguments, which would then.... Well, you get the picture!

To spare ourselves from this problem we insist on two things happening. First, every recursive function must have a base case. A base case is a simple subproblem that we are trying to solve that doesn’t require recursion. We must write some code that checks for the simple problem and simply returns the answer in that case.
The second rule of recursive functions requires them to call themselves on some simpler or smaller subproblem. In some way each recursive call should take a step toward the base case of the problem. If each recursive call advances toward the base case then by the mathematical principle of induction we can conclude the function will work for all values on which the function is defined! The trick is not to think about this too hard. The recursive case is often referred to as the inductive case.

Generally, we talk about two types of recursive functions but they are the same in essence.

* **Direct**: They are functions that call themselves
* **Indirect**: They are functions that call other functions, that eventually call the initial function again.

#### Steps to write any recursive function
1. Decide what the function is named, what arguments are passed to it, and what the function should return.
2. At least one of the arguments must get smaller each time. Most of the time it is only one argument getting smaller. Decide which one that will be.
3. Write the function declaration, declaring the name, arguments types, and return type if necessary. 
4. Write a base case for the argument that you decided will get smaller. Pick the smallest, simplest value that could be passed to the function and just return the result for that base case.
5. The next step is the crucial step. You don’t write the next statement from left to right. You write from the inside out at this point.
6. Make a recursive call to the function with a smaller value. For instance, if it is a list you decided will get smaller, call the function with the tail of the list. If an integer is the argument getting smaller, call the function with the integer argument minus 1. Call the function with the required arguments and in particular with a smaller value for the argument you decided would get smaller at each step.
7. Now, here’s a leap of faith. That call you made in the last step worked! It returned the result that you expected for the arguments it was given. Use that result in building the result for the original arguments passed to the function. At this step it may be helpful to try a concrete example. Assume the recursive call worked on the concrete example. What do you have to do with that result to get the result you wanted for the initial call? Write code that uses the result in building the final result for your concrete example. By considering a concrete example it will help you see what computation is required to get your final result.
8. That’s it! Your function is complete and it will work if you stuck to these guide-lines.

#### Examples of recursive functions

##### Program to compute the factorial of any given number using direct recursion

	#include <stdio.h>

	int factorial(int n){
        	if(n==0) return 1;
        	return n*factorial(n-1); 
	}

	void main(void)
	{
     		int number=0;
        	scanf("%d",&number); 
        	printf("The factorial of %d is %d\n", number,factorial(number));

	}
	
#### Program to know whether a number is even or not using indirect recursion

	#include <stdio.h>

	int odd (const int);

	int even (const int x) {
        	if (x == 0) return 1;
        	return odd(x - 1);
        	}

	int odd (const int x) {
        	if (x == 0) return 0;
        	return even(x - 1);
        	}

	int main () {
        	int number=0;
        	printf("Input any number, i will return '1' if it is even or '0' if it is odd: ");
        	scanf("%d", &number);
		printf("%d\n",even(number));
        	return 0;
        }

		
#### References

* [Foundations of Programming Languages](https://link.springer.com/book/10.1007/978-3-319-70790-7)
* [Principles of Programming Languages](https://link.springer.com/book/10.1007/978-1-84882-032-6)

