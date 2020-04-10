def sub1():
    print("This")


def sub2():
    sub1()
    print("Is")


def sub3():
    sub2()
    print("Complete")


if __name__ == '__main__':
    sub3()