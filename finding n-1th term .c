#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find nth term 
int term(int n) 
{ 
    return n * (n + 1) / 2; 
} 
  
// Driver code 
int main() 
{ 
    int n = 4; 
    cout << term(n); 
    return 0; 
}  