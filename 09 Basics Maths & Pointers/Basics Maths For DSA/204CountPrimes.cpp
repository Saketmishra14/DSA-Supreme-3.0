#include<iostream>
using namespace std;
// leetcode 204: Count Primes

// M-3 -> sieve of Eratosthenes: TC: O(N*(log(logN)))
class Solution {
public:

    int countPrimes(int n) {
       if(n==0) return 0;
       vector<bool> prime(n,true);
       prime[0]=prime[1]=false;
       int ans=0;
       for(int i=2;i<n;i++){
        if(prime[i]){
            ans++;
            int j=2*i;
            while(j<n){
                prime[j]=false;
                j+=i;
            }
        }
       }
        return ans;
       }
       
};

// M-2 -> sqrt approach to better isPrime() function
class Solution {
public:
bool isprime(int n){
    if(n<=1) return false;
    int sqrtN=sqrt(n);
   for(int i=2;i<sqrtN;i++){
    if(n % i==0){
        return false;
    }
         
   }
   return true;
}
    int countPrimes(int n) {
        int count =0;
        for(int i=0;i<n;i++){
            if(isprime(i)){
                count++;
            }
        }
        return count;
    }
};


// M-1 -> naive approach: TLE: O(N^2)
class Solution {
public:
bool isprime(int n){
    if(n<=1) return false;
   for(int i=2;i<n;i++){
    if(n % i==0){
        return false;
    }
         
   }
   return true;
}
    int countPrimes(int n) {
        int count =0;
        for(int i=0;i<n;i++){
            if(isprime(i)){
                count++;
            }
        }
        return count;
    }
};