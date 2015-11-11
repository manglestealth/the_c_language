# import urllib
# from sgmllib import SGMLParser

# sock = urllib.urlopen("http://www.baidu.com")
# p = sock.read()

# sock.close()

# class pParser(SGMLParser):
# 	def reset(self):
# 		SGMLParser.reset(self)
# 		self.ps = []

# 	def start_script(self,attrs):
# 		href = [v for k,v in attrs if k=='src']
# 		if href:
# 			self.ps.extend(href)


# parser = pParser()
# parser.feed(p)
# parser.close()
# for src in parser.ps:print src		
# for k,v in globals().items():
# 	print k,"=",v
import urllib
vote = urllib.urlopen("http://www.apporz.com/")
vote_value = vote.read()
vote.close()

f = open('./1.html','a')
f.write(vote_value)
f.close()