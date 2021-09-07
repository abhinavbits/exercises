def func(str):
    lowerstr = str.lower()
    counts = {}

    for vowel in "aeiou":
        count = lowerstr.count(vowel)
        counts[vowel] = count

    print(counts)

func("good morning")