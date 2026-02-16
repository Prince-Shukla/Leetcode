class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversed = 0;

        for (int i = 0; i < 32; i++) {
            reversed <<= 1;          // make space
            reversed |= (n & 1);     // take last bit of n
            n >>= 1;                 // move to next bit
        }

        return reversed;
    }
};
