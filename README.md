
## INTRODUCTION STRUCTURES PROGRAMING
#### Integrantes:
 
* [Arana Andrew](https://github.com/Andrewbejar/Programming-2)
* [Pinelo Jason](https://github.com/JasonPinelo95/Programming_2)
* [Valdez Karla](https://github.com/karlave14/Programming_2)

# ANDREW

## Programming Paradigm
* A programming paradigm is simply a style of programming. Each paradigm varies depending on the specific needs of the programmer.
### Classification of programing paradigms
## Declarative
* **Functional:** (also, Applicative) Programming with function calls that avoid any global state.

* **Data flow:** (flow driven) Programming with emitters and listeners of asynchronous actions.

* **Logic, Constraint-based:** (rule-based) Programming by specifying a set of facts and rules. An engine infers the answers to questions.

* **Template-based:** Programming where templates are used by a compiler to generate temporary source code, which is merged by the compiler with the rest of the source code and then compiled

* **Structured:** programming with clean, nested control structures rather than via gotos.

## Imperative
* **Von Neuman:** is any of the programming languages that are high-level abstract isomorphic copies of von Neumann architectures.
* **Interpreted(Scripting):** intended to be very fast to learn and write in, either as short source code files or interactively in a read–eval–print loop (REPL, language shell)
* **Object-Oriented:** Programming by defining objects that send messages to each other. Objects own their own internal state and public interfaces. Object Orientation can be: class-bassed or prototype based.


# JASON

## Implementation methods of the programming paradigms:

There are two main ways that languages can be implemented:

* A language can be interpreted 
* A language can be compiled

Computer are only capable of executing machine language(the language of the CPU). The goal of any programming language implementation is to translate a source program into this simpler machine language so it can be executed by the CPU.

### COMPILATION

It is the most direct method of translating a program to machine language. A compiler is a program that internally is composed of several parts. The parser reads a source program and translates it into an intermediate form called an abstract syntax tree(AST). An AST is a tree-like data structure that internally represents the source program. The code generator then traverses the AST and produces another intermediate form called an assembly language program. This program is not machine language, but it is much closer. Finally, an assembler and linker translate an assembly language program to machine language making the program ready to execute.

Programming in a compiled language is a three-step process.

* First, you write a source program.
* Then you compile the source program, producing an executable program.
* Then you run the executable program.

Machine language is specific to a CPU architecture and operating system. Compiling a source program on Linux means it will run on Linux machines with a similar CPU. However, you cannot take a Linux executable and put it on a Microsoft Windows machine and expect it to run, even if the two computer have the same CPU. The Linux and Windows operating systems each have their own format for executable machine language programs. In addition, compiled programs use operating system services for printing, reading input, and doing other Input/Output (I/O) operations. These services are invoked differently between OS’s. C, C++, Pascal, Fortran, COBOL and many other are typically compiled languages.

### INTERPRETATION

An interpreter is a program that is written in some other language and compiled into machine language. The interpreter itself is the machine language program and is written to read source programs from the interpreted language and interpret them. For instance, Python is an interpreted language. The Python interpreter is written in C and is compiled for a particular platform like Linux, Mac OS X, or Windows. 
When you run an interpreted source program, you are actually running the interpreter. Your program is not running because is never translated to machine language. The interpreter is the machine language program that executes all the programs you write in the interpreted language. The source program you write controls the behavior of the interpreter program.

Programming in an interpreted language is a two step process.

* First you write a source program.
* Then you execute the source program by running the interpreter.

Each time your program is executed it is translated into an AST by a part of the interpreter called the parse. There may be an additional step that translates the AST to some lower-level representation, often called bytecode. In an interpreter, this lower-level representation is still internal to the interpreter program. Then a part of the interpreter, often called a virtual machine, executes the byte code instructions.
Eliminating the compile step has a few implications.

* Since you have one less step in development you may be encouraged to run your code more frequently during development. This is generally a good thing and can shorten the development cycle.
* Secondly, because you do not have an executable version of your code, you don’t have to manage the two versions. You only have a source code program to keep track of.
* Finally, because the source code is not platform dependent, you can usually easily move your program between platforms. The interpreter insulates your program from platform dependencies.

There are many interpreted languages available including Python, Ruby, Standard ML, and Unix scripting languages like Bash and Csh.

The disadvantage of an interpreted language is in speed of execution. Interpreted programs typically run slower than compiled programs. In a compiled program, parsing and code generation happen once, when running an interpreted program, parsing and code generation happen each time the program is executed. 

## A programming language

A programming language is an artificial formalism in which algorithms can be expressed. For all its artificiality, though, this formalism remains a language. Its study can make good use of the many concepts and tools developed in the last century in linguistics (which studies both natural and artificial languages).
Each language has three major areas(characteristics): grammar, semantics and pragmatics. Additionally we can identify a fourth level for programming languages: implementation.

Grammar is that part of the description of the language which answers the question: which phrases are correct?

Semantics is that part of the description of the language which seeks to answer the question “what does a correct phrase mean?

Pragmatics is that part of a language description which asks itself “how do we use a meaningful sentence?

A fairly rudimentary example that can explain the above can be:
Let us consider the natural language used to express recipes in cooking. The syntax determines the correct sentences with which a recipe is expressed. The semantics is about explaining “what is” a recipe, independent of its (specific) execution. Pragmatics studies how a cook (“that cook”) interprets the various sentences of the recipe. In the end, the implementation describes the way (where, and with what ingredients) the kitchen recipe transforms into the dish that the semantics prescribes.

## Sequential Algorithms

An algorithm is a precise and unambiguous recipe for solving a class of problems. If formulated as programs, they can be executed by a machine. Algorithms are at the heart of every nontrivial computer application.

A sequential algorithm is simply a sequence of machine instructions, numbered from 0 to some number N. The elements of the sequence are called program lines. The program is stored in a program store.
A program is executed on a given input step by step. The input for a computation is stored in memory cells S[1] to S[N] and execution starts with program line 1. The next instruction to be executed is always the instruction in the next program line. The execution of a program terminates if a program line is to be executed whose number is outside the range 1..N. Recall that N is the number of the last program line.
We define the execution time of a program on an input in the most simple way:
Each instruction takes one time step to execute. The total execution time of a program is the number of instructions executed.

## Source Code

It is any collection of code, possibly with comments, written using a human-readable programming language, usually as plain text. The source code of a program is specially designed to facilitate the work of computer programmers, who specify the actions to be performed by a computer mostly by writing source code. The source code is often transformed by an assembler or compiler into binary machine code that can be executed by the computer. The machine code might then be stored for execution at a later time. Alternatively, source code may be interpreted and thus immediately executed. 

## Describe concept and characteristics of data representatoin in structured programming language:

Each programming language contains constructs and mechanisms for structuring data. Instead of just the simple sequences of bits in the physical machine, a highlevel language provides complex, structured data which more easily lends itself to describing the structure of the problems that are to be solved. These constructs and mechanisms are formed from what is called the type system of a language. Far from being an auxiliary aspect, types represent one of the salient characteristics of a programming language and which substantially differentiate one language from an other.

* *Identifiers*: An identifier is any non reserved word that begins with a letter or an underline and can contain in its interior words, numbers or underlines. The maximum length of an identifier depends on the compiler,but, generally, the are of 32 characters .

* *Variables*: The classical imperative paradigm uses modifiable variables. According to this model, the variable is seen as a sort of container, or location (clearly referring to physical memory), to which a name can be given and which contains values (usually of a homogeneous type, for example integers real, characters etc.). These values can be changed over time, by execution of assignment commands (whence comes the adjective “modifiable”). This terminology might seem tautological to the average computer person, who is almost always someone who knows an imperative language and is therefore used to modifiable variables. The attentive reader, though, will have noted that, in reality, variables are not always modifiable. In mathematics a variable represents a value that is unknown but when such a value is defined the link thus created cannot be modified later.

* *Constants*: They are variables that are assigned an initial value that can never be changed in the run time.

* *Reserved Words*: They are words that are explicitly used by the programming language and they should not be used as variables names because they have a unique function inside of the language.

### Bibliography

* [Foundations of Programming Languages](https://link.springer.com/book/10.1007/978-3-319-13314-0)
* [Principles of Programming Languages](https://link.springer.com/book/10.1007/978-1-84882-032-6)
* [Programming Languages: Principles and Paradigms](https://link.springer.com/book/10.1007/978-1-84882-914-5)

# KARLA

## Type of data 
A data type is a type together with a collection of operations 
to manipulate the type

#### **Data primitives:** 
 They are simple values, manipulated with operations
 provided directlythey are simple values, manipulated 
 with operations provided directly by the programming language 
 and can normally be represented and manipulated with the tools 
  available in the computer's machine language
   Common examples of primitve data types: 
	* Boolean
	* Character 
	* Double
	* Integer
	* Long
	* Short
	* String
	* Void 


#### **Data composite:** 
They are data types whose values consist of collections
 of data elements also made up of previously definitive data types.Like: 
	* Arrays 
	* Tables 
	* String
 ### Memory and range space for each data type 
|Data type|Storage| Range |
| -- | -- | -- |
|char      |8 bytes|- 128 to 127|
|INT     |2 byte |  -32768 a 32767  |
| float   |4 bytes| 3.4E-38 a 3.4E+38  |
|DOUBLE	  |8 bytes| 1.7E +/- 308 (15 digits)|
|-- | -- | -- |

*The memory of each datype can be change depeds what is that variable and 
the range it is same.*  
 
### Data type conversion 
Is basically converting one type of data type to other to perform some operation. 
 The conversion is done only between those datatypes wherein the conversion is possible ex – char to int and vice versa.
* **Implicit:** is usually performed by the compiler
	 when necessary without any commands by the user.
* **Explicit:** conversion rules out the use of compiler 
	for converting one data type to another instead the user 
	explicitly defines within the program
### Identify the operators of structured programming language: 

* **Conditional:** are used to evaluate a condition that's applied 
	to one or two boolean expressions

* **Logical:** is a symbol or word used to connect two or more expressions 
	like that the value of the compound expression produced depends only on
	that of the original expressions and on the meaning of the operator. 
 *operators in **C***
 
 | && | AND|
 | || | OR |
 | !  | NOT|
 
* **Ralational:** is a programming language construct or operator that tests or defines some kind of relation between two entities. 

#### References: 

* [Type of data](https://www.programiz.com/c-programming/c-data-types)
* [Memory and range](https://dl.sumdu.edu.ua/textbooks/103395/597162/index.html)
* [Data conversion](https://www.includehelp.com/c/type-conversion.aspx)
* [Condicional operators](https://fresh2refresh.com/c-programming/c-operators-expressions/c4-conditional-operators/)
* [logical operators](https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
* [Relational](https://fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
