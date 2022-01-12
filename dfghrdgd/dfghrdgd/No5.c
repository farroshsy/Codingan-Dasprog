#include <stdio.h>
#define NUM_ADDRESSES 15 /* Max Number of addresses to process*/
#define NAMELENGTH 20 /* Max Length of Machine Name*/
typedef struct {/* Structure to hold addresess */
    int a1,a2,a3,a4;
    char name[20];
}
address_t;
int fnLocalAddress(address_t first, address_t second);
void fnScanAddress(address_t *in);
void fnPrintAddress(address_t out);
int main(void)
{
    address_t data[NUM_ADDRESSES];
    int count;
    int sentinel;
    int same_net;
    int i,j;
    count = 0;
    sentinel = 0;
    printf("Enter address data for up to 14 machines.\n");
    printf("Then enter:\n\n 0.0.0.0 NONE <CR>\n\n to exit.\n");
    while(sentinel == 0 && count <NUM_ADDRESSES){
        fnScanAddress(&data[count]);
        if((data[count].a1 == 0) && (data[count].a2 == 0) && (data[count].a3 == 0) && (data[count].a4 == 0))
            sentinel = 1;
        else
            count++;
    }
    for(i = 0; i < (count - 1); ++i) {
        for(j = (i+1); j < count; ++j) {
            same_net = fnLocalAddress(data[i], data[j]);
            if(same_net == 1)
                printf("Manchines %s and %s are on the same local network.\n", data[i].name, data[j].name);
        }
    }
    printf("\n\nADDRESS\t\t\tMACHINE NAME\n\n");
    for(i = 0; i < count; ++i)
    fnPrintAddress(data[i]);
    return(0);
}
int fnLocalAddress(address_t first, address_t second) {
    if((first.a1 == second.a1) && (first.a2 == second.a2))
        return(1);
    else return(0);
}
void fnScanAddress(address_t *in)
{
    scanf("%d.%d.%d.%d%s",&(*in).a1, &(*in).a2, &(*in).a3, &(*in).a4, (*in).name);
}
void fnPrintAddress(address_t out)
{
    printf("%d.%d.%d.%d\t\t%s\n", out.a1, out.a2, out.a3, out.a4, out.name);
}
