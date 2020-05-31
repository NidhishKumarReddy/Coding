**Addition**<br />
    (a%p + b%p)%p<br />

**Multiplication**<br />
    (a%p * b%p)%p<br />

**Subtraction**<br />
    ((a - b)%p + p )%p<br />

**Division**<br />
    *if p is prime number*<br />
    (a%p * power(b, p-2)%p)%p<br />
    *else*<br />
    (a%p * power(b,(phi(p) - 1))%p)%p<br />

Here phi(p) is the numbers smaller than p and coprime with p i.e is gcd is 1.<br />
Remember that we should not use any inbuilt function for power. instead use binary exponentation method to calculate. :)<br />

