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

## **The Conditional Operator**
> expression ? true_expression : false_expression

## *Iterative Control Structures*
