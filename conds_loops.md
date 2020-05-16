**For practicity, we will concentrate on showing the examples specifically for the C programming language.**

# *Control Structures*
* **Sequential Control**
* **Selective Control**
* **Iterative Control**

## **Selective Control Structures**

### **If Statements**
### Simple Conditional
* **If statement**
> if(expression)
>
>>  statement

### Double Conditional
* **If... else statement**
> if(expression)
>
>> statement
>
> else
>
>> statement

### Multiple Conditional
* **If... else if... else statement***
> if(expression)
>
>> statement
>
> else if(expression)
>
>> statement
>
> else
>
>> statement

### Nested Conditional
> if(expression)
>
> {
>
>> if(expression)
>
>>> statements
>
>> statements
>
> }
>
> else
>
> {
>
>> statements
>
>> if(expression)
>
>>> statements
>
>> else
>
>>> statements
>
> }

### **Switch Statement**
> switch(expression)
>
> {
>
>> case *constant*:
>
>>> statements
>
>> case *constant*:
>
>>> statements
>
> ... 
>
>> default:         // optional
>
>>> statements
>
> }

### **The Conditional Operator**
> expression ? true_expression : false_expression

## **Iterative Control Structures**

### **For Statments**
### For Statement
> for(initial statement; test expression; increment/decrement)
>
> {
>> statement
>
> }
>

### Nested For
> for (initial statement; test expression; increment/decrement)
>
> {
>> for(initial statement; test expression; increment/decrement)
>
>> {
>
>>> statements
>
>> }
>
> }

### While
> while(expression)
>
> {
>
>> statements
>
> }

### Do... While
> do
>
> {
>
>> expression
>
> }
> while(expression);

## *Break and Continue*
### Break
> for(i=1; i<=10, i++)
>
> {
>> if(i==5)
>
>>> break;
>
>> printf("%d", i);
> }

Output:
1 2 3 4 5

### Continue
> for(i=1; i<=10; i++)
>
> {
>> if(i%2==0)
>
>>> continue;
>
>>printf("%d",i);
>
> }

Output: 1 3 5 7 9
