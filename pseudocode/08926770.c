/* Entry 0x08926770 | file offset 0x00123748 | FUN_08926770 | bytes 372 */

void FUN_08926770(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = 0;
  if (*(char *)(param_3 + 2) != '\0') {
    iVar5 = 0;
    iVar8 = 0;
    do {
      uVar2 = FUN_089268e4(param_1,param_3,(int)*(short *)(*(int *)(param_3 + 0x480) + iVar5));
      sVar1 = FUN_08926994(param_1,uVar2);
      iVar6 = (int)sVar1;
      if (iVar6 < 0) {
        sVar1 = FUN_08926a34(param_1,uVar2);
        iVar6 = (int)sVar1;
      }
      uVar2 = FUN_08926a8c(param_1,param_3,(int)*(short *)(*(int *)(param_3 + 0x480) + iVar5 + 2));
      sVar1 = FUN_08926b3c(param_1,uVar2);
      iVar7 = (int)sVar1;
      if (iVar7 < 0) {
        sVar1 = FUN_08926bdc(param_1,uVar2);
        iVar7 = (int)sVar1;
      }
      iVar3 = FUN_08926550(param_1,param_2,iVar6,iVar7);
      if (iVar3 < 0) {
        iVar3 = FUN_08926508(param_1,param_2,iVar6,iVar7);
      }
      iVar4 = iVar4 + 1;
      *(short *)(*(int *)(param_1 + 0x20) + iVar8 + 0xc) = (short)iVar3;
      iVar5 = iVar5 + 4;
      iVar8 = iVar8 + 2;
    } while (iVar4 < (int)(uint)*(byte *)(param_3 + 2));
  }
  return;
}

