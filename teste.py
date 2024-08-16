s = 'the sky is blue'
dicio = {}
string = ''
for i in range(len(s)):
    if s[i] != ' ':
        string += s[i]
        print(string)
    else:
        dicio[i] = string
        string = ''
dicio[i] = string

reversed_string = ' '.join(dicio[key] for key in sorted(dicio.keys(), reverse=True))
print(reversed_string)