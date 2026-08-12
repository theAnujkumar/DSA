/*
C++ me normal function (iterative) ko recursive function me convert karne 
ka tareeka bilkul same logical steps follow karta hai.

Iterative loop me aap variable update karte ho, jabki recursion me aap same 
function ko modified arguments ke saath call karte ho:

Base Case: Loop kahan rukta hai? Jab array end ho jaye (index == size).

Recursive Step: Current element + baki ke array ka sum (arr[index] + sumArrayRecursive(arr, size, index + 1)).

Comparison: Iterative vs. Recursive (C++)


1. Iterative Approach (Loop ke saath)
Isme hum ek for loop aur accumulate karne ke liye sum variable ka use karte hain.


2. Recursive Approach (Function call ke saath)
Isme hum loop ke bajaye function ko hi dubara call karte hain and 
index ko aage badhate hain.





1
Loop ki stop condition check karo
Base Case Banao
Iterative loop jab khatam hota hai (e.g., i == arr.size()), wahi aapka if 
condition base case banega jo return karega.

2
Iterative variables ko Function Parameters banao
Arguments me State Paas Karo
Loop ke temporary variables (jaise i) ko function parameter me pass karo 
taaki agli call me state update ho sake (index + 1).

3
Self-calling return statement likho
Memory Stack Call
Current index ki value me baaki bache kaam ko add/combine kar ke function
 dobara call kar do.
*/