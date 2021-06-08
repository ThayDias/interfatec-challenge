frase=input()
i=0
j=0
troca=""
while i<len(frase):
    if frase[i] in "PQR":
        troca[j]=frase+" "
    else:
        troca[j]=troca[j]+frase[i]
        
    i+=1
    j+=1
print(frase)
