###Finding the Majority-Element 

#Step.1<br />
Intialize count = 1<br />
Intialize candidate = a[0]<br />
#Step.2<br />
Start Iterating From a[1] of the array<br />
#Step.3<br />
So, whenever u see the candidate increment the count<br />
otherwise decrement the count<br />
#Step.4<br />
Whenever count equals 0, we forget about everything in <br />
nums up to the current index and consider the current number <br />
as the candidate for majority element. Make count equal to 1.<br />
#Step.5<br />
After iterating whole array, the value in candidate is our majority<br />
element.<br />

###Verifying the Majority-Element<br />

#Step.1<br />
Now count how many occurrences of the majority element in the array<br />
(i.e,) to iterate to whole the array<br />
#Step.2<br />
If count>n/2 then we got the majority element :)<br />


