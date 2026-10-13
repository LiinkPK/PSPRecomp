/* Entry 0x08988F1C | file offset 0x00185EF4 | FUN_08988f1c | bytes 948 */

undefined4 FUN_08988f1c(int param_1,int param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  ushort local_2e;
  undefined2 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*(float *)(param_3 + 0x58) == 0.0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  iVar6 = **(int **)(param_1 + 0xc);
  iVar6 = (**(code **)(iVar6 + 0x14))
                    ((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar6 + 0x10),param_3);
  *(int *)(param_1 + 0x8c) = iVar6;
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = **(int **)(param_1 + 0xc);
  iVar6 = (**(code **)(iVar6 + 0x1c))((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar6 + 0x18))
  ;
  iVar8 = *(int *)(iVar6 + 0x20) + 1;
  local_1c = iVar8 * 0x100;
  iVar6 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),local_1c,&local_28,1);
  if (iVar6 != 0) {
    iVar7 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar7 + 0xb4) = *(int *)(iVar7 + 0xb4) + local_28;
  }
  *(int *)(param_1 + 0x68) = iVar6;
  iVar6 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),local_1c,&local_24,1);
  if (iVar6 != 0) {
    iVar7 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(iVar7 + 0xb4) = *(int *)(iVar7 + 0xb4) + local_24;
  }
  *(int *)(param_1 + 0x70) = iVar6;
  iVar6 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),local_1c,&local_20,1);
  if (iVar6 != 0) {
    param_2 = param_2 + (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) + local_20;
  }
  *(int *)(param_1 + 0x78) = iVar6;
  if (((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x70) == 0)) ||
     (*(int *)(param_1 + 0x78) == 0)) {
    return 0;
  }
  if (*(char *)(param_3 + 0xc0) == '\0') {
    puVar3 = (undefined4 *)FUN_0898d440(4);
    puVar9 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = &DAT_089c5688;
      puVar9 = puVar3;
    }
    *(undefined4 **)(param_1 + 0x60) = puVar9;
    if (puVar9 == (undefined4 *)0x0) {
      return 0;
    }
LAB_08989190:
    if (*(char *)(param_3 + 0xbe) == '\0') {
      puVar3 = (undefined4 *)FUN_0898d440(4);
      puVar9 = (undefined4 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &DAT_089c56e0;
        puVar9 = puVar3;
      }
      *(undefined4 **)(param_1 + 100) = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        return 0;
      }
    }
    else {
      local_40[0] = *(undefined4 *)(param_3 + 0x70);
      local_38 = *(undefined4 *)(param_3 + 0x74);
      local_34 = *(undefined4 *)(param_3 + 0x78);
      local_30 = *(undefined2 *)(param_3 + 0x96);
      local_2c = *(undefined2 *)(param_3 + 0x98);
      local_2e = (ushort)*(byte *)(param_3 + 0xbf);
      piVar4 = (int *)FUN_0898d440(0x34);
      piVar11 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        FUN_08989b1c(piVar4);
        piVar11 = piVar4;
      }
      *(int **)(param_1 + 100) = piVar11;
      if ((piVar11 == (int *)0x0) ||
         (iVar6 = (**(code **)(*piVar11 + 0x14))
                            ((int)piVar11 + (int)*(short *)(*piVar11 + 0x10),local_40,iVar8 * 0x10),
         iVar6 == 0)) {
        return 0;
      }
    }
    FUN_08988b64(param_1,param_3);
    uVar5 = 1;
  }
  else {
    piVar4 = (int *)FUN_0898d440(200);
    piVar11 = (int *)0x0;
    if (piVar4 != (int *)0x0) {
      FUN_0898f978(piVar4,param_3);
      piVar11 = piVar4;
    }
    *(int **)(param_1 + 0x60) = piVar11;
    if (piVar11 != (int *)0x0) {
      iVar10 = *piVar11;
      iVar6 = **(int **)(param_1 + 0xc);
      sVar1 = *(short *)(iVar10 + 0x10);
      iVar6 = (**(code **)(iVar6 + 0x1c))
                        ((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar6 + 0x18));
      iVar7 = -1;
      if ((*(char *)(param_3 + 0xc4) == '\0') || (bVar2 = false, *(char *)(param_3 + 0xc5) != '\0'))
      {
        bVar2 = true;
      }
      if (bVar2) {
        iVar7 = 0;
      }
      iVar6 = (**(code **)(iVar10 + 0x14))
                        ((int)piVar11 + (int)sVar1,param_3,*(int *)(iVar6 + 0x20) + iVar7);
      if (iVar6 != 0) goto LAB_08989190;
    }
    uVar5 = 0;
  }
  return uVar5;
}

