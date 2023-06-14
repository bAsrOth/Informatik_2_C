import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

df = pd.read_csv("Spass\data.csv")

x = df['x'].tolist()
e_x = df['e(x)'].tolist()
plt.grid(visible=True, color='grey', linestyle='--')
plt.plot(x, e_x)
plt.show()
