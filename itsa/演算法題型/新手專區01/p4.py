animal_dict = {"dog":"狗","cat":"貓","duck":"鴨","cow":"牛","fox":"狐"}
reversed_dict = {v: k for k, v in animal_dict.items()}
target = input()
check = 1
check = animal_dict.get(target, "Not Found")
if check == "Not Found":
    print(reversed_dict[target])
else:
    print(animal_dict[target])

