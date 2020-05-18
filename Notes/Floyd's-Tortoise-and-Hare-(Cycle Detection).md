Given a linked list, return the node where the cycle begins.<br />

First of all, where does the cycle come from? Let's use the function f(x) = nums[x] to construct the sequence: x, nums[x], nums[nums[x]], nums[nums[nums[x]]], ....<br />

Each new element in the sequence is an element in nums at the index of the previous element.<br />

If one starts from x = nums[0], such a sequence will produce a linked list with a cycle.<br />

The cycle appears because nums contains duplicates. The duplicate node is a cycle entrance.<br />

**Algorithm::**<br />

Floyd's algorithm consists of two phases and uses two pointers, usually called tortoise and hare.<br />

*In phase 1*,<br />

hare = nums[nums[hare]] is twice as fast as tortoise = nums[tortoise].<br /> 
Since the hare goes fast, it would be the first one who enters the cycle and starts to run around the cycle.<br /> 
At some point, the tortoise enters the cycle as well, and since it's moving slower the hare catches the tortoise up at some intersection point.<br /> 
Now phase 1 is over, and the tortoise has lost.<br />

To compute the intersection point, let's note that the hare has traversed twice as many nodes as the tortoise, i.e. 2d(tortoise)==d(hare), that means<br />

2(F + a) = F + nC + a2(F+a)=F+nC+a, where nn is some integer.<br />

*In phase 2*,<br />

we give the tortoise a second chance by slowing down the hare, so that it now moves with the speed of tortoise: tortoise = nums[tortoise], hare = nums[hare].<br /> 
The tortoise is back at the starting position, and the hare starts from the intersection point.<br />

Let's show that this time they meet at the cycle entrance after FF steps.<br />

..The tortoise started from zero, so its position after FF steps is FF.<br />

..The hare started at the intersection point F + a = nCF+a=nC, so its position after F steps is nC + FnC+F, that is the same point as FF.<br />

..So the tortoise and the (slowed down) hare will meet at the entrance of the cycle.<br />

**Proof::**<br />

let F be the length upto starting point of cycle, C be the length of the Cycle.suppose we got some intersection point at a in the loop.<br />
*Phase-1::*<br />

From<br />
2d(tortoise)==d(rabbit/hare)<br />
2(F+a+t*C) = (F+a+r*c)<br />
there for F+a = (r-2t).<br />
here r,t are the no of cycles that rabbit and tortoise rounded before meeting at intersection point.<br />

*Phase-2::*<br />
to meet at starting point the tortoise should move by distance F+a+N*c; and rabbit should move the distance C-a+a+N*c; Hence proved :) <br />