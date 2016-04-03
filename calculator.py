#!/usr/bin/python3
# four function calculator in python

def add(a, b):
    return a+b

def subtract (a,b):
    return a-b

def multiply (a,b):
    return a*b

def divide (a,b):
	try:
		return a/b
	except ZeroDivisionError as detail:
		print 'Division not possible:',detail 
		return False

def calculate(a, b, op):
    if op == '+':
        print add(a, b)
    elif op == '-':
        print subtract(a, b)
    elif op =='*':
        print multiply(a, b)
    elif op == '/':
        print divide(a, b)
    else:
        print "invalid operator"



if __name__ == "__main__": 
     txt = raw_input()           # format: num1 operator num2 (separated by space)
     txt = txt.split(" ")
     a = int(txt[0])
     b = int(txt[2])
     op = str(txt[1])
     calculate(a, b, op)
