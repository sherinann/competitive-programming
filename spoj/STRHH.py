t=int(input())
while(t>0):
	a=input()
	i=0
	l=""
	while i<=(len(a)/2-1):
		l+=a[i]
		i+=2
	print(l)
	t-=1