class Solution:
    def isValid(self, s: str) -> bool:
        stack, map = [], { ')':'(', ']':'[', '}':'{' }
        for c in s:
            if c in map.values():
                stack.append(c)
            else:
                if stack == [] or map[c] != stack.pop():
                    return False
        return stack == []
