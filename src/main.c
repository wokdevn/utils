#include <stdio.h>
#include "../head/radix_convert.h"
#include "../head/revert_string.h"

int m_main() {
    printf("Utils:\n");

    //-------自定义实现--------
    char *bs = "0000101";
    long num = bstoi(bs, strlen(bs));
    printf("%ld\n", num);
    char ps[LONG_BIT_COUNT];
    printf("%s\n", itobs(num, ps));

    return 0;
}
