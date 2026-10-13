/* Entry 0x0886BB44 | file offset 0x00068B1C | FUN_0886bb44 | bytes 556 */

void FUN_0886bb44(int param_1,int param_2,char param_3,char param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  if (param_4 == '\0') {
    iVar7 = *(int *)(param_1 + 0x108);
    if (param_5 != 0) {
      iVar7 = iVar7 + param_2 * 0xc;
      uVar5 = *(uint *)(iVar7 + 8);
      if (param_3 == '\0') {
        uVar5 = uVar5 & 0xfffdffff;
      }
      else {
        uVar5 = uVar5 | 0x20000;
      }
      *(uint *)(iVar7 + 8) = uVar5;
      iVar7 = *(int *)(param_1 + 0x108);
    }
    iVar7 = iVar7 + param_2 * 0xc;
    if ((((uint)*(byte *)(iVar7 + 8) & 1 << (*(byte *)(iVar7 + 9) & 0x1f)) != 0) != (bool)param_3) {
      bVar1 = (byte)(1 << (*(byte *)(iVar7 + 9) & 0x1f));
      if (param_3 == '\0') {
        *(byte *)(iVar7 + 8) = *(byte *)(iVar7 + 8) & ~bVar1;
      }
      else {
        *(byte *)(iVar7 + 8) = *(byte *)(iVar7 + 8) | bVar1;
      }
      iVar7 = FUN_0886cde0(param_1,param_2);
      if ((iVar7 != 0) && (puVar4 = (uint *)FUN_0886ce28(param_1,param_2), puVar4 != (uint *)0x0)) {
        for (puVar6 = (uint *)(iVar7 + 4); puVar6 < puVar4; puVar6 = puVar6 + 1) {
          uVar5 = *puVar6;
          if (param_3 == '\0') {
            if (((uVar5 & 0xff000000) == 0) && ((puVar6[-1] & 0xff000000) == 0x10000000)) {
              *puVar6 = uVar5 | 0xa000000;
            }
          }
          else if (((uVar5 & 0xff000000) == 0xa000000) && (puVar6[-2] != 0x30000)) {
            *puVar6 = uVar5 & 0xffffff;
          }
        }
      }
    }
  }
  else {
    iVar2 = FUN_089b0e3c(*(undefined4 *)(param_1 + 0xc));
    for (iVar7 = param_2; iVar7 < iVar2; iVar7 = iVar7 + 1) {
      iVar3 = FUN_089b2ccc(*(undefined4 *)(param_1 + 0xc),iVar7,param_2);
      if (iVar3 != 0) {
        FUN_0886bb44(param_1,iVar7,param_3,0,param_5);
      }
    }
  }
  return;
}

