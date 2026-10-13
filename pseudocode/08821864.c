/* Entry 0x08821864 | file offset 0x0001E83C | FUN_08821864 | bytes 520 */

undefined4 FUN_08821864(int param_1,byte *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  if (param_2 == (byte *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar4 = (uint)(char)*param_2;
    if (((uVar4 & 0x10) != 0) &&
       ((int)((((uVar4 & 0xc) >> 2 ^ 2) - 2) * 0x1000000) >> 0x18 !=
        (int)(((uVar4 & 3 ^ 2) - 2) * 0x1000000) >> 0x18)) {
      *param_2 = *param_2 & 0xef;
      uVar4 = (uint)(char)*param_2;
      if ((int)((((uVar4 & 0xc) >> 2 ^ 2) - 2) * 0x1000000) >> 0x18 == 0) {
        param_2[1] = 100;
        uVar4 = (uint)(char)*param_2;
      }
    }
    if ((uVar4 & 0x10) == 0) {
      fVar7 = (float)FUN_08838300(*(undefined4 *)(param_1 + 4));
      uVar4 = (uint)(char)*param_2;
      bVar1 = false;
      iVar3 = (int)(((uVar4 & 3 ^ 2) - 2) * 0x1000000) >> 0x18;
      if ((iVar3 == 0) && ((int)((((uVar4 & 0xc) >> 2 ^ 2) - 2) * 0x1000000) >> 0x18 == 0)) {
        iVar5 = ((int)(char)param_2[1] + (int)(fVar7 * 5.0)) * 0x1000000 >> 0x18;
        if (100 < iVar5) {
          iVar5 = 100;
          bVar1 = true;
        }
      }
      else {
        iVar5 = ((int)(char)param_2[1] - (int)(fVar7 * 5.0)) * 0x1000000 >> 0x18;
        iVar6 = iVar3;
        if (iVar3 == 0) {
          iVar6 = (int)((((uVar4 & 0xc) >> 2 ^ 2) - 2) * 0x1000000) >> 0x18;
        }
        if (iVar6 == 2) {
          if (iVar5 < 0) {
            iVar5 = 0;
            bVar1 = true;
          }
        }
        else if (iVar5 < 0x32) {
          iVar5 = 0x32;
          bVar1 = true;
        }
      }
      if (((bVar1) && ((char)param_2[2] == iVar5)) &&
         (iVar3 == (int)((((uVar4 & 0xc) >> 2 ^ 2) - 2) * 0x1000000) >> 0x18)) {
        if (fVar7 != 0.0) {
          *param_2 = *param_2 | 0x10;
        }
      }
      else {
        param_2[1] = (byte)iVar5;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

