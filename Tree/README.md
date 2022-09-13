Some basic definitions 
Heap: Complete binary tree(not rly), which can be used to access elements in log N time. For example the kth largest and the kth smallest elements can be accessed as such . 

we have the height of a tree to be atmost log N

a binary tree ; we can add a node and remove a node as well.

add(e) and remove(e)

heap implementation requires add and remove operations .
//in an array based implementation
we have to use root at 0th index 
and for left node a[2*i] and for right node a[2*i+1]

how to maintain the heap order.

do something to the tree in order to maintain the heap order

we wont hurt the completeness, if we remove the last node.

we can get back to the same order as and when necessary
the completeness is still maintained.


when we build a heap,

put the min as the last node, when we remove min, make sure to do something such that the minimum element is the last node

we are to impplement priority queue as a hea

new last node, we shall insert there,
while insertion of the element, we have to bubble the elemet till the root is the minima, basically, the topmost element has to be the min element of all the elements in a tree.

adjust the path such that we reach the min of the tree.

continue the swap till we reach the root.

basically logN comparisons,for each insertion 
insertion LogN-> min element at O(1)
not bad.

NLogN insertion for all the elements of the tree.
the deal about this is that we insert it as the last node,
make it the new last node and do the upward swaps till the new node gets to the right place

after insertion, the heap would look like....
-> min-min2 --min2 ---4 min3's and so on..

keep a pointer to the last node.

we have the upheap here, after the insertion of the new key k, the heap order priority may be violated


UPHEAP is the funtion that maintains the heap order after each insertion
downhill is the way to go lel

we do not violate the heap order.
logN is the height of the leaf and therefore the time taken would be equal to logN

