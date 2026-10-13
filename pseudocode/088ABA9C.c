/* Entry 0x088ABA9C | file offset 0x000A8A74 | FUN_088aba9c | bytes 88 */

int FUN_088aba9c(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = sceKernelGetSystemTimeWide();
  iVar1 = FUN_0899924c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000000,0);
  return (iVar1 - *(int *)(param_1 + 0xea8)) + *(int *)(param_1 + 0x1fdf8);
}

