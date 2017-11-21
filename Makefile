default:
	@echo "Call make with proper recipe name FFS"

array_max_min: array_max_min.c
	@gcc -o array_max_min.boo array_max_min.c
