class Selection_sort:

    def selection(self):
        print("Selection sort algorithm")
        data = [556, 66, 9, 6, 3, 1, 23, 36, 4, 88, 96, 100, 200, 1, 7]
        print("Unsorted data\n"+str(data))

        for v in range(0x00, len(data) - 0x01, +0x01):
            minimum = v
            for x in range(v + 0x01, len(data), +0x01):
                if data[x] < data[minimum]:
                    minimum = x
                    temp = data[v]
                    data[v] = data[minimum]
                    data[minimum] = temp
        print("\n Sorted data \n"+str(data))


def main(self=None):
    self = ""
    selection = Selection_sort
    selection.selection(self)


if __name__ == "__main__":
    main("")
