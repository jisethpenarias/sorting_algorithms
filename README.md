<h1 class="gap"> Project 0x1B. C - Sorting algorithms &amp; Big O</h1>
<p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/248/willy-wonka.png" /><br />
<br /></p>

<h2>Learning Objectives</h2>
<h3>General</h3>

<ul>
<li>At least four different sorting algorithms</li>
<li>What is the Big O notation, and how to evaluate the time complexity of an algorithm</li>
<li>How to select the best sorting algorithm for a given input</li>
<li>What is a stable sorting algorithm</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 14.04 LTS</li>
<li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> and <code>-pedantic</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like <em>printf, puts, &hellip;</em> is totally forbidden.</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>sort.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>A list/array does not need to be sorted if its size is less than 2.</li>
</ul>

<h2>More Info</h2>

<h3>Data Structure and Functions</h3>

<ul>
<li>For this project you are given the following <code>print_array</code>, and <code>print_list</code> functions:</li>
</ul>

<pre><code>#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array &amp;&amp; i &lt; size)
    {
        if (i &gt; 0)
            printf(&quot;, &quot;);
        printf(&quot;%d&quot;, array[i]);
        ++i;
    }
    printf(&quot;\n&quot;);
}
</code></pre>

<pre><code>#include &lt;stdio.h&gt;
#include &quot;sort.h&quot;

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i &gt; 0)
            printf(&quot;, &quot;);
        printf(&quot;%d&quot;, list-&gt;n);
        ++i;
        list = list-&gt;next;
    }
    printf(&quot;\n&quot;);
}
</code></pre>

<ul>
<li>Our files <code>print_array.c</code> and <code>print_list.c</code> (containing the <code>print_array</code> and <code>print_list</code> functions) will be compiled with your functions during the correction.</li>
<li>Please declare the prototype of the functions <code>print_array</code> and <code>print_list</code> in your <code>sort.h</code> header file</li>
<li>Please use the following data structure for doubly linked list:</li>
</ul>

<pre><code>/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
</code></pre>

<p>Please, note this format is used for Quiz and Task questions.</p>

<ul>
<li><code>O(1)</code></li>
<li><code>O(n)</code></li>
<li><code>O(n!)</code></li>
<li>n square -&gt; <code>O(n^2)</code></li>
<li>log(n) -&gt; <code>O(log(n))</code></li>
<li>n * log(n) -&gt; <code>O(nlog(n))</code></li>
<li>n + k -&gt; <code>O(n+k)</code></li>
<li>&hellip;</li>
</ul>

<p>Please use the &ldquo;short&rdquo; notation (don&rsquo;t use constants). Example: <code>O(nk)</code> or <code>O(wn)</code> should be written <code>O(n)</code>.
If an answer is required within a file, all your answers files must have a newline at the end.</p>

<h3>Tests</h3>
<p> quick tip to test the sorting algorithms with big set of random integers: <a href="https://www.random.org/integer-sets/" title="Random.org" target="_blank">Random.org</a></p>


<h2 class="gap">Tasks</h2>
<h4 class="task">
    0. Bubble sort
</h4>
<p>Write a function that sorts an array of integers in ascending order using the <a href="/rltoken/fCItpIfgmE07fFbHBUToeg" title="Bubble sort" target="_blank">Bubble sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void bubble_sort(int *array, size_t size);</code></li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>0-O</code>, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>


<h4 class="task">
    1. Insertion sort
</h4>
<p>Write a function that sorts a doubly linked list of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Insertion_sort" title="Insertion sort" target="_blank">Insertion sort</a> algorithm</p>
<ul>
<li>Prototype: <code>void insertion_sort_list(listint_t **list);</code></li>
<li>You are not allowed to modify the integer <code>n</code> of a node. You have to swap the nodes themselves.</li>
<li>You&rsquo;re expected to print the <code>list</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>1-O</code>, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

<h4 class="task">
    2. Selection sort
</h4>
<p>Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Selection_sort" title="Selection sort" target="_blank">Selection sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void selection_sort(int *array, size_t size);</code></li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>2-O</code>, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

 <h4 class="task">
    3. Quick sort
</h4>
<p>Write a function that sorts an array of integers in ascending order using the <a href="https://en.wikipedia.org/wiki/Quicksort" title="Quick sort" target="_blank">Quick sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void quick_sort(int *array, size_t size);</code></li>
<li>You must implement the <code>Lomuto</code> partition scheme.</li>
<li>The pivot should always be the last element of the partition being sorted.</li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>3-O</code>, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>



<p> Plus 9 advanced tasks </p>