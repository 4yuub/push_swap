from time import sleep
from random import choices
import subprocess

class bcolors:
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'

n = int(input("number of args\n>>> "))
print(bcolors.OKCYAN + "testing with " + str(n) + " numbers:")
sum = 0
max = 0
min = 1_000_000
for _ in range(1000):
	args = subprocess.getoutput(f'ruby -e "puts (1..{n}).to_a.shuffle" | tr "\n" " "')
	p1 = subprocess.getoutput(f"./push_swap {args} | ./checker {args}")
	p2 = subprocess.getoutput(f"./push_swap {args} | wc -l")
	if p1 == "OK":
		sum += int(p2)
		if int(p2) > max:
			max = int(p2)
		if int(p2) < min:
			min = int(p2)
		print(bcolors.OKGREEN + p1 + ": " + p2)
	else:
		print(bcolors.WARNING + p1, "args:", args)
	#sleep(.1)

print("the average is:", sum / 1000)
print("the min is:", min)
print("the max is:", max)
