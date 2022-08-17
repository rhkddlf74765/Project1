import random
TOTAL_NUM = 0
TOTAL_MINE = 0
TOTAL_FLAG = 0
ROW = 0
COLUMN = 0

def make_list ():
    global TOTAL_MINE, TOTAL_NUM, ROW, COLUMN
    TOTAL_NUM = int(input("6x6 이면 6입력 , 9x9 이면 9 입력"))
    ROW = TOTAL_NUM
    COLUMN = TOTAL_NUM
    TOTAL_LIST = [[0]*ROW]*COLUMN
    if TOTAL_NUM == 6:
        TOTAL_MINE = 8
    elif TOTAL_NUM == 9:
        TOTAL_MINE = 15
    return TOTAL_LIST
TOTAL_LIST = make_list()
def print_list():
    for ROW in range(TOTAL_NUM):
        print(TOTAL_LIST[ROW])
def set_mine ():
    first_over_line = random.randint(0,ROW-1)
    if (first_over_line == 0):
        second_over_line = random.randint(1,ROW-1)
    elif (first_over_line == ROW-1):
        second_over_line = random.randint(0,ROW-1)
    else : 
        second_over_line = random.randint(1,2)
        if second_over_line == 1 : 
            second_over_line = random.randint(0,first_over_line)
        else : 
            second_over_line = random.randint(first_over_line,ROW-1)

