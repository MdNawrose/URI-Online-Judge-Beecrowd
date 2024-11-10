def simulate_population_growth():
    T = int(input())  # Number of test cases
    for _ in range(T):
        PA, PB, G1, G2 = input().split()
        PA = int(PA)
        PB = int(PB)
        G1 = float(G1)
        G2 = float(G2)
        
        years = 0
        while PA <= PB and years <= 100:
            PA += int(PA * (G1 / 100))
            PB += int(PB * (G2 / 100))
            years += 1
            
        if years > 100:
            print("Mais de 1 seculo.")
        else:
            print(f"{years} anos.")

simulate_population_growth()
