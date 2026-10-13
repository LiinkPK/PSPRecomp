/* Entry 0x0887E8C8 | file offset 0x0007B8A0 | FUN_0887e8c8 | bytes 260 */

uint FUN_0887e8c8(ushort *param_1,int param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  if (param_1 == (ushort *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    puVar4 = param_1;
    while (((uVar1 != 0 && ((param_3 == 0 || (uVar1 != param_3)))) &&
           ((param_4 == 0 || ((uVar1 != 0x1f || (puVar4[1] != param_4))))))) {
      if ((0x10 < uVar1) && (uVar1 < 0x20)) {
        iVar2 = FUN_0887e7f4();
        puVar4 = puVar4 + iVar2;
      }
      puVar4 = puVar4 + 1;
      uVar1 = *puVar4;
    }
    uVar3 = (int)puVar4 - (int)param_1;
    if ((uint)((param_2 + -1) * 2) < uVar3) {
      uVar3 = param_2 - 2;
    }
  }
  return uVar3;
}

