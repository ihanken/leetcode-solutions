# Python Solution for 10 - Regular Expression Matching

## Approach

This is a great example of a dynamic programming problem because the results of the previous substrings informs the overall result. We have a base case
(`p = ''` and `s = ''`), and we know that any matcher with only `*` matchers will be capable of matching any empty string. Thus, at any given point, we
can say that there is a match if the corresponding previous substrings matched and either the corresponding character in the string match, or there is
a `*` matcher that can fill any number of characters. Let's look at an example: `s = 'aa'` and `p = 'a*'`:

We know that a pattern of `''` matches the string `''`, so we have a base case of `true`. We also know that the patten `'a*'` will match `''` since we
could just insert no characters at all. From here, we just need to go through the corresponding characters to determine matchability. `'a*'` matches `'a'`,
since we can just insert 1 `a`, and since we have that happen twice, we can say the answer is `'a*' matches 'a' AND 'a*' matches 'a'`, since we are just
matching on `'a'` twice. This is a pretty trivial example, but if you consider the case where the second `'a'` was actually a `'b'`, you start to see how this
approach could be used to solve for any pair of strings.

## Explanation

Create a cache using a 2D array of size `length(p) + 1 x length(s) + 1`. We'll call this `cache`. Set `cache[0][0]` to `true`, since a pattern of `''` matches
an empty string. Then, iterate through `cache[i][0] for i > 1` and set `cache[i + 1][0]` to `cache[i - 1][0]` if `cache[i]` is `'*'`. This is to determine how
far into the pattern we can match an empty string.

Now iterate through every index pair `(i, j)` of `cache`. For a given index, we want to determine if there is a `*` at `pattern[i]`. If there isn't we can simply say that
`cache[i + 1][j + 1] = true iff cache[i][j] == true AND (pattern[i] == string[i] OR pattern[i] == '.'`. In other words, if we can match single corresponding characters in
the two strings, we can carry forward the same truth value as the previous corresponding characters.

If `pattern[i]` IS `'*'`, then we need to handle a few special cases:

1. If the strings matched before the character that preceded the `*`, then the strings still match.
2. If the strings matched up to the character that preceded the `*`, then the strings still match.
3. If there are character preceding the `*` matched up to the character in the string, the strings match if the strings matched up to that point.

Do this for the entire string, and the answer will be in the final index pair of the cache.