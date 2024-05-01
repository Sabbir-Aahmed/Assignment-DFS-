# DFS Algorithm withk Steps 

### Depth First Search: Algorithm
<ol>
  <li>Take the adjacency matrix as input.</li>
  <li>Define a stack with size of total number of nodes.</li>
  <li>Select any node as the starting point of traversal and push it in the stack.</li>
  <li>Check if it has any unvisited neighbour nodes. If so push it in the stack</li>
  <li>Repeat step 4 untill there is no connected node of the node which is at the top of the stack.</li>
  <li>Pop the node from the top of the stack.</li>
  <li>Repeat step 4, 5 and 6 untill the stack is empty.</li>
  <li>When the stack is empty the whole graph is traversed.</li>
</ol>

### Depth First Search: Procedure

Let's consider the following graph to understand DFS traversal. And creat an adjacency matrix from this graph to generate input for the code

![1](https://github.com/Sabbir-Aahmed/Assignment-DFS-/assets/106438748/80f54d34-613d-47d4-bd7d-6aafa87c5b11)


## Step 1:
Visit 0 and put its adjacent nodes which are not visited yet into the stack.


![2](https://github.com/Sabbir-Aahmed/Assignment-DFS-/assets/106438748/52276cfd-04a6-42c4-a6ac-25ea300a6b40)

## Step 2:

Now, Node 1 at the top of the stack, so visit node 1 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack.


![3](https://github.com/Sabbir-Aahmed/Assignment-DFS-/assets/106438748/9373aebb-93af-45d6-be91-051ffa747ad3)

## Step 3:

Now, Node 2 at the top of the stack, so visit node 2 and pop it from the stack and put all of its adjacent nodes which are not visited ( 3, 4) in the stack.

![4](https://github.com/Sabbir-Aahmed/Assignment-DFS-/assets/106438748/fd53e84a-8450-40f3-a504-21157ba71716)

## Step 4:

Now, Node 4 at the top of the stack, so visit node 4 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack.

![5](https://github.com/Sabbir-Aahmed/Assignment-DFS-/assets/106438748/0fec7282-5614-4727-bdf0-62579ed2a999)

## Step 5:

Now, Node 3 at the top of the stack, so visit node 3 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack.

![6](https://github.com/Sabbir-Aahmed/Assignment-DFS-/assets/106438748/a98d8db4-a205-4e49-8710-6a3f719d32a2)

<ul>
  <li>Now, Stack becomes empty, which means we have visited all the nodes and our DFS traversal ends.</li>
  <li>And the DFS output starting from node "0" is: 0, 3, 2, 4, 1</li>
</ul>

## Output of the Code:

![output](https://github.com/Sabbir-Aahmed/Assignment-DFS-/assets/106438748/26f4174b-5b78-41c5-b443-629d588cc58a)

## Git Bash Screenshot:

![Git bash](https://github.com/Sabbir-Aahmed/Assignment-DFS-/assets/106438748/95584f80-471c-475a-882e-cf43f8b7be76)
