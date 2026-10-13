/* Entry 0x0885C6CC | file offset 0x000596A4 | FUN_0885c6cc | bytes 624 */

int FUN_0885c6cc(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                char param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  
  if (param_3 < 1) {
    param_3 = param_1[3];
  }
  uVar9 = param_3 - 1;
  uVar6 = (uVar9 + param_2 & ~uVar9) + (param_3 + 0xfU & ~uVar9);
  puVar8 = (uint *)0x0;
  puVar7 = (uint *)0x0;
  if (param_6 != '\0') {
    puVar10 = (uint *)param_1[1];
    puVar4 = (uint *)param_1[4];
    puVar8 = (uint *)((int)puVar10 - uVar6);
    puVar5 = param_1 + 5;
    puVar7 = puVar5;
    if (puVar4 != (uint *)0x0) {
      for (puVar1 = (uint *)*puVar4; puVar7 = puVar4, puVar1 != (uint *)param_1[1];
          puVar1 = (uint *)*puVar1) {
        puVar4 = puVar1;
      }
    }
    for (; puVar5 != (uint *)param_1[1]; puVar5 = (uint *)*puVar5) {
      if (((puVar8 <= puVar5) && (puVar5 <= puVar10)) ||
         ((puVar8 <= (uint *)((int)puVar5 + puVar5[2]) &&
          ((uint *)((int)puVar5 + puVar5[2]) <= puVar10)))) {
        puVar7 = (uint *)0x0;
        break;
      }
    }
    if ((puVar8 < (uint *)*param_1) || (puVar10 <= puVar8)) {
      puVar7 = (uint *)0x0;
    }
    if (puVar7 == (uint *)0x0) {
      puVar8 = (uint *)0x0;
    }
  }
  if ((puVar7 == (uint *)0x0) && (puVar5 = (uint *)param_1[4], puVar5 != (uint *)0x0)) {
    uVar2 = *puVar5 - ((int)puVar5 + uVar9 + puVar5[2] & ~uVar9);
    if ((0 < (int)uVar2) &&
       ((uVar6 <= uVar2 &&
        (puVar8 = (uint *)((int)puVar5 + uVar9 + puVar5[2] & ~uVar9), puVar8 < (uint *)param_1[1])))
       ) {
      puVar7 = puVar5;
    }
  }
  puVar5 = puVar7;
  if (puVar7 == (uint *)0x0) {
    puVar4 = param_1 + 5;
    while (puVar8 = puVar4, puVar5 = puVar7, puVar8 != (uint *)param_1[1]) {
      puVar4 = (uint *)*puVar8;
      uVar2 = (int)puVar4 - ((int)puVar8 + uVar9 + puVar8[2] & ~uVar9);
      if ((0 < (int)uVar2) && ((puVar5 = puVar8, uVar2 == uVar6 || (uVar6 < uVar2)))) break;
    }
  }
  if (puVar5 == (uint *)0x0) {
    iVar3 = 0;
  }
  else {
    if (param_6 == '\0') {
      puVar8 = (uint *)((int)puVar5 + uVar9 + puVar5[2] & ~uVar9);
      *puVar8 = *puVar5;
    }
    else {
      *puVar8 = *puVar5;
    }
    puVar8[1] = (uint)puVar5;
    puVar8[2] = uVar6;
    *(char *)(puVar8 + 3) = (char)param_3;
    *puVar5 = (uint)puVar8;
    if (*puVar8 != param_1[1]) {
      *(uint **)(*puVar8 + 4) = puVar8;
    }
    param_1[2] = param_1[2] + uVar6;
    if (param_6 == '\0') {
      param_1[4] = puVar8;
    }
    iVar3 = (int)puVar8 + (param_3 + 0xfU & ~uVar9);
  }
  return iVar3;
}

