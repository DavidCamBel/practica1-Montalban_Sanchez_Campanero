def checktriangle(a, b, c):
    if ((c < a + b) and (a < b + c) and (b < a + c)):
        if ((a == b) and (b == c)):
            return "Triangulo equilatero"
        elif ((a == b) or (b == c) or (a == c)):
            return "Triangulo isosceles"
        else:
            return "Triangulo escaleno"
    else:
        return "No es un triangulo"

