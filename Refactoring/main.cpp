/*

******************** Classical Bad Smell ****************************

These name have specific meaning and using them help us to talk in an
unambiguous way and avoid miscommunication.

=========================== Bloaters ===========================

1)Long Method
Generally, any method longer than ten lines should make you start asking
questions.

2)Large Class
Extract Class, Extract Subclass to solve the problem.

3)Primitive Obsession
If you use some data type like stri, int, etc and you pass it to various class,
method and they have to interpert it and do something about it, i.e. you send
tax number/ phone number as sting and every consumer has to interpert the number
/ decipher the number/ decompose it to some city code/ office code etc.
To solve it replace Data Value with Object.


4)Long Parameter List
More than three or four parameters for a method.


5)Data Clumps
when you have two or more piece of data that you always pass them toghther (i.e.
parameters for connecting to a database). These clumps should be turned into
their own classes. If you want to make sure any data is a data clump or not,
simply delete one of the data values and see if the other values are still
valid. If this is not the case, this is a good sign that it is appropriate to
incorporate this group of variables into an entity.


===================== Object-Orientation Abusers =======================
1)Switch Statements replace switch with
polymorphism.

2)Temporary Field

3)Refused Bequest
If a subclass only uses some of its parents ' inherited methods and resources,
 the hierarchy is off-kilter. The unneeded methods may either go unused or be
redefined to make exceptions usable.

4)Alternative Classes with Different Interfaces
Two classes perform identical functions but have different method names.


=========================== Change Preventers  ===========================
1)Divergent Change
2)Parallel Inheritance Hierarchies
3)Shotgun Surgery


=========================== Dispensables  ===========================

1)Comments
2)Duplicate Code
3)Data Class
4)Dead Code
5)Lazy Class
6)Speculative Generality

=========================== Couplers  ===========================
1)Feature Envy

Feature envy is a term used to describe a situation in which one object gets at
the fields of another object in order to perform some sort of computation or
make a decision, rather than asking the object to do the computation itself.

As a trivial example, consider a class representing a rectangle. The user of the
rectangle may need to know its area. The programmer could expose width and
height fields and then do the computation outside of the Rectangle class.
Alternatively, Rectangle could keep the width and height fields private and
provide a getArea method. This is arguably a better approach.

The problem with the first situation, and the reason it is considered a code
smell, is because it breaks encapsulation.

As a rule of thumb, whenever you find yourself making extensive use of fields
from another class to perform any sort of logic or computation, consider moving
that logic to a method on the class itself.

2)Inappropriate Intimacy
One class uses the internal fields and methods of another class.


3)Message Chains
In code you see a series of calls like: a->b()->c()->d()
It violates the "Law of Demeter" which says:
Only talk to your immediate friends.
violation of this law will cause proliferation of dependencies


4)Middle Man
If a class performs only one action, delegating work to another class, why does it exist at all?
A middle man may have been added to avoid interclass dependencies.
Some design patterns create middle man on purpose (such as Proxy or Decorator).
*/
#include <iostream>
int main()
{
    std::cout << 10 << std::endl;
}
