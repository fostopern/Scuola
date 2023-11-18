n, k= input("Inserisci un numero: ").split()
n, k = int(n), int(k)
nxt = input(f"Inserisci una serie di {n} numeri: ").split()  # stringhe
nxt = list(map(lambda x: int(x), nxt)) # ora sono interi
h = list(range(0, n - 1))

# check se sta nella prima casa e quindi counter = 0 
counter = 0
if nxt[nxt[0] - 1] == k:
    print(counter)
    exit()







# assegnazione del valore a counter se i primi controlli passano
counter = 1 # valore 1 perchè il primo tentativo è quello della prima casa
i = nxt[0] - 1 # primo valore di nxt trasformato in indice utilizzabile in nxt
while True:
    if nxt[i] != k:
        counter += 1
    if counter > n: # il numero massimo di tentativi è sempre n, quindi se i tentativi sono maggiori di n è entrato in un loop e non viene trovato
        counter = -1
        break
    elif nxt[i] == k: # quando trova k aggiunge 1 a counter e rompe il loop
        counter += 1
        break
    i = nxt[i] -1



print(counter)
