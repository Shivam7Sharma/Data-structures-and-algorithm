class Solution:
    def addBinary(self, a: str, b: str) -> str:

        va= int(a,2)
        vb= int(b,2)
        vf= va+vb

        return bin(vf)[2:]
        