import calendar

class MonthlyCalendar:
    def __init__(self, year: int, month: int):
        self.year = year
        self.month = month

    def display_calendar(self):
        try:
            print(f"\nCalendar for {calendar.month_name[self.month]} {self.year}")
            print(calendar.month(self.year, self.month))
        except IndexError:
            print("Invalid month. Please enter a month between 1 and 12.")

def main():
    try:
        year = int(input("Enter year (e.g., 2025): "))
        month = int(input("Enter month (1-12): "))
        cal = MonthlyCalendar(year, month)
        cal.display_calendar()
    except ValueError:
        print("Invalid input. Please enter numeric values for year and month.")

if __name__ == "__main__":
    main()
