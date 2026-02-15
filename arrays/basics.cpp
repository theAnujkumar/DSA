/*
🟢 BASIC THEORY QUESTIONS (Very common)
1️⃣ What is an Array?

Array ek linear data structure hai jo same data type ke elements ko contiguous memory locations me store karta hai.

2️⃣ Why arrays are faster than linked lists?

Arrays me direct indexing (O(1)) hoti hai

Linked list me traversal lagta hai (O(n))

3️⃣ What is contiguous memory allocation?

Array ke elements memory ke adjacent blocks me store hote hain, isliye access fast hota hai.

4️⃣ Difference between array and linked list
Array	Linked List
Fixed size	Dynamic size
Fast access	Slow access
Memory waste ho sakta hai	Extra memory for pointers
5️⃣ What is index of an array?

Index array element ka position number hota hai, jo usually 0 se start hota hai.

6️⃣ Can array size be changed at runtime?

❌ Normal array me nahi
✅ Dynamic array (vector, malloc) se ho sakta hai

🟡 MEDIUM THEORY QUESTIONS (Technical rounds)
7️⃣ What is time complexity of array operations?
Operation	Time
Access	O(1)
Search	O(n)
Insertion	O(n)
Deletion	O(n)
8️⃣ Why insertion and deletion are costly in array?

Kyunki elements ko shift karna padta hai to maintain order.

9️⃣ What is static vs dynamic array?

Static: compile time size (int arr[10])

Dynamic: runtime size (vector, malloc)

🔟 What is sparse array?

Jis array me majority elements zero hote hain.

1️⃣1️⃣ What is array overflow?

Jab array ke allocated size se bahar access karte hain → runtime error / undefined behavior.

1️⃣2️⃣ What is difference between 1D and 2D array?

1D → linear list

2D → matrix form (rows & columns)

🔴 ADVANCED THEORY QUESTIONS (Product-based level)
1️⃣3️⃣ Why arrays are not preferred when size is unknown?

Fixed size

Memory waste ya shortage

Reallocation costly

1️⃣4️⃣ What is cache friendliness in arrays?

Arrays contiguous memory use karte hain → CPU cache me easily load ho jata hai → faster performance.

1️⃣5️⃣ What is difference between array and vector in C++?
Array	Vector
Fixed size	Dynamic size
No bounds check	Has bounds check
Faster	Slightly slower
1️⃣6️⃣ What happens when array is passed to a function?

Array pointer ke form me pass hota hai (address pass hota hai).

1️⃣7️⃣ Can we return an array from a function?

❌ Directly nahi
✅ Pointer / vector ke through

1️⃣8️⃣ Why indexing starts from 0?

Address calculation easy hoti hai:
address = base + index × size

1️⃣9️⃣ Difference between array and pointer?

Array = collection of elements

Pointer = address store karta hai

Array ka name constant hota hai

2️⃣0️⃣ What is multi-dimensional array memory layout?

Row major order (C/C++)

Column major order (Fortran)

🧠 MOST ASKED ONE-LINERS (Rapid fire)

Array is homogeneous

Indexing is zero-based

Array access is O(1)

Array size is fixed

Arrays are cache friendly

🎯 INTERVIEW TIP

“Explain Array” — 2-Minute Perfect Answer

Array ek linear data structure hai jo same data type ke elements ko contiguous memory locations me store karta hai.
Har element ko index ke through access kiya jaata hai, isliye array ka access time O(1) hota hai.

Advantages:

Fast access

Simple implementation

Cache friendly

Limitations:

Fixed size

Insertion/deletion costly

Memory wastage possible

Example:
Marks list, matrix, frequency count, lookup tables.

⚡ Rapid-Fire Viva Questions (Most Asked)
Q1. Array kyu fast hota hai?

👉 Kyunki direct indexing hoti hai aur memory contiguous hoti hai.

Q2. Array aur Linked List me main difference?

👉 Array me fast access, Linked List me dynamic size.

Q3. Array ka size kab decide hota hai?

👉 Static array → compile time
👉 Dynamic array → runtime

Q4. Array overflow kya hota hai?

👉 Jab allocated size se bahar element access kiya jaata hai.

Q5. Array pass karne par function ko kya milta hai?

👉 Array ka base address (pointer).

Q6. Kya array ka name change kar sakte hain?

👉 ❌ Nahi, array ka name constant hota hai.

Q7. Why index starts from 0?

👉 Address calculation easy hoti hai:
base + index × size

Q8. 2D array memory me kaise store hota hai?

👉 Row-major order (C/C++).

Q9. Array insertion slow kyu hota hai?

👉 Elements ko shift karna padta hai.

Q10. Vector array se better kyu hai?

👉 Dynamic size, automatic memory management.

🟡 5-MARKS THEORY ANSWERS (AKTU / Exam Ready)
Explain advantages & disadvantages of array

Advantages:

Fast access (O(1))

Easy traversal

Cache friendly

Disadvantages:

Fixed size

Memory wastage

Insertion/deletion costly

Differentiate static and dynamic array
Static Array	Dynamic Array
Fixed size	Runtime size
Stack memory	Heap memory
Faster	Slightly slower
🔴 TRICKY INTERVIEW QUESTIONS (With Smart Answers)
❓ Can array store different data types?

👉 ❌ No, array is homogeneous.

❓ Which is better: array or linked list?

👉 Depends on use case:

Fast access → Array

Dynamic insertion → Linked List

❓ Why array is not used for large data always?

👉 Fixed size + memory issues.

🏁 FINAL INTERVIEW TIP

Array answers me hamesha bolo:

Time complexity

Memory behavior

Real-life example
*/