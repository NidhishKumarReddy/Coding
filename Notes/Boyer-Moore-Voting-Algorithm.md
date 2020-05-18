###Finding the Majority-Element 

#Step.1
Intialize count = 1
Intialize candidate = a[0]
#Step.2
Start Iterating From a[1] of the array
#Step.3
So, whenever u see the candidate increment the count
otherwise decrement the count
#Step.4
Whenever count equals 0, we forget about everything in 
nums up to the current index and consider the current number 
as the candidate for majority element. Make count equal to 1.
#Step.5 
After iterating whole array, the value in candidate is our majority
element.

###Verifying the Majority-Element

#Step.1
Now count how many occurrences of the majority element in the array
(i.e,) to iterate to whole the array
#Step.2
If count>n/2 then we got the majority element :)


