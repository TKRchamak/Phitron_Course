class Star_Cinema:
    def __init__(self) -> None:
        self.__hall_list = []

    def entry_hall(self, hall):
        self.__hall_list.append(hall)


class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no, star_cine_plex) -> None:
        super().__init__()
        self.__hall_no = hall_no
        self.__rows = rows
        self.__cols = cols
        self.show_list = []
        self.seats = {}
        star_cine_plex.entry_hall(self)

    def entry_show(self, id, movie_name, time):
        self.show_list.append((id, movie_name, time))

        temp_list = []
        for i in range(self.__rows):
            row_list = []

            for j in range(self.__cols):
                row_list.append(False)

            temp_list.append(row_list)

        self.seats[id] = temp_list

    def book_seats(self, customer_name, phone, show_id, seat_list):
        # self.customer_name = customer_name
        # self.phone = phone
        get_id = False
        curr_show = ()
        for show in self.show_list:
            if show[0] == show_id:
                curr_show = show
                get_id == True
                for seat in seat_list:
                    if self.seats[show_id][seat[0]-1][seat[1]-1] == True:
                        print('')
                        print("---------------------------------------")
                        print(f'{seat[0]}{seat[1]} ALREADY BOOKED')
                        print("---------------------------------------")
                        print('')
                        return

                for seat in seat_list:
                    if self.seats[show_id][seat[0]-1][seat[1]-1] == False:
                        self.seats[show_id][seat[0]-1][seat[1]-1] = True

        if get_id == False:
            print('')
            print("---------------------------------------")
            print('SHOW NOT AVAILABLE FOR THIS ID')
            print("---------------------------------------")
            print('')
            return
        else:
            print('#### TICKET BOOKED SUCCESSFULLY ####')
            print('')
            print("---------------------------------------")
            print(f'NAME: {customer_name}')
            print(f'PHONE NUMBER: {phone}')
            print(
                f'MOVIE NAME: {curr_show[1]}      MOVIE TIME: {curr_show[2]}')
            # print(f'TICKETS: ')
            # print(f'HALL: ')

            print("---------------------------------------")
            print('')

    def view_show_list(self):
        print('')
        for i in range(3):
            if i != 2:
                print("---------------------------------------", end='-')
            else:
                print("---------------------------------------")

        for show in self.show_list:
            print(
                f'SHOW ID: {show[0]}      TIME: {show[2]}     MOVIE NAME: {show[1]}')

        for i in range(3):
            if i != 2:
                print("---------------------------------------", end='-')
            else:
                print("---------------------------------------")
        print('')

    def view_available_seat(self):
        show_id = input('ENTER SHOW ID: ')
        get_id = False

        print('')

        for show in self.show_list:
            if show[0] == show_id:
                print(f'MOVIE NAME: {show[1]}       TIME: {show[2]}')
                get_id = True

        if get_id == False:
            print("---------------------------------------")
            print('SHOW NOT AVAILABLE FOR THIS ID')
            print("---------------------------------------")
            print('')
            return

        for i in range(3):
            if i != 2:
                print("---------------------------------------", end='-')
            else:
                print("---------------------------------------")

        for i in range(len(self.seats[show_id])):
            for j in range(len(self.seats[show_id][i])):
                if j+1 == len(self.seats[show_id][i]):
                    if self.seats[show_id][i][j] == False:
                        print(f'{i+1}{j+1}')
                    else:
                        print('XX')
                else:
                    if self.seats[show_id][i][j] == False:
                        print(f'{i+1}{j+1}', end='        ')
                    else:
                        print('XX', end='        ')

        for i in range(3):
            if i != 2:
                print("---------------------------------------", end='-')
            else:
                print("---------------------------------------")
        print('')


def replica_system(hall):
    while (True):
        print('1. VIEW ALL SHOWS TODAY')
        print('2. VIEW AVAILABLE SEATS')
        print('3. BOOK TICKETS')
        x = input('ENTER OPINION: ')
        if (x == '1'):
            hall.view_show_list()
        elif (x == '2'):
            hall.view_available_seat()
        elif (x == '3'):
            name = input('ENTER CUSTOMER NAME: ')
            phone = input('ENTER CUSTOMER PHONE NUMBER: ')
            show_id = input('ENTER SHOW ID: ')
            no_of_ticket = input('ENTER NUMBER OF TICKET: ')
            ticket_list = []
            for i in range(int(no_of_ticket)):
                seat_no = input('ENTER SEAT NO: ')
                ticket_list.append((int(seat_no[0]), int(seat_no[1])))

            hall.book_seats(name, phone, show_id, ticket_list)

        else:
            print('No Option Found')
            break


if __name__ == "__main__":
    star_cine_plex = Star_Cinema()

    newHall = Hall(3, 5, 1, star_cine_plex)

    newHall.entry_show('111', 'Hotath_batase_lungi_akase', '4:30')
    newHall.entry_show('222', 'Chole_gelo_aikkaola_bas', '7:30')
    newHall.entry_show('333', 'Bal peke tal hoyece', '10:30')
    newHall.entry_show('444', '---- theke pota boro', '1:30')

    replica_system(newHall)
