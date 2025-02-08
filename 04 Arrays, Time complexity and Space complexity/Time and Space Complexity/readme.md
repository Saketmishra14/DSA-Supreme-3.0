An introduction to Time and Space complexity
What is Time Complexity?
Amount of time taken by an algorithm to run as a function of length of input.

For example,
  for(int i = 0; i<N; i++){
  cout<<i;
  };

  f ∝ N
N ↑ ⇒ time taken ↑ or number of operations ↑

What is Space Complexity?

Amount of space taken by an algorithm to run as a function of length of input.

For example, SC: O(1)

  int a = 5;

  For example, SC: O(N)

  int *b = new int[N];

  For example, SC: O(N2)

    int *c = new int[N^2];

   Units to represent complexity

   1.Big O: upper bound(worst case)
   2.Theta Θ: average case
   3. Omega Ω: lower bound(best case)

   Big O Complexities

  Constant Time : O(1)
  Linear Time : O(n)
  Logarithmic Time : O(logn)
  Quadratic Time : O(n2)
  Cubic Time : O(n3)
  Exponential time: O(2n)
  Factorial time : O(n!)
 
![alt text](68747470733a2f2f6d69726f2e6d656469756d2e636f6d2f76322f726573697a653a6669743a313335382f312a645765745f59552d353037324b636b6f374c7a7375512e6a706567.jpg)

increasing order of complexity
O(1), O(logn), O(√n), O(n), O(nlogn), O(n2), O(n3), O(2n), O(N!), O(Nn)