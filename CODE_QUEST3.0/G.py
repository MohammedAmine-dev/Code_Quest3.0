s = input()


l = ["A",
    "E", 
    "H",
    "I",
    "J",
    "L",
    "M",
    "O",
    "S", 
    "T", 
    "U",
    "V",
    "W",
    "X",
    "Y",
    "Z",
    "1",
    "2", 
    "3", 
    "5",
    "8",
    "0"]

mapping = {
    "A":"A" ,
    "E":"3", 
    "H" :"H" ,
    "I": "I",
    "J":"L" ,
    "L" :"J" ,
    "M" :"M" ,
    "O" :"O",
    "S" :"2", 
    "T" :"T", 
    "U": "U",
    "V" :"V",
    "W" :"W" ,
    "X" :"X" ,
    "Y" :"Y",
    "Z" :"5",
    "1" :"1", 
    "2" :"S", 
    "3":"E", 
    "5" :"Z",
    "8": "8",
    "0" :"0"
}

a = ""

for i in range(len(s)):
    if s[i] in l:
        a += mapping[s[i]]
    else:
        a = "ELDDUM"
        break
    
print(a[::-1])