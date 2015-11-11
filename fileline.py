# import fileinput
# for line in fileinput.input():
# 	line = line.rstrip()
# 	num = fileinput.lineno()
# 	# print '%-40s # %2i' %(line,num)
# 	print fileinput.filename()
class SetAndGet:
	"""docstring for SetAndGet"""
	def __init__(self,dv={}):
		self.__dv__ = dv

	def __setitem__(self,key,value):
		self.__dv__[key] = value
		

	def __getitem__(self,key):
			
		print "b"
		return self.__dv__[key]

	def __repr__(self):
		print 1
		return repr(self.__dv__)
		
	def __cmp__(self,dict):
		print 2
		return 0

	def __len__(self):
		return 20		

a = SetAndGet() 

		
# a['f'] = "f"
# a['t'] = "t" 
# print a['t'] 
# print repr(a) 

b = SetAndGet()

# print a == b

# print len(a)

# try :
# 	fsock = open("/Users/mangle/Documents/c_project/1.py","a")
# except IOError:
# 	print "what"
# else:
# 	print "else"	
# finally:
# 	fsock.close()
# 	print 1

# fsock.write("fff")
# import os
# print os.listdir("/")
import re
phonePattern = re.compile(r"(\d{3})\D*(\d{3})\D*(\d{4})\D*(\d*)$")
print phonePattern.search('work 1-(800) 555.1222 #231').groups()
test.p