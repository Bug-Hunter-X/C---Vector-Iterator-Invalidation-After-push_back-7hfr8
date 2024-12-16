# C++ Vector Iterator Invalidation Bug
This repository demonstrates a common error in C++ involving iterator invalidation when using `std::vector`.  The `push_back` operation can potentially invalidate existing pointers or iterators.  This example shows how accessing the vector through a raw pointer after resizing can lead to undefined behavior.

## The Bug
The code in `bug.cpp` iterates over a vector using a raw pointer. After resizing the vector with `push_back`, the code continues to access the vector through the same pointer, which now points to invalid memory. This can cause unexpected results or crashes.

## The Solution
The solution in `bugSolution.cpp` demonstrates the correct way to handle potential iterator invalidation. It shows how to avoid using raw pointers and instead relies on iterators provided by the `std::vector` container. 
