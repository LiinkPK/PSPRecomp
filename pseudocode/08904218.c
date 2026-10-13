/* Entry 0x08904218 | file offset 0x001011F0 | FUN_08904218 | bytes 524 */

undefined4 FUN_08904218(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_30 [6];
  undefined1 auStack_2a [6];
  
  iVar5 = FUN_089046c4(param_1,param_2,param_4,param_3);
  if (iVar5 == 1) {
    puVar6 = (undefined1 *)FUN_08905810(auStack_30,param_2);
    iVar9 = 0;
    iVar5 = -1;
    if (0 < *(int *)(param_1 + 0x184)) {
      iVar7 = 0;
      do {
        iVar7 = FUN_08935490(param_1 + 0x124 + (iVar9 + iVar7) * 2,puVar6,6);
        iVar5 = iVar9;
        if (iVar7 == 0) break;
        iVar9 = iVar9 + 1;
        iVar7 = iVar9 * 2;
        iVar5 = -1;
      } while (iVar9 < *(int *)(param_1 + 0x184));
    }
    if (iVar5 < 0) {
      if (*(int *)(param_1 + 0x184) < *(int *)(param_1 + 0x188)) {
        iVar5 = param_1 + *(int *)(param_1 + 0x184) * 6;
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        *(undefined1 *)(iVar5 + 0x124) = *puVar6;
        uVar3 = puVar6[3];
        *(undefined1 *)(iVar5 + 0x125) = uVar1;
        uVar1 = puVar6[4];
        *(undefined1 *)(iVar5 + 0x126) = uVar2;
        uVar2 = puVar6[5];
        *(undefined1 *)(iVar5 + 0x127) = uVar3;
        *(undefined1 *)(iVar5 + 0x128) = uVar1;
        *(undefined1 *)(iVar5 + 0x129) = uVar2;
        bVar4 = true;
        *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
      }
      else {
        bVar4 = false;
      }
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      return 1;
    }
  }
  uVar8 = FUN_08905810(auStack_2a,param_2);
  iVar9 = 0;
  iVar5 = -1;
  if (0 < *(int *)(param_1 + 0x184)) {
    iVar7 = 0;
    do {
      iVar7 = FUN_08935490(param_1 + 0x124 + (iVar9 + iVar7) * 2,uVar8,6);
      iVar5 = iVar9;
      if (iVar7 == 0) break;
      iVar9 = iVar9 + 1;
      iVar7 = iVar9 * 2;
      iVar5 = -1;
    } while (iVar9 < *(int *)(param_1 + 0x184));
  }
  if (iVar5 < 0) {
    *(undefined1 *)(param_1 + 0x11c) = 1;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    *(undefined1 *)(param_1 + 0x116) = *param_2;
    uVar3 = param_2[3];
    *(undefined1 *)(param_1 + 0x117) = uVar1;
    uVar1 = param_2[4];
    *(undefined1 *)(param_1 + 0x118) = uVar2;
    uVar2 = param_2[5];
    *(undefined1 *)(param_1 + 0x119) = uVar3;
    *(undefined1 *)(param_1 + 0x11a) = uVar1;
    *(undefined1 *)(param_1 + 0x11b) = uVar2;
  }
  return 0;
}

