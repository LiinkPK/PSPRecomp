/* Entry 0x0891386C | file offset 0x00110844 | FUN_0891386c | bytes 416 */

void FUN_0891386c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_08913b58(param_1,2);
  iVar6 = param_1 + 0xa0;
  FUN_088d727c(iVar6);
  FUN_088d73b4(iVar6);
  FUN_088d72e8(iVar6,0x2d,0x4b,0,0,0);
  FUN_088d72e8(iVar6,0x2e,0x4c,0,0,0);
  if ((*(uint *)(DAT_089d726c + 0x18) & 0x100) != 0) {
    FUN_088d72e8(iVar6,0x2f,0x4d,0,0,0);
  }
  FUN_088d72e8(iVar6,0x30,0x4e,0,0,0);
  FUN_088d73f4(iVar6,1);
  iVar1 = FUN_088d768c(iVar6);
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_088d76a8(iVar6,iVar4);
      iVar5 = iVar4;
      if (iVar2 == *(int *)(param_1 + 0x56c)) break;
      iVar4 = iVar4 + 1;
      iVar5 = 0;
    } while (iVar4 < iVar1);
  }
  uVar3 = FUN_088729a0(0);
  FUN_088d743c(iVar6,uVar3,iVar5,0,0);
  FUN_088cda34(param_1 + 0x3c0);
  FUN_088ce72c(param_1 + 0x404);
  FUN_08914b74(param_1);
  FUN_088a18b0(DAT_089d6c88,0x1e,0x3c);
  return;
}

