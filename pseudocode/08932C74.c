/* Entry 0x08932C74 | file offset 0x0012FC4C | FUN_08932c74 | bytes 400 */

void FUN_08932c74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar3 = FUN_0891f9c8(DAT_089d8520);
  if (iVar3 != 0) {
    sVar1 = *(short *)(iVar3 + 8);
    iVar7 = 0x23;
    iVar4 = FUN_088bb708((int)*(short *)(iVar3 + 6));
    if (iVar4 == 0) {
      sVar2 = *(short *)(iVar3 + 4);
    }
    else {
      iVar7 = (int)*(short *)(iVar4 + 6);
      sVar2 = *(short *)(iVar3 + 4);
    }
    uVar6 = 0;
    if (((*(uint *)(DAT_089d726c + 0x18) & 0x100) != 0) && (sVar2 != -1)) {
      uVar6 = 1;
    }
    iVar4 = FUN_0891f624(iVar3);
    iVar5 = FUN_0891f630(iVar3);
    iVar3 = FUN_0891f640(iVar3);
    FUN_08933088(param_1);
    FUN_08932fb8(param_1);
    FUN_08932470(param_1 + 0x5c,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x34),0,
                 uVar6,param_3,param_4,(int)sVar1,param_5,iVar7,param_6,(int)sVar2,iVar5 == 0,
                 iVar4 == 0,iVar3 != 0);
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return;
}

