/* Entry 0x08907300 | file offset 0x001042D8 | FUN_08907300 | bytes 256 */

void FUN_08907300(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x1690) = 0x12345;
  *(float *)(param_1 + 0x168c) = (float)param_2 * 60.0;
  FUN_08935828(param_1 + 0x1694,0,0x40);
  if (*(int *)(param_1 + 0x1644) == 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x804)) {
      iVar2 = param_1 + 0x1694;
      iVar1 = param_1 + 4;
      do {
        FUN_08906848(param_1 + 0xdc8,iVar2,4,iVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
        iVar1 = iVar1 + 0x80;
      } while (iVar3 < *(int *)(param_1 + 0x804));
    }
    *(undefined4 *)(param_1 + 0x16d4) = 0;
  }
  else {
    FUN_089067d8(param_1 + 0xdc8,param_1 + 0x1690,4,param_1 + 4);
    *(undefined4 *)(param_1 + 0x16d4) = 1;
  }
  *(undefined4 *)(param_1 + 0x1658) = 9;
  return;
}

