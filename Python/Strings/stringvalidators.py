def checkAlphanumeric(s):
    for i in range(len(s)):
        if (s[i].isalnum()):
            return True
    return False
def checkAlphabetical(s):
    for i in range(len(s)):
        if (s[i].isalpha()):
            return True
    return False
def checkdigits(s):
    for i in range(len(s)):
        if (s[i].isdigit()):
            return True
    return False
def checkLower(s):
    for i in range(len(s)):
        if (s[i].islower()):
            return True
    return False
def checkUpper(s):
    for i in range(len(s)):
        if (s[i].isupper()):
            return True
    return False

if __name__ == '__main__':
    s = input()
    
    print(checkAlphanumeric(s))
    print(checkAlphabetical(s))
    print(checkdigits(s))
    print(checkLower(s))
    print(checkUpper(s))
