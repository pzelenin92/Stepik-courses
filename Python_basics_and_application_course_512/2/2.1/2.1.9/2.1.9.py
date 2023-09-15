class NonPositiveError(Exception):
    pass

class PositiveList(list):
    def append(self,x):
        if x>0:
            super().append(x)
        else:
            raise NonPositiveError
x=PositiveList()
x.append(1)
