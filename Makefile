default:
	@echo "Call make with proper recipe name FFS"

array_max_min: array_max_min.c
	@gcc -o array_max_min.boo array_max_min.c

quick_sort: quick_sort.c
	@gcc -o quick_sort.boo quick_sort.c
