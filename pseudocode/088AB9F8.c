/* Entry 0x088AB9F8 | file offset 0x000A89D0 | FUN_088ab9f8 | bytes 96 */

void FUN_088ab9f8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = sceKernelGetSystemTimeWide();
  iVar1 = FUN_0899924c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1000000,0);
  *(int *)(param_1 + 0x1fdf8) = *(int *)(param_1 + 0x1fdf8) + (iVar1 - *(int *)(param_1 + 0xea8));
  *(int *)(param_1 + 0xea8) = iVar1;
  return;
}

