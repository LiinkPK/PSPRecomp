/* Entry 0x088F4BD8 | file offset 0x000F1BB0 | FUN_088f4bd8 | bytes 116 */

void FUN_088f4bd8(int param_1)

{
  byte bVar1;
  undefined1 auStack_90 [128];
  
  FUN_088f4b68(param_1);
  FUN_088f4c4c(param_1);
  bVar1 = sceKernelGetSystemTimeLow();
  *(byte *)(param_1 + 0x26) = bVar1 & 7;
  sceUtilityGetSystemParamString(1,auStack_90,0x80);
  param_1 = param_1 + 0x30;
  FUN_0893fca8(param_1,0x1a,auStack_90);
  FUN_0887e81c(param_1,param_1,0x1a);
  return;
}

