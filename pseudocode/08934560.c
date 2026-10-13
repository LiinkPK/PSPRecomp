/* Entry 0x08934560 | file offset 0x00131538 | FUN_08934560 | bytes 272 */

void FUN_08934560(undefined *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  
  if (param_1 == PTR_DAT_089d88e4) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      piVar7 = *(int **)(iVar1 + iVar4);
      if (piVar7 != (int *)0x0) {
        do {
          piVar8 = (int *)*piVar7;
          FUN_0893d778(param_1,piVar7);
          piVar7 = piVar8;
        } while (piVar8 != (int *)0x0);
        iVar1 = *(int *)(param_1 + 0x4c);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < 0xf);
    FUN_0893d778(param_1,iVar1);
  }
  puVar5 = *(undefined4 **)(param_1 + 0x148);
  puVar3 = (undefined4 *)(param_1 + 0x14c);
  if (puVar5 != (undefined4 *)0x0) {
    if (puVar5 == puVar3) {
      iVar1 = *(int *)(param_1 + 0x54);
      goto LAB_08934618;
    }
    if (puVar5 == puVar3) {
      iVar1 = *(int *)(param_1 + 0x54);
      goto LAB_08934618;
    }
    do {
      puVar6 = (undefined4 *)*puVar5;
      FUN_0893d778(param_1,puVar5);
      puVar5 = puVar6;
    } while (puVar6 != puVar3);
  }
  iVar1 = *(int *)(param_1 + 0x54);
LAB_08934618:
  if (iVar1 != 0) {
    FUN_0893d778(param_1,iVar1);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    (**(code **)(param_1 + 0x3c))(param_1);
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_08934514(param_1,*(int *)(param_1 + 0x1d8));
    }
  }
  return;
}

