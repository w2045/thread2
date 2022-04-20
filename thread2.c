static void thread2_entry(void *param)
{
    rt_uint32_t count = 0;
    for (count = 0; count < 10 ; count++)
    {
        rt_kprintf("thread2 count: %d\n", count);
    }
    rt_kprintf("thread2 exit\n");
}