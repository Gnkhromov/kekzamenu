import seaborn as sns
import matplotlib.pyplot as plt
iris = sns.load_dataset("iris")
setosa = iris[iris["species"] == "setosa"]
versicolor = iris[iris["species"] == "versicolor"]
virginica = iris[iris["species"] == "virginica"]
plt.scatter(setosa["sepal_length"], setosa["sepal_width"], label="Setosa")
plt.scatter(versicolor["sepal_length"], versicolor["sepal_width"], label="Versicolor")
plt.scatter(virginica["sepal_length"], virginica["sepal_width"], label="Virginica")
plt.xlabel("Sepal length")
plt.ylabel("Sepal width")
plt.legend()
plt.show()
