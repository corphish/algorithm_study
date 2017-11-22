default:
	@echo "Call make with proper recipe name FFS"

time_wrapper: time_wrapper.c
	@gcc -o time_wrapper.boo time_wrapper.c

array_max_min: array_max_min.c
	@gcc -o array_max_min.boo array_max_min.c

quick_sort: quick_sort.c
	@gcc -o quick_sort.boo quick_sort.c

binary_search: binary_search.c
	@gcc -o binary_search.boo binary_search.c