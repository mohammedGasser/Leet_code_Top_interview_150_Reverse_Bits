//============================================================================
// Name        : Reverse_Bits.cpp
// Author      : Machine Minds /Mohamed Gasser
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

   unsigned int arr[32]={0};

 for(int i=0; i<32;i++)
 {
     arr[i]|=((n>>i)&1);

 }
 n=0;
 for(int i=31,j=0;i>=0;i--)
 {

   n |=(arr[i]<<j);

     j++;

 }
return n;
    }
};
///////another solution /////
class Solution2
{
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for (int i = 0; i < 32; i++) {
            ans =  ans<<1;
            if(n&1){
                ans=ans|1;
            }
            n = n>>1;
        }
        return ans;
    }
};

Solution S1;
int main() {

	int result=S1.reverseBits(30);
	cout << result << endl; // prints !!!Hello World!!!
	return 0;
}
