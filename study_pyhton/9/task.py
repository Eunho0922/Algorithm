cnt = 0; su = 0
def Mline(M_su):
    M_line = 1; hap = 0
    for a in range(M_line):
        cnt = cnt + 1
        for j in range(a, a + cnt):
            su = su + 1
            if su>M_su: break
            print("{:5d}".format(su), end=' ')
        print()
    print()