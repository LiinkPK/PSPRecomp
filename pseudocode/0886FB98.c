/* Entry 0x0886FB98 | file offset 0x0006CB70 | FUN_0886fb98 | bytes 324 */

ushort * FUN_0886fb98(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 == 0) {
    puVar2 = (ushort *)0x0;
  }
  else if (((*(uint *)(param_1 + 8) & 0xf0000000) == 0) ||
          (DAT_08b63804 < (int)(*(uint *)(param_1 + 8) >> 0x1c))) {
    puVar2 = (ushort *)0x0;
  }
  else {
    iVar1 = FUN_08871684(DAT_089d5ff0,0);
    uVar7 = (uint)(param_1 - iVar1) / 0xc;
    iVar1 = FUN_08871674(DAT_089d5ff0);
    if (iVar1 + -1 < (int)uVar7) {
      puVar2 = (ushort *)0x0;
    }
    else {
      iVar3 = 0;
      iVar1 = DAT_08b63800;
      iVar6 = DAT_08b63800;
      do {
        iVar1 = iVar1 / 2;
        puVar2 = (ushort *)(&DAT_08b63880 + iVar1 * 0x1c);
        uVar5 = (uint)*puVar2;
        if (uVar5 == uVar7) break;
        if (uVar5 < uVar7) {
          iVar3 = iVar1 + 1;
          iVar4 = iVar6 - iVar3;
        }
        else {
          iVar6 = iVar1 + -1;
          iVar4 = iVar6 - iVar3;
        }
        iVar1 = iVar6 + iVar3;
      } while (-1 < iVar4);
      if (uVar5 != uVar7) {
        puVar2 = (ushort *)0x0;
      }
    }
  }
  return puVar2;
}

