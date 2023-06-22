text = input("Введите текст: ")
words = text.split()
word_counts = {}
for word in words:
    if word not in word_counts:
        word_counts[word] = 1
    else:
        word_counts[word] += 1
most_common_word = sorted(word_counts.items(), key=lambda x: x[1], reverse=True)[0][0]
longest_word = max(words, key=len)
print("Наиболее часто встречающееся слово:", most_common_word)
print("Самое длинное слово:", longest_word)