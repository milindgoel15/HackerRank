def mutate_string(string, position, character):
    listStr = list(string)
    listStr[position] = character
    fullString = ''.join(listStr)
    return fullString

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)