/* Entry 0x08871BD0 | file offset 0x0006EBA8 | FUN_08871bd0 | bytes 232 */

void FUN_08871bd0(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  iVar1 = DAT_089d6008;
  uVar3 = param_1[1];
  uVar2 = *param_1;
  param_1[1] = param_4;
  *param_1 = param_3;
  uVar5 = (param_4 ^ uVar3) & param_4;
  uVar4 = (param_3 ^ uVar2) & param_3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = (param_4 ^ uVar3) & ~param_4;
  param_1[4] = (param_3 ^ uVar2) & ~param_3;
  param_1[7] = 0;
  param_1[6] = 0;
  if ((uVar4 == 0) && (uVar5 == 0)) {
    if ((param_3 != 0) || (param_4 != 0)) {
      if (DAT_089d5eac < 2.0) {
        fVar6 = (float)param_1[0xc] - 2.0;
      }
      else {
        fVar6 = (float)param_1[0xc] - DAT_089d5eac;
      }
      param_1[0xc] = (uint)fVar6;
      if (fVar6 <= 0.0) {
        uVar2 = *(uint *)(iVar1 + 0x260);
        param_1[7] = param_4;
        param_1[6] = param_3;
        param_1[0xc] = uVar2;
      }
    }
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x25c);
    param_1[7] = uVar5;
    param_1[6] = uVar4;
    param_1[0xc] = uVar2;
  }
  return;
}

