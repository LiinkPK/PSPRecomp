/* Entry 0x08900B7C | file offset 0x000FDB54 | FUN_08900b7c | bytes 104 */

void FUN_08900b7c(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20 [4];
  
  iVar1 = FUN_0890115c(local_20,4);
  if (iVar1 == 0) {
    *param_1 = 0xffffffff;
  }
  else {
    *param_1 = local_20[0];
    param_1[7] = param_1[7] | 1;
    uVar2 = sceKernelGetSystemTimeLow();
    param_1[0x10] = uVar2 & 0x7fffffff;
  }
  return;
}

