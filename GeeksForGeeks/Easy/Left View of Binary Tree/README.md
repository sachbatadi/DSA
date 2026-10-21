# Left View of Binary Tree

## Difficulty: Easy

## Platform: GeeksForGeeks

## Problem Link
[View Problem](https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1)

## Solved On
21 Oct 2026 at 04:02 pm

<h2><a href="https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1">Left View of Binary Tree</a></h2><h3>Difficulty Level: Easy</h3><hr><p><span style="font-size: 14pt;">Given the <strong>root </strong>of a binary tree. Return the left view of the binary tree. </span><span style="font-size: 14pt;">The left view of a binary tree is the set of nodes visible when the tree is viewed from the left side.</span></p>
<p><span style="font-size: 14pt;"><strong>Note:</strong> If the tree is empty, return an empty list.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root = [1, 2, 3, 4, 5, N, N] <br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700174/Web/Other/blobid0_1785586075.png" width="210" height="175"> <br><strong>Output:</strong>[1, 2, 4]<strong><br></strong><strong>Explanation: </strong>From the left side of the tree, only the nodes 1, 2, and 4 are visible.<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700174/Web/Other/blobid1_1785586111.png" width="214" height="178"><br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root = [1, 2, 3, N, N, 4, N, N, 5, N, N]<strong><br></strong><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700174/Web/Other/blobid2_1785504482.png" width="190" height="234">
<strong>Output: </strong>[1, 2, 4, 5]<br><strong>Explanation: </strong>From the left side of the tree, only the nodes 1, 2, 4, and 5 are visible.<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/933233/Web/Other/blobid0_1787828266.png" alt="" width="233" height="223"></span></pre>