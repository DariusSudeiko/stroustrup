/*Task 17
The Rational class could provide more accurate results compared to the Money class in operations 
that involve fractions, especially when the operations could lead to repeating decimal fractions.

As an example, suppose you have an operation that involves dividing money into three equal parts.
Using the Money class, if you have $10 and divide it by 3, you will get $3.33 due to the limitations
of floating point precision. If you then multiply this result by 3, you'll get $9.99 rather than the original $10.

On the other hand, if you use the Rational class to represent the same operation with the fraction 10/3,
the division remains accurate because it's kept as a fraction. If you then multiply 10/3 by 3,
you'll get exactly 10, not 9.99.*/

/*Task 18 
Let's use an example of dividing 1 by 3, and then multiplying the result by 3.

If you were using double values:
cpp
Copy code
double a = 1.0;
double b = 3.0;
double result = (a / b) * b; // this should equal 1.0

cout << result << endl;
Due to the limitations of floating-point precision, the result might not exactly be 1.0,
but something like 0.99999999999999989.

Now, if you do the same operation using the Rational class:

cpp
Copy code
Rational a(1, 1); // represents 1
Rational b(3, 1); // represents 3

Rational result = (a / b) * b;

cout << result.get_full() << endl; // using the get_full() method to get the decimal value
This will print out 1.0, exactly as expected.

This is because the Rational class keeps the values as fractions,
thereby avoiding the precision issues that can arise with floating-point numbers when dealing
with certain mathematical operations, especially ones that involve repeating decimals.*/