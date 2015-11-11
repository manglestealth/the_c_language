#!/usr/bin/python
#num = raw_input("echo :")
#print r"hello e\naaaa"
# horword = ['endm',12]
# elise = ['dgd',13]

# database =[horword,elise]
# print database[1]
# n = 1
# month = []
# while n < 13:
# 	f = str(n)+"month"
# 	month.append(f)
# 	n+=1

# day = ['st','nd','rd']+17*['th']\
# 	  +['st','nd','rd']+7*['th']\
# 	  +['st']

#input_year = input("Year :")
#input_month = input("Month :(1-12)")
#input_day = input("Day :(1-31)")


#print month[input_month-1]+str(input_day)+day[input_day-1]+','+str(input_year)
# print month[::-2]
# print month+day
# a = [None]*5
# print a


# screen_width  = 80
# text = raw_input("Sentence :")
# text_width  = len(text)
# box_width = text_width+6
# margin_left = (screen_width-box_width)/2

# print " "*margin_left+"+"+"-"*box_width+"+"
# print " "*margin_left+"|"+" "*box_width+"|"
# print " "*margin_left+"|"+" "*3+text+" "*3+"|"
# print " "*margin_left+"|"+" "*box_width+"|"
# print " "*margin_left+"+"+"-"*box_width+"+"

# database = [
# 	['aaa',123],
# 	['bbb',321],
# 	['ccc',333]
# ]

# name = raw_input('enter your name :')
# pwd = input('enter your paswd :')

# if [name,pwd] in database:
# 	print "yes" 

# number = [100,34,52]
# print min(number)

#dic = {"aa":123,"bb":321,"cc":333}
# print dic['aa']
# class Test(object):
# 	number = 0
# 	def __init__(self):
# 		Test.number += 1

# a = Test()
# b = Test()
# print Test.number		
#dic = dict(name="test",age=16,f="f")
#print dic
#del dic['name']
#print dic

# dic  = {
# 	"alice" :{
# 		'phone' : '2341',
# 		'addr' : 'foo drive 20'
# 	},
# 	'beth' :{
# 		'phone' : '9012',
# 		'addr' : 'dsad 312'
# 	},
# 	'cesc' :{
# 		'phone' : '213',
# 		'addr' : 'dsa1231'
# 	}
# }

# labels = {
# 	'phone' : 'phone number',
# 	'addr' : 'address'
# }

# y = ['a','b','c']
# name = raw_input("enter the name of you want to search :")
# what = raw_input("what the things you want to search :")
# if what == 'p':
# 	attr = 'phone'
# elif what == 'a':
# 	attr = 'addr'
# else:
# 	attr = what	
# label = labels.get(attr,attr)

# info = dic[name].get(attr,'does not exists')
# print "%s's %s is %s" % (name,label,info)
# from copy import deepcopy 
# x = deepcopy(dic)
# x['alice']['test'].remove("a")
# print x
# print x

# print {}.fromkeys(('123','321'),('unknown'))
#print lables.get('phones','not')
# b = {
# 	"phone" : "aaa"
# }
# labels.update(b)
# print labels
# from random import choice
# x = choice(['hello worlde',[1,2,'e',4]])
# print x.count("e")
# class Person(object):

# 	def setName(self,name):
# 		self.name = name

# 	def getName(self):
# 		return self.name

# 	def greet(self):
# 		print "my name is "+self.name

# p = Person()
# p.setName("Luke Sharn")
# p.greet()				
# class MyClass(object):
# 	def __init__(self,name):
# 		self.__ac = name
# 	def hold(self):
# 		return self.__ac

# s = MyClass("test")
# print MyClass.hold.__func__	
# raise Exception("what happened ")
# import exceptions
# f = [1,2,3]
# print f[4]
# muflled = True
# while True:
# 	try:
# 		x = input("x :")
# 		y = input("y :")
# 		print x/y
# 	except Exception,e:
# 		print e
# 	else:
# 		break	
# x = None
# try:
# 	x=1/0
# finally:
# 	print "cleaning up.."
# 	del x	
# class A(object):
# 	def hello(self):
# 		print "hello"

# class B(A):
# 	pass


# b = B()
# b.hello()			
# class A(object):
# 	pass

# class Test(A):
# 	def __len__(self):
# 		super(Test,self).__len__()

# t = Test()
# print len(t)	
# class TestExc(Excepts):
# 	pass	

# class Arti(object):
# 	def __init__(self,start=0,step=1):
# 		self.block = {}
# 		self.start = start
# 		self.step = step

# 	def checkKey(self,key):
# 		if not isinstance(key,(int,long)):
# 			raise TypeError

# 		if key<0:
# 			raise IndexError

# 	def __setitem__(self,key,value):
# 		self.checkKey(key)
# 		self.block[key] = value

# 	def __getitem__(self,key):
# 		self.checkKey(key)
# 		try:
# 			return self.block[key]
# 		except KeyError:
# 			return self.start+self.step*key		


# af = Arti(3,4)
# print af[5]			
# class CountList(list):
# 	def __init__(self,*args):
# 		self.count = 0
# 		super(CountList,self).__init__(*args)

# 	def __getitem__(self,*args):
# 		self.count+=1
# 		return super(CountList,self).__getitem__(*args)

# c = CountList(range(10))
# print c[3]						
# print c.count

# class Rect(object):
# 	def __init__(self,width,height):
# 		self.width = width
# 		self.height = height

# 	def getSize(self):
# 		return self.width,self.height

# 	def setSize(self,size):
# 		self.width,self.height = size
# 	def delSize(self):
# 		return "f"	
# 	size = property(getSize,setSize,delSize)

# s = Rect(3,5)
# print s.size				
# class Fib(object):
# 	def __init__(self):
# 		self.a = 0
# 		self.b = 1
# 	def next(self):
# 		self.a,self.b = self.b,self.a+self.b
# 		return self.a
# 	def __iter__(self):
# 		return self

# fib = Fib()
# for i in fib:
# 	if i > 1000:
# 		print i
# 		break			
# def test():
# 	try:
# 		pass
# 	except GeneratorExit:
# 		print 1	
# 	finally:
# 		yield 5	
# c = test()
# c.close()
# def flg(obj):
# 	try:
# 		try:
# 			obj+'test'
# 		except TypeError:pass
# 		else:
# 			raise TypeError

# 		for i in obj:
# 			for t in flg(i):
# 				yield t		
# 	except TypeError:
# 		yield obj	

# flg(["1","a","b",["c","d"["a","g"]]])		
# def conflict(state,nextX):
# 	nextY = len(state)
# 	for i in range(nextY):
# 		if abs(state[i]-nextX) in (0,nextY-i)
# 			return True
# 	return False
import sys,pprint
# pprint.pprint (sys.path)
# pprint.pprint (sys.platform)
args = sys.argv[1:]				

args.reverse()
# print " ".join(args)
import os
# os.system("vim")
# print os.urandom(1)
import webbrowser
# webbrowser.open("http://www.baidu.com")
#print sys.argv
# f = set([1,2,3,4])
# g = set([2,3,4,5])
# print f | g issubset()
import fileinput
mySets = []
for i in range(10):
	mySets.append(set(range(i,i+5)))

# print reduce(set.union,mySets)	
import heapq,random
data = range(10)
random.shuffle(data)
heap = []
for i in data:
	heapq.heappush(heap,i)

# print heapq.heappop(heap)
testf = range(10,-1,-1)
# print testf
heapq.heapify(testf)
# print testf
import time
# print random.randrange(5)
date1 = (2013,1,1,0,0,0,-1,-1,-1)
time1 = time.mktime(date1)
date2 = (2014,1,1,0,0,0,-1,-1,-1)
time2= time.mktime(date2)
rantime = random.uniform(time1,time2)
#print time.localtime(rantime)
#print time.asctime(time.localtime(rantime))
#num = input('how many dice?')
#sides = input('how many sides per die?')
# sum = 0
# for i in range(num):
# 	num += random.randrange(sides)+1

# print "the result is %d"%num	
#fortunes = list(fileinput.input())
#print fortunes	

values = range(1,14)
suits = "t x m f".split()

deck = ["%d %s"%(s,v) for s in values for v in suits]
random.shuffle(deck)
# while deck:
# 	raw_input(deck.pop())
# import re

# p = re.sub(r"(http://)?(www\.)?.+\.(com|org|net)",r'<em>\1</em>',"www.baidu.com")
# print p
import urllib
# urllib.urlretrieve('http://www.baidu.com','/Users/mangle/Documents/c_project/1.html')
def classmep(show):
	print show

class whatever():
	def __init__(self,test):
		self.test = test

	def printt(self):
		print self.test	

a = whatever("action")
a.printt()