#include "libft.h"

    /* int is_4_letters_long (char* str)
    {
        if(ft_strlen(str) != 4)
        {
            return 0;
        }

        return 1;
    } */

/* char ft_capitalize(char c)
{
    return c - 32; */

    /* char function(unsigned int i, char c)
    {
        printf("Result %d %c \n",i,c);
        return c - 32;
    } */


    /* int *sort_ints(int *unsorted)
    {
        int size;
        int i = 0;
        while()
    } */
/* int ft_strlen_delimitor(const char *str);
char static count_words(char const *s, char c); */
/* int ft_countlen1(int n); */
/* void print_element(t_list *elem)
{
    printf("%s\n", (char *)elem->content);
} */
/* void print_node(t_list *node)
{
    if (node != NULL)
        printf("Content: %s\n", (char *)node->content);
    else
        printf("It's NULL dudes");
}
 */
/*  void del(void *content, size_t content_size)
{
    // Unused parameter (content_size) in this example
    (void)content_size;

    if (content != NULL)
        free(content);
} */

/* t_list *f(t_list *elem)
{
    t_list *new_node = malloc(sizeof(t_list));
    if (new_node == NULL)
    {
        // Handle memory allocation error
        return NULL;
    }

    // Fill the content of new_node with 'h' repeated elem->content_size times
    new_node->content = malloc(elem->content_size);
    if (new_node->content == NULL)
    {
        // Handle memory allocation error
        free(new_node);
        return NULL;
    }

    for (size_t i = 0; i < elem->content_size; i++)
    {
        *((char*)new_node->content + i) = 'h';
    }

    new_node->content_size = elem->content_size;

    // Set the next pointer of new_node to NULL (to be updated by ft_lstadd)
    new_node->next = NULL;

    return new_node;
} */

int main(void) 
{
   /*  t_list *list = NULL;
    // Create some list nodes
    t_list *node1 = ft_lstnew("Hello", 6);
    t_list *node2 = ft_lstnew("World", 6);
    t_list *node3 = ft_lstnew("!", 2);

    // Add the nodes to the list
    ft_lstadd(&list, node3);
    ft_lstadd(&list, node2);
    ft_lstadd(&list, node1);

    // Iterate over the list and print each element
    ft_lstiter(list, print_node);

    t_list *new_list = ft_lstmap(list, f);

    ft_lstiter(new_list, print_node);

    return 0; */

    /*
    // Create a list with some nodes
    t_list *node1 = ft_lstnew("Node 1", 7);
    t_list *node2 = ft_lstnew("Node 2", 7);
    t_list *node3 = ft_lstnew("Node 3", 7);

    // Set the next pointers
    node1->next = node2;
    node2->next = node3;

    // Print the initial list
    t_list *head = node1;
    while (head != NULL)
    {
        printf("%s\n", (char *)head->content);
        head = head->next;
    }
    printf("\n");

    // Delete the list
    ft_lstdel(&node1, del);

    // Print the list after deletion (should be empty)
    head = node1;
    while (head != NULL)
    {
        printf("%s\n", (char *)head->content);
        head = head->next;
    }

    return 0;*/
    /* char *h = ft_strdup("Hello");
    t_list *node = ft_lstnew(h, 6);

    // Print the content of the node
    printf("Before deletion:\n");
    print_node(node);

    // Delete the node using ft_lstdelone
    ft_lstdelone(&node, del);

    // Attempt to print the content of the node after deletion
    printf("After deletion:\n");
    print_node(node);

    return 0; */

    /* t_list *list = NULL;

    // Create some list nodes
    t_list *node1 = ft_lstnew("Hello", 6);
    t_list *node2 = ft_lstnew("World", 6);
    t_list *node3 = ft_lstnew("!", 2);

    // Add the nodes to the list
    ft_lstadd(&list, node3);
    ft_lstadd(&list, node2);
    ft_lstadd(&list, node1);

    // Iterate over the list and print each element
    ft_lstiter(list, print_element);

    return 0; */

    /* char *content = "Hello, World!";
    size_t content_size = strlen(content) + 1; // +1 for the null terminator

    t_list *node = ft_lstnew(content, content_size);
    if (node != NULL)
    {
        printf("Content: %s\n", (char *)node->content);
        printf("Content Size: %zu\n", node->content_size);
        printf("Next: %p\n", (void *)node->next);
    }
    else
    {
        printf("Error creating node.\n");
    }

    return 0; */

/* const char *str = "-42";
    int number = ft_atoi(str);
    printf("Converted number: %d\n", number);
    return 0;
 */

    /* har const *s = "Hello,world,how,are,you";
    char c = ',';

    char **result = ft_strsplit(s, c);

    if (result != NULL)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            printf("%s\n", result[i]);
            i++;
        }

        // Free the allocated memory
        i = 0;
        while (result[i] != NULL)
        {
            free(result[i]);
            i++;
        }
        free(result);
    }

    return 0; */
          
    



   /* const char *haystack = "Hello, World!";
    const char *needle = "Hello, World!";
    
    char *result = ft_strstr(haystack, needle);
    
    if (result != NULL)
    {
        printf("Needle found at position: %ld\n", result - haystack);
        printf("Substring: %s\n", result);
    }
    else
    {
        printf("Needle not found.\n");
    }
    
    return 0; */



    /* int ft_countlen(int n);

    int num = 12345;
    char *str = ft_itoa(num);

    printf("Number: %d\n", num);
    printf("String: %s\n", str);

    free(str);

    return 0; */


    /*  int number = 12345;
    int fd = 1; // Standard output

    ft_putnbr_fd(number, fd);
    ft_putchar_fd('\n', fd);

    number = -98765;
    fd = 2; // Standard error

    ft_putnbr_fd(number, fd);
    ft_putchar_fd('\n', fd);

    return 0; */

    /* ft_putnbr(3784589); */
   
    /* bool is_Sorted_params(char **c, int count);
    void ft_sort_params(char **c, int count);

    char *params[] = {"abccc", "ab", "a", "abccddd", "b", "bc"};
    int count = sizeof(params) / sizeof(params[0]);

    printf("Before sorting:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s ", params[i]);
    }
    printf("\n");

    ft_sort_params(params, count);

    printf("After sorting:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s ", params[i]);
    }
    printf("\n");

    bool sorted = is_Sorted_params(params, count);
    printf("Sorted: %s\n", sorted ? "true" : "false");

    return 0; */

    /* har dest[20] = "Hello";
    const char src[] = " World!";
    
    printf("Before strcat: %s\n", dest);
    ft_strcat(dest, src);
    printf("After strcat: %s\n", dest);
    
    return 0; */

    /*  int arr[] = {5, 2, 8, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Before sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    ft_sort_ints(arr, size);
    
    printf("After sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0; */
    


    /* char *original = "Hello, world!";
    
    char *modified = ft_strmapi(original, &function);
    
    printf("Original string: %s\n", original);
    printf("Modified string: %s\n", modified);
    
    // Don't forget to free the memory allocated by ft_strmapi
    free(modified);
    
    return 0; */

    /* char *tab[] = {"Helo", "wrld", "qwe", "abc", "DEF", "xysshshsz", "derevo", "0"};
    int count = ft_count_if(tab, is_4_letters_long);
    
    printf("My result is: %d\n", count);
    
    return 0; */

    /* char *str1 = "tesориорппмроt";
    
    if (is_4_letters_long(str1)) 
    {
        printf("%s 4 bukvi \n", str1);
    } else 
    {
        printf("%s net 4 bukvi \n", str1);
    } */
    /* int str[] = {0,1,2,3,4,5,6,8,9};

    int len = 8;
    ft_foreach(str, len, ft_capitalize); */

    
    
    
    
    
    //___________________________strlen
   
   /*  char *str = "shlapa";
    int i = ft_strlen(str);

    printf("%d\n", i);
     */
    //_____________________________abs

    /* int i = -2;
    int res =ft_abs(i);
    printf("agsg%d\n",res); */

    //_____________________________div_mode
   /*  int a = 15;
    int b = 2;
    int div;
    int mod;
    ft_div_mode( a,  b,  &div,  &mod);
    printf("%d\n", div);
    printf("%d\n", mod); */

    //______________________________ft_ft
    /* int *number = NULL;
    ft_ft(number); */

    //______________________________ft_putchar
    /* ft_putchar('a');
    ft_putchar('\n'); */

    //______________________________ft_is_negative

    /* if (ft_is_negative(-5))
    {
        ft_putchar('t');   
    }
    else
    {
        ft_putchar('f');
    } */

   //  if (argc == 2)
    //{
      //  display_file(argv[1]);
    //} 

     /* nt fd = open(argv[1],O_WRONLY);

    ft_putendl_fd("casdasd", fd);
    close(fd); */
    //int number;
    /* int number = ft_recursive_factorial(8);
    printf("%d\n",number); */

    
   /*  char str[4];

    ft_memset(str, 'A', 4*sizeof(char));


    printf("str: %s\n", str); 
 */

/*     char str[10];
    printf("ft%s",((char*)(ft_memset(str, 78, 20)))); */

  /* size_t size = 10;
    char* memory = (char*)ft_memalloc(size);
    
    if (memory != NULL)
    {
        printf("Memory allocation successful!\n");

        // Test the allocated memory
        for (size_t i = 0; i < size; i++)
        {
            memory[i] = 'A' + i;
        }

        printf("Allocated memory content: %s\n", memory);
        
        // Free the allocated memory
        ft_memdel((void**)&memory);

        if (memory == NULL)
        {
            printf("Memory deallocation successful!\n");
        }
        else
        {
            printf("Memory deallocation failed!\n");
        }
    }
    else
    {
        printf("Memory allocation failed!\n");
    }
     */
    /* return 0; */

    /* char *str = "Hi Hello";

    char *dupe = ft_strdup(str);

    ft_putendl(str);
    ft_putendl(dupe); */
    /* size_t n = 5;
    char *s1 = "Hello";
    char *s2 = "Hell9";
    printf("%d, \n", ft_strnequ(s1, s2, n));  */

    /* const char *str = "Hello, World!";
    int search_char = 'W';

    char *result = ft_strchr(str, search_char);

    if (result == NULL)
    {
        printf("Character not found in the string.\n");
    }
    else
    {
        printf("Character found at position %ld: %s\n", result - str, result);
    }

    return 0; */

    /* char arr[] = "Hello, World!";
    int value = 'W';
    size_t size = sizeof(arr);
    
    void *result = ft_memchr(arr, value, size);
    
    if (result == NULL)
    {
        printf("Value not found.\n");
    }
    else
    {
        printf("Value found at index: %ld\n", (char*)result - arr);
    } */

    /* const char *str = "Hello, World!";
    int ch = 'W';
    
    char *result = ft_strchr(str, ch);
    
    if (result == NULL)
    {
        printf("Character not found.\n");
    }
    else
    {
        printf("Character found at index: %ld\n", result - str);
    }
    
    return 0; */

    /* const char *str = "Hello, World!";
    int ch = 's';
    
    char *result = ft_strrchr(str, ch);
    
    if (result == NULL)
    {
        printf("Character not found.\n");
    }
    else
    {
        printf("Character found at index: %ld\n", result - str);
    }
    
    return 0; */
    
/*     unsigned char arr1[] = {0x12, 0x34, 0x67, 0x89};
    unsigned char arr2[] = {0x12, 0x34, 0x67, 0x89};
    size_t size = 4;

    int result = ft_memcmp(arr1, arr2, size);

    if (result < 0)
    {
        printf("arr1 is less than arr2\n");
    }
    else if (result > 0)
    {
        printf("arr1 is greater than arr2\n");
    }
    else
    {
        printf("arr1 is equal to arr2\n");
    }

    return 0; */

    /* char src[10] = "Hello";
    char dest[10] = "World";
    size_t n = ft_strlen(src) + 1;

    printf("Before ft_memmove:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    ft_memmove(dest, src, n);

    printf("After ft_memmove:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0; */

    /* char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    reverse_word(str);

    printf("Reversed words: %s\n", str);

    return 0; */


    /* char src[] = "Hello, World!";
    char dest[15];

    ft_strcpy(dest, src);

    printf("Copied string: %s\n", dest);

    return 0; */

    /* char src[] = "Hello, World!";
    char dest[5];

    ft_strncpy(dest, src, sizeof(dest) - 1);

    dest[sizeof(dest) - 1] = '\0'; // Ensure destination string is null-terminated

    printf("Copied string: %s\n", dest);

    return 0; */

    /* char str1[] = "Hello";
    char str2[] = "Hell";
    int result = ft_strncmp(str1, str2, 4);

    printf("Comparison result: %d\n", result);

    return 0; */

     /* const char *str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *sub_str = ft_strsub(str, start, len);
    printf("Original String: %s\n", str);
    printf("Substring: %s\n", sub_str);

    return 0; */

    /* char *s1 = "Hello";
    char *s2 = " world!";
    char *result = ft_strjoin(s1, s2);
    
    if (result != NULL) {
        printf("Concatenated string: %s\n", result);
        free(result); // Remember to free the allocated memory
    } else {
        printf("Failed to allocate memory\n");
    }
    
    return 0; */


    /* char *str = ft_strmap("somesome", ft_capitalize);
    printf("sadasd %s, \n " , str);  */


    exit(0);

    return 0; 
}