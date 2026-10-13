/* Entry 0x088ECC10 | file offset 0x000E9BE8 | FUN_088ecc10 | bytes 124 */

void FUN_088ecc10(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = FUN_088729a0(0);
  pcVar2 = *(code **)(*(int *)(iVar1 + 0x34) + 0xc);
  iVar1 = (*pcVar2)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 8),pcVar2,4,0);
  if (iVar1 == 1) {
    FUN_088ec6bc(param_1 + 4,FUN_088ecd7c,param_1);
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  return;
}

