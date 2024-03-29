#include <python.h>

/**
 * print_python_list_info - prints basic info about python lists
 * @p: a pyObject list
 */
void print_python_list_info(PyObject *p)
{
	int size, alloc, i;
	pyObject *obj;
	size = py_SIZE(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] size of the python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (i = 0; i < size; i++)
	{
		print("Element %d: ", i);

		obj = pyList_GetItem(p, i);
		printf("%s\n", py_TYPE(obj)->tp_name);
	}
}
