/* Entry 0x08811668 | file offset 0x0000E640 | FUN_08811668 | bytes 212 */

void FUN_08811668(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(ushort *)(param_2[1] + 6) & 2) != 0) {
    iVar4 = *param_2;
    iVar3 = 0;
    do {
      iVar1 = FUN_0884f6b8(iVar4 + 0xd64,iVar3);
      if ((iVar1 != 0) && (iVar2 = FUN_0882f6d0(iVar1 + 0x130,param_3), iVar2 != 0)) {
        FUN_0882fa10(param_1,0,iVar1 + 0x130,param_3,0);
        *(short *)(iVar1 + 0x540) = (short)param_3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
  }
  return;
}

