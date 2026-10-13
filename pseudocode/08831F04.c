/* Entry 0x08831F04 | file offset 0x0002EEDC | FUN_08831f04 | bytes 304 */

void FUN_08831f04(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = FUN_08838074();
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_2 + 0x180);
    if (sVar1 < 0x1f5) {
      if (499 < sVar1) {
        iVar3 = 0x1f5;
      }
    }
    else if (sVar1 < 0x1f6) {
      iVar3 = 500;
    }
  }
  if ((iVar3 < 0) && (iVar3 = 0x1f5, (*(uint *)(param_2 + 0x38c) & 1) != 0)) {
    iVar3 = 500;
  }
  func_0x08a58a5c(param_2,&DAT_09af84c0);
  FUN_0882fa10(0,0,param_2 + 0x130,iVar3,0);
  FUN_0882fb90(0x41800000,0,param_2 + 0x130,1);
  FUN_08832150(param_1,param_2,param_3);
  *(uint *)(param_3 + 0x28) = *(uint *)(param_3 + 0x28) | 1;
  return;
}

