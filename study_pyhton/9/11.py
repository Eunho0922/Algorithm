intA = 3; floatB = 3245.79; stringC = "asdfghjk"

print("1", intA, floatB, stringC)

print("2", intA, floatB, stringC, sep=" --> ")

print("3", "Integer %d, Float %f, String %s" % (intA, floatB, stringC))

print("4", "Integer %d, Float %7.2f, String %20s" % (intA, floatB, stringC))

print("5", "{} + {} - {}" .format(intA, floatB, stringC))

print("6", "{2} + {0} - {1}" .format(intA, floatB, stringC))

print("7", "{2:20s} + {0:8d} - {1:15f}" .format(intA, floatB, stringC))

print("8", "{2:>20s} + {0:<8d} - {1:^15f}" .format(intA, floatB, stringC))

print("9", "{2:*>20s} + {0:#<8d} - {1:$15,.3f}" .format(intA, floatB, stringC))



