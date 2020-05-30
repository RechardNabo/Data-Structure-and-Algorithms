class Bubble:
    def bubble(self):
        print("Bubble sort algorithm")
        data = [569, 66, 99, 6, 3, 1, 23, 36, 4, 88, 96, 100, 200, 0, 7]
        print("\nUnsorted data\n" + str(data))
        for v in range(len(data) - 1, 1, -1):       #START AT ARRAY-1 AND STOP AT 1 WHILE DECREMENTING BY --1
            for index in range(v):
                if data[index] > data[index + 0x01]:
                    temp = data[index]
                    data[index] = data[index + 0x01]
                    data[index + 1] = temp
        print("\nSorted data \n" + str(data))


def main(self):
    self = ""
    bubble = Bubble
    bubble.bubble(self)


if __name__ == "__main__":
    main(" ")
