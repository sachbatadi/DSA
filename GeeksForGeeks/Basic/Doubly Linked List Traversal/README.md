# Doubly Linked List Traversal

## Difficulty: Basic

## Platform: GeeksForGeeks

## Problem Link
[View Problem](https://www.geeksforgeeks.org/problems/display-doubly-linked-list--154650/1)

## Solved On
09 Sept 2026 at 02:12 pm

<h2><a href="https://www.geeksforgeeks.org/problems/display-doubly-linked-list--154650/1">Doubly Linked List Traversal</a></h2><h3>Difficulty Level: Basic</h3><hr><p><span style="font-size: 14pt;">Given head of a doubly linked list containing n nodes, return a 2D array where:</span></p>
<ul>
<li><span style="font-size: 14pt;">The <strong>first row </strong>contains the elements obtained by traversing the linked list in <strong>forward </strong>direction.</span></li>
<li><span style="font-size: 14pt;">The <strong>second row </strong>contains the elements obtained by traversing the linked list in <strong>backward </strong>direction.</span></li>
</ul>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>head: 1 &lt;-&gt; 2 &lt;-&gt; 3 &lt;-&gt; 4 &lt;-&gt; 5<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/927508/Web/Other/blobid0_1779163109.webp" width="422" height="80"> <br><strong>Output: </strong>[[1, 2, 3, 4, 5], [5, 4, 3, 2, 1]]<br><strong>Explanation: </strong>After traversing forward the linked list will look like 1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; 5 and from backward will 5 -&gt; 4 -&gt; 3 -&gt; 2 -&gt; 1.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>head: 34 &lt;-&gt; 22<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/927508/Web/Other/blobid1_1779163135.webp" width="239" height="80"> <br><strong>Output: </strong>[[34, 22], [22, 34]]<br><strong>Explanation: </strong>After traversing forward the linked list will look like 34 -&gt; 22 and from backward will 22 -&gt; 34.</span></pre>
<p><strong style="font-size: 18px;">Constraints:</strong><br style="font-size: 18px;"><span style="font-size: 18px;">1&nbsp;</span><span style="font-size: 18.6667px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">≤</span><span style="font-size: 18.6667px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">&nbsp;</span><span style="font-size: 18px;">n&nbsp;</span><span style="font-size: 18.6667px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">≤</span><span style="font-size: 18.6667px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">&nbsp;</span><span style="font-size: 18px;">10<sup>5</sup></span><br style="font-size: 18px;"><span style="font-size: 18px;">0&nbsp;</span><span style="font-size: 18.6667px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">≤</span><span style="font-size: 18.6667px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> data</span><span style="font-size: 18px;">&nbsp;of nodes </span><span style="font-size: 18.6667px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">≤</span><span style="font-size: 18.6667px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">&nbsp;</span><span style="font-size: 18px;">10<sup>5</sup></span></p>