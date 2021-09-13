import matplotlib as mpl
import pandas as pd
import matplotlib.pyplot as plt


df = pd.read_csv('data/problem_2.dat', sep=';')


fig, ax = plt.subplots()
ax.plot(df['x'], df['u(x)'])
ax.set_xlabel('x')
ax.set_ylabel('u(x)')

fig.set_size_inches(12.0/2.54, 8.0/2.54)
fig.tight_layout(pad=0)



fig.savefig('figs/problem_2.pdf')
