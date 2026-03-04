compiler = gcc

flags = -Wall -Ifunctions_name

Source_files = full_code/main/main.c \
      full_code/functions/hasupper/hasupper.c \
      full_code/functions/haslower/haslower.c \
      full_code/functions/hasdigit/hasdigit.c \
      full_code/functions/length/length.c \
      full_code/functions/hasspace/hasspace.c

output = password_checker.exe

all:
	$(compiler) $(flags) $(Source_files) -o $(output)

clean:
	del $(output) 2>nul || rm -f $(output)