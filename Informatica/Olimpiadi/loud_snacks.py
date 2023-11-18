nSnacks, maxNoise = input("Inserisci due numeri: ").split()
nSnacks, maxNoise= int(nSnacks), int(maxNoise)
loudnessLevels = input("Inserisci i livelli di rumore: ").split()
for i in range(len(loudnessLevels)): loudnessLevels[i] = int(loudnessLevels[i])
print(loudnessLevels)
if len(loudnessLevels) != nSnacks:
    print("Non hai messo il numero corretto di i livelli di rumore!")
    exit()

snacks =[(a, b) for a, b in  zip(range(0, nSnacks), loudnessLevels) if b <= maxNoise]
print("impiegheranno al massimo ")
maxTime = 0

for snack in snacks:
    if snack[1] == maxNoise: maxTime+=1


