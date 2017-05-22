class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        # Split the string on spaces, reverse each word, and then rejoin the
        # string with spaces.
        return ' '.join(word[::-1] for word in s.split())
