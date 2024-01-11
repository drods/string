flags = ['-', "", '0', '#']
width = [0, 5, 10, '*', ""]
d = set(["{0}{1}.{2}".format(a, b, c) for a in flags for b in width for c in width])
e = set(["{0}{1}".format(a, b) for a in flags for b in width])
print(d)
print(e)