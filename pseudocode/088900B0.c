/* Entry 0x088900B0 | file offset 0x0008D088 | FUN_088900b0 | bytes 976 */

/* WARNING: Removing unreachable block (ram,0x08890128) */

void FUN_088900b0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  if (param_2 == 4) {
    param_2 = DAT_09afde48 * 0x343fd + 0x269ec3 >> 0x10 & 3;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x3c) = param_2;
  if ((int)param_2 < 2) {
    if (0 < (int)param_2) {
      puVar1 = (undefined4 *)FUN_0888ea68(0x14);
      piVar6 = (int *)(param_1 + 0x24);
      puVar4 = (undefined4 *)0x0;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &DAT_089ca670;
        puVar4 = puVar1;
      }
      iVar2 = *piVar6;
      *piVar6 = iVar2 + 1;
      *(undefined4 **)(param_1 + iVar2 * 4 + 0x10) = puVar4;
      puVar1 = (undefined4 *)FUN_0888ea68(0x14);
      puVar4 = (undefined4 *)0x0;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &DAT_089ca6a8;
        puVar4 = puVar1;
      }
      iVar2 = *piVar6;
      *piVar6 = iVar2 + 1;
      *(undefined4 **)(param_1 + iVar2 * 4 + 0x10) = puVar4;
      puVar1 = (undefined4 *)FUN_0888ea68(0x14);
      puVar4 = (undefined4 *)0x0;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &DAT_089ca6e0;
        puVar4 = puVar1;
      }
      iVar2 = *piVar6;
      *piVar6 = iVar2 + 1;
      *(undefined4 **)(param_1 + iVar2 * 4 + 0x10) = puVar4;
    }
  }
  else if ((int)param_2 < 3) {
    iVar5 = FUN_0888ea68(0x14);
    piVar6 = (int *)(param_1 + 0x24);
    iVar2 = 0;
    if (iVar5 != 0) {
      FUN_0888eaa8(iVar5);
      iVar2 = iVar5;
    }
    iVar5 = *piVar6;
    *piVar6 = iVar5 + 1;
    *(int *)(param_1 + iVar5 * 4 + 0x10) = iVar2;
    iVar5 = FUN_0888ea68(0x34);
    iVar2 = 0;
    if (iVar5 != 0) {
      FUN_0888ed88(iVar5);
      iVar2 = iVar5;
    }
    iVar5 = *piVar6;
    *piVar6 = iVar5 + 1;
    *(int *)(param_1 + iVar5 * 4 + 0x10) = iVar2;
  }
  else if ((int)param_2 < 4) {
    puVar1 = (undefined4 *)FUN_0888ea68(0x14);
    piVar6 = (int *)(param_1 + 0x24);
    puVar4 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_089ca670;
      puVar4 = puVar1;
    }
    iVar2 = *piVar6;
    *piVar6 = iVar2 + 1;
    *(undefined4 **)(param_1 + iVar2 * 4 + 0x10) = puVar4;
    puVar1 = (undefined4 *)FUN_0888ea68(0x14);
    puVar4 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_089ca6a8;
      puVar4 = puVar1;
    }
    iVar2 = *piVar6;
    *piVar6 = iVar2 + 1;
    *(undefined4 **)(param_1 + iVar2 * 4 + 0x10) = puVar4;
    iVar2 = FUN_0888ea68(0x14);
    if (iVar2 == 0) {
      iVar5 = *piVar6;
      iVar2 = 0;
    }
    else {
      FUN_0888eaa8(iVar2);
      iVar5 = *piVar6;
    }
    *piVar6 = iVar5 + 1;
    *(int *)(param_1 + iVar5 * 4 + 0x10) = iVar2;
    iVar2 = FUN_0888ea68(0x34);
    if (iVar2 == 0) {
      iVar5 = *piVar6;
      iVar2 = 0;
    }
    else {
      FUN_0888ed88(iVar2);
      iVar5 = *piVar6;
    }
    *piVar6 = iVar5 + 1;
    *(int *)(param_1 + iVar5 * 4 + 0x10) = iVar2;
    puVar1 = (undefined4 *)FUN_0888ea68(0x14);
    puVar4 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_089ca6e0;
      puVar4 = puVar1;
    }
    iVar2 = *piVar6;
    *piVar6 = iVar2 + 1;
    *(undefined4 **)(param_1 + iVar2 * 4 + 0x10) = puVar4;
  }
  iVar5 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar3 = **(int **)(iVar2 + 0x10);
      (**(code **)(iVar3 + 0xc))
                ((int)*(int **)(iVar2 + 0x10) + (int)*(short *)(iVar3 + 8),param_3,param_4);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  FUN_08935828(param_1 + 0x28,0,5);
  return;
}

