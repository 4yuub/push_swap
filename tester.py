from time import sleep
from random import choices
import subprocess

class bcolors:
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'

n = int(input("number of args\n>>> "))
print(bcolors.OKCYAN + "testing with " + str(n) + " numbers:")
for _ in range(500):
	args = subprocess.getoutput(f'ruby -e "puts (1..{n}).to_a.shuffle" | tr "\n" " "')
	p1 = subprocess.getoutput(f"./push_swap {args} | ./checker {args}")
	p2 = subprocess.getoutput(f"./push_swap {args} | wc -l")
	if p1 == "OK":
		print(bcolors.OKGREEN + p1 + ": " + p2)
	else:
		print(bcolors.WARNING + p1, "args:", args)
	sleep(.1)