#User function Template for python3
class Solution:
    def isVowel (ob,c):
        # code here 
        vowels = {'a', 'e', 'i', 'o', 'u'}
        return "YES" if c.lower() in vowels else "NO"
