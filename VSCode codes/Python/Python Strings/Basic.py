from numpy import sort


yo="What are you doing? Stand up dad! Have you forgotten? Why you are here? Wasn't it to avenge your comrades! For Dina! For Kruger!\nYou just keep moving forward... Even if you die, Even after you die!"
print(len(yo))
print(yo.endswith("!"))
print(yo.count("e"))
print(yo.upper())
print(yo)
print(yo.find("Even"))
print(yo.replace("!","!!"))
sortedd=''.join(sorted(yo))
print(sortedd)