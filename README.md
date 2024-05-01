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

Let's consider the following graph to understand DFS traversal. 

[<img src="images/1.jpg" width=rA"60%" alt="image_1"/>](https://private-user-images.githubusercontent.com/106438748/327190593-09cb1d88-e7e2-40b6-8549-72feba9924ab.jpg?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTQ1ODU0OTQsIm5iZiI6MTcxNDU4NTE5NCwicGF0aCI6Ii8xMDY0Mzg3NDgvMzI3MTkwNTkzLTA5Y2IxZDg4LWU3ZTItNDBiNi04NTQ5LTcyZmViYTk5MjRhYi5qcGc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwNTAxJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDUwMVQxNzM5NTRaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT00MjFiMGI5NTdiN2EwYmI4YTAzYjVhZGI2MzgxMmY3Yjc5ZWFhMjUxYTUxMjAwOTJiN2QwOGZjNzFlMzBiYjY2JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.Bs3wWfd3bqURIkGEPD2XmV6Ze-9gbpA6YIW_JxrlAkM)

Now we need to generate an input for the code. We can create an adjacency matrix from this graph.

<img src="images/2.jpg" width="60%" alt="image_2"/>

## Step 1:
Visit 0 and put its adjacent nodes which are not visited yet into the stack.


<img src="images/3.jpg" width="60%" alt="image_3"/>

## Step 2:

Now, Node 1 at the top of the stack, so visit node 1 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack.


<img src="images/4.jpg" width="60%" alt="image_4"/>

## Step 3:

Now, Node 2 at the top of the stack, so visit node 2 and pop it from the stack and put all of its adjacent nodes which are not visited ( 3, 4) in the stack.

<img src="images/5.jpg" width="60%" alt="image_5"/>
<img src="images/6.jpg" width="60%" alt="image_6"/>
<img src="images/7.jpg" width="60%" alt="image_7"/>

## Step 4:

Now, Node 4 at the top of the stack, so visit node 4 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack.

<img src="images/8.jpg" width="60%" alt="image_8"/>
<img src="images/9.jpg" width="60%" alt="image_9"/>
<img src="images/10.jpg" width="60%" alt="image_10"/>


## Step 5:

Now, Node 3 at the top of the stack, so visit node 3 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack.

And the DFS output starting from node "0" is: 0, 3, 5, 2, 4, 1
<img src="images/11.jpg" width="60%" alt="image_11"/>

<ul>
  <li>Now, Stack becomes empty, which means we have visited all the nodes and our DFS traversal ends.</li>
  <liAnd the DFS output starting from node "0" is: 0, 3, 5, 2, 4, 1</li>
</ul>

## Output of the Code:

<img src="images/output.png" width="60%" alt="output"/>

## Git Bash Screenshot:

<img src="images/git bash.png" width="60%" alt
