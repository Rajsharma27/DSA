from is_sorted import is_sorted
def arenumbersascending(s):
    list = []
    for i in s.split():
        if i.isdigit():
            list.append(int(i))
        
    return is_sorted(list)

print(arenumbersascending('hi 1 my 4 girl 6 here 10'))