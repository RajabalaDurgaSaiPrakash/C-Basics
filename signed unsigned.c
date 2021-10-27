 #include<stdio.h>
 #include<limits.h>
void main()
{
	printf("short int:\nSigned:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("Unsigned:%d to %hu\n",0,USHRT_MAX);
	printf("int:\nSigned:%d to %d\n",INT_MIN,INT_MAX);
	printf("Unsigned:%u to %u\n",0,UINT_MAX);
	printf("long int:\nSigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
	 printf("Unsigned:%lu to %lu\n",0,ULONG_MAX);
	 printf("long long int:\nSigned:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	 printf("Unsigned:%llu to %llu\n",0,ULONG_LONG_MAX);

}
    

