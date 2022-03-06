## Detailed descriptions

### C00 / ex00

In this first exercise we were challenged to create a function that would show on the screen the character passed as parameter.

We were just allowed to use the function Write and nothing else.

### C00 / ex01

In this second exercise we were challenged to create a function that would show the hole alphabet in ascending order in just one line, starting by 'a' character.

And just like the exercise above, we were just allowed to use the function write.

### C00 / ex02

This exercise is just the same proposal of the listed above, but in this one we need to show the alphabet in descending order starting by 'z'.

Just write allowed.

### C00 / ex03

This exercise will use the same principles of the two others that we already had seen, but here we will show the numbers starting by '0' showed in ascending order.

The cool and hard point here are that the function write, the only one allowed, just print on the screen char datatype, so by the time i did it, i used one of the options to realize this task, yes we have two options to deal with that.

- The first option that i used, and the simplest by the way, was to deal only with char types of numbers. For exemple by declaring the variable used like this:

#### char n = '0';

- The second option that are more sofisticated, but the same way simple as the other, is to change the char datatype declared into an int type, like this:

#### char n = '0';
#### int num = n + '0';

- Now the point here is, we could do this two ways, but the truth is, no matter what you choose, the same way you will only use the variable 'n' in your write function, because it didn't accept other datatype, the changing will only help you with this '', because you will not need it anymore on the logical tests of the code.

- So the recommended way is the first one, because is more simple, logical, and makes more sense by now.

### C00 / ex04

This exercise will be a little more elaborate compared to others already did, but simple still. Here we were challenged to write a function that will show 'N' or 'P' depending on the signal of the number passed as parameter, if the number is negative the function will show 'N' on the screen. If the number is positive or zero it will show 'P' on the screen. It is hard for first-time sailors in programming but it is as simple as it looks ("things will get worse, believe me!"), despite this terrifying message, although the true meaning inside of it, you will like to suffer there.

### C00 / ex05

Here things might start to be interesting, in this exercise we were challenged to create a function that would show in ascending order, all the different combinations between tree different numbers in ascending order. Yes it looks confusing, but it might be this way there.

- The output must looks like this:

#### $> 012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>

- 987 is out because 789 is present.

- 999 is out because this number doesn't have different numbers between them.