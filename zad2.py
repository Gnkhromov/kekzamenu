def longest_words(file):
	with open(file, 'r') as f:
		words = f.read().split()
		max_lenght = len(max(words,key=len))
		longest = [word for word in words if len(word) == max_lenght]
		return longest
print(longest_words('article.txt'))
