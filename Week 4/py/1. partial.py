from functools import partial

def power(base, exp):
    return base ** exp

# default keyword args
pow2 = partial(power, exp=2) 
pow4 = partial(power, exp=4)

# positional arg
power_of_5 = partial(power, 5)
pow_ = partial(power,7,2)

print(power(2,3)) # 8
print(pow2(4))    # 16
print(pow4(2))    # 16
print(power_of_5(3)) # 125
print(pow_())  # 49


print("\n*******************************************\n")

from functools import partialmethod

class Demo:
    def __init__(self):
        self.name = "Abisoye"

    def set_name(self, name):
        self.name = name

    new_name = partialmethod(set_name, name="Akinloye")

obj = Demo()
print(obj.name)
obj.new_name()
print(obj.name)