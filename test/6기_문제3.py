score = [90, 25, 67, 45, 80]

for i in range(len(score)):
    if score[i] >= 80:
        print('우수')
    elif score[i] >= 60:
        print('보통')
    else:
        print('미흡')
