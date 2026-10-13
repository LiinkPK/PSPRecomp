/* Entry 0x08996674 | file offset 0x0019364C | FUN_08996674 | bytes 736 */

uint FUN_08996674(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    uVar10 = FUN_0899a1f4(param_1,param_2,param_1,param_2);
    uVar1 = FUN_0899a118((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),param_1,param_2);
    return uVar1;
  }
  iVar3 = (int)param_2 >> 0x14;
  if ((int)param_2 < 1) {
    if ((param_2 & 0x7fffffff) == 0 && param_1 == 0) {
      return param_1;
    }
    if ((int)param_2 < 0) {
      uVar1 = FUN_0899a56c(0,0,0,0);
      return uVar1;
    }
  }
  if (iVar3 == 0) {
    iVar3 = 0;
    while (param_2 == 0) {
      iVar3 = iVar3 + -0x15;
      param_2 = param_1 >> 0xb;
      param_1 = param_1 << 0x15;
    }
    uVar1 = 0;
    for (; (param_2 & 0x100000) == 0; param_2 = param_2 << 1) {
      uVar1 = uVar1 + 1;
    }
    iVar3 = (iVar3 - uVar1) + 1;
    param_2 = param_2 | param_1 >> (0x20 - uVar1 & 0x1f);
    param_1 = param_1 << (uVar1 & 0x1f);
  }
  iVar4 = (param_2 & 0xfffff | 0x100000) * 2 - ((int)param_1 >> 0x1f);
  uVar1 = param_1 * 2;
  if ((iVar3 - 0x3ffU & 1) != 0) {
    iVar4 = iVar4 * 2 - ((int)uVar1 >> 0x1f);
    uVar1 = param_1 * 4;
  }
  uVar7 = 0;
  iVar3 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar2 = 0x200000;
  do {
    iVar8 = iVar3 + uVar2;
    if (iVar8 <= iVar4) {
      iVar3 = iVar8 + uVar2;
      iVar4 = iVar4 - iVar8;
      uVar5 = uVar5 + uVar2;
    }
    iVar4 = iVar4 * 2 - ((int)uVar1 >> 0x1f);
    uVar1 = uVar1 * 2;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  uVar2 = 0x80000000;
  do {
    uVar9 = uVar2 + uVar7;
    if ((iVar3 < iVar4) || ((iVar4 == iVar3 && (uVar9 <= uVar1)))) {
      uVar7 = uVar2 + uVar9;
      iVar8 = iVar3;
      if (((uVar9 & 0x80000000) == 0x80000000) && ((uVar7 & 0x80000000) == 0)) {
        iVar8 = iVar3 + 1;
      }
      iVar4 = iVar4 - iVar3;
      if (uVar1 < uVar9) {
        iVar4 = iVar4 + -1;
      }
      uVar1 = uVar1 - uVar9;
      uVar6 = uVar6 + uVar2;
      iVar3 = iVar8;
    }
    iVar4 = iVar4 * 2 - ((int)uVar1 >> 0x1f);
    uVar1 = uVar1 * 2;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  if (iVar4 != 0 || uVar1 != 0) {
    if (uVar6 == 0xffffffff) {
      uVar6 = 0;
      uVar5 = uVar5 + 1;
    }
    else {
      uVar6 = uVar6 + (uVar6 & 1);
    }
  }
  uVar6 = uVar6 >> 1;
  if ((uVar5 & 1) != 0) {
    uVar6 = uVar6 | 0x80000000;
  }
  return uVar6;
}

