# DFS Algorithm withk Steps 

### Depth First Search: Algorithm
<ol>
  <li>Take the adjacency matrix as input.</li>
  <li>Define a stack with size of total number of nodes.</li>
  <li>Select any node as the starting point of traversal and push it in the stack.</li>
  <li>Check if it has any unvisited neighbour nodes. If so push it in the stack</li>
  <li>Repeat step 4 untill there is no neighbour node of the node which is at the top of the stack.</li>
  <li>Pop the node from the top of the stack.</li>
  <li>Repeat step 4, 5 and 6 untill the stack is empty.</li>
  <li>When the stack is empty the whole graph is traversed.</li>
</ol>

### Depth First Search: Procedure

Let's consider the following graph to understand DFS traversal. And creat an adjacency matrix from this graph to generate input for the code

![1](https://github.com/Sabbir-Aahmed/Assignment-DFS-/assets/106438748/80f54d34-613d-47d4-bd7d-6aafa87c5b11)


## Step 1:
Visit 0 and put its adjacent nodes which are not visited yet into the stack.


<img src="images/2.jpg" width="60%" alt="image_2"/>

## Step 2:

Now, Node 1 at the top of the stack, so visit node 1 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack.


<img src="images/3.jpg" width="60%" alt="image_3"/>

## Step 3:

Now, Node 2 at the top of the stack, so visit node 2 and pop it from the stack and put all of its adjacent nodes which are not visited ( 3, 4) in the stack.

<img src="images/4.jpg" width="60%" alt="image_4"/>

## Step 4:

Now, Node 4 at the top of the stack, so visit node 4 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack.

<img src="images/5.jpg" width="60%" alt="image_5"/>

## Step 5:

Now, Node 3 at the top of the stack, so visit node 3 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack.

And the DFS output starting from node "0" is: 
<img src="images/6.jpg" width="60%" alt="image_6"/>

<ul>
  <li>Now, Stack becomes empty, which means we have visited all the nodes and our DFS traversal ends.</li>
  <liAnd the DFS output starting from node "0" is: 0, 3, 2, 4, 1</li>
</ul>

## Output of the Code:

<img src="images/output.png" width="60%" alt="output"/>

## Git Bash Screenshot:

<img src="images/git bash.png" width="60%" alt="git bash"/>
