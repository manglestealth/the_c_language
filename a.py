# import os
# L = ["Apple",2,"Google","Microsoft","Amazon"]
# f = [ s.lower() if(isinstance(s,str)) else s for s in L]
# print f


# l = [1,2,3]
# f = [ i*i for i in l]
# print f

# def fib(g):
# 	a,b,n = 0,1,0
# 	while n < g:
# 		yield b
		
# 		a,b = b,a+b
# 		n = n+1


# for n in fib(15):
# 	print n		

# def b(a):
# 	return a+1

# ff = [1,2,3,4,5]
# a = map(b,ff)
# print a

# num = [1,3,5,7,9]
# def toi(a,b):
# 	return a*10+b

# a = reduce(toi,num)	
# print a
# def str2int(n):
# 	def chr2num(s):
# 		return {"0":0,"1":1,"2":2,"3":3,"4":4,"5":5,"6":6,"7":7,"8":8,"9":9}[s]
# 	def fn(a,b):	
# 		return a*10+b
# 	return reduce(fn,map(chr2num,n))

# res = str2int("38420")
# print type(res)		
# def cmp_ignore_case(s1,s2):
# 	s1 = s1.upper()
# 	s2 = s2.upper()
# 	if s1 < s2:
# 		return -1
# 	if s1 > s2:
# 		return 1
# 	return 0
	
# print sorted(["a","A","z","Z","b","B"],cmp_ignore_case)	
# def map_self(a,b):
# 	L  = []
# 	for i in b:
# 		d = a(i)
# 		L.append(d)
# 	return L
# ff = [1,2,3,4,5]
# def b(a):
# 	return a+1
# a = map_self(b,ff)	
# print a
def prod(a,b):
	return a*b

print reduce(prod,[1,2,3,4,5,6])		

	
