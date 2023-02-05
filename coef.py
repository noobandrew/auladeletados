import numpy as np

#versao em python

def coef_correlation(x, y):
    x_mean = np.mean(x)
    y_mean = np.mean(y)
    x_dev = x - x_mean
    y_dev = y - y_mean
    return np.sum(x_dev * y_dev) / np.sqrt(np.sum(x_dev**2) * np.sum(y_dev**2))

if __name__ == "__main__":
    n = int(input("Insira o número de elementos: "))
    x = np.zeros(n)
    y = np.zeros(n)
    for i in range(n):
        x[i] = float(input(f"Insira o valor x[{i}]: "))
        y[i] = float(input(f"Insira o valor y[{i}]: "))
    print("O coeficiente de correlação linear é:", coef_correlation(x, y))
