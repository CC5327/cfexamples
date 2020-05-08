all: buffer_overflow buffer_overflow_protected format_string

buffer_overflow:
	gcc -fno-stack-protector buffer_overflow.c -o buffer_overflow -g3

buffer_overflow_protected:
	gcc buffer_overflow.c -o buffer_overflow_protected -g3

format_string:
	gcc format_string.c -Wno-format-security  -g3 -fno-stack-protector -o format_string

clean:
	rm -rf format_string buffer_overflow buffer_overflow_protected