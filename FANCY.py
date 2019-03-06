t = int(input())
while t > 0:
	a = input().split(" ")
	f = 0
	for i in a:
		if i == "not":
			f = 1
	if f == 1:
		print("Real Fancy")
	else:
		print("regularly fancy")
	t -= 1