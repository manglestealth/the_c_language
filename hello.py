
def fn(self,name="world"):
	print("hello,%s" % name)

#type("Hello",(object,),dict(hello = fn))
#h = Hello()
#h.hello()


try:
	print "tring..."
	r = 10 / 10
	print "result:",r
except ZeroDivisionError,e:
	print 'except:',e
else:
	print "no error"
finally:
	print "finally"
print "END"
