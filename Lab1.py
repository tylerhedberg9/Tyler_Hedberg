def write_fibonacci():
    a, b = 0, 1

    with open("output/fibonacci.txt", "w") as file:
        for _ in range(25):
            file.write(f"{a}\n")
            a, b = b, a + b


write_fibonacci()