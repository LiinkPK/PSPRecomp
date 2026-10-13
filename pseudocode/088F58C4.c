/* Entry 0x088F58C4 | file offset 0x000F289C | FUN_088f58c4 | bytes 548 */

void FUN_088f58c4(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 auStack_d70 [850];
  int local_28;
  
  FUN_088f4fc8();
  iVar3 = 0;
  iVar5 = 0x1c;
  uVar8 = *param_2;
  puVar7 = param_2;
  puVar9 = param_1;
  do {
    uVar6 = puVar7[1];
    *puVar9 = uVar8;
    iVar3 = iVar3 + 8;
    puVar9[1] = uVar6;
    puVar7 = (undefined4 *)((int)param_2 + iVar3);
    iVar5 = iVar5 + -1;
    uVar8 = *puVar7;
    puVar9 = (undefined4 *)((int)param_1 + iVar3);
  } while (iVar5 != 0);
  *puVar9 = uVar8;
  uVar8 = FUN_088f5efc();
  param_1[0xb] = uVar8;
  if ((*(byte *)((int)param_2 + 0x27) & 0x40) == 0) {
    FUN_088f5c40(param_1 + 0x3f,param_3,param_4,param_5,param_2);
    sVar1 = *(short *)((int)param_2 + 0xf2);
  }
  else {
    iVar3 = FUN_088cb164(param_3,(int)*(char *)(param_2 + 0x39));
    FUN_088f5ae8(param_1 + 0x3f,param_3,param_4,(int)*(char *)(param_2 + 0x39),
                 (int)*(char *)(iVar3 + 0x774),(int)*(char *)((int)param_2 + 0xe6));
    sVar1 = *(short *)((int)param_2 + 0xf2);
  }
  local_28 = FUN_08929ccc(auStack_d70,10,DAT_089d7f30,DAT_089d7f34,0);
  iVar3 = FUN_08929e2c((int)sVar1);
  if ((-1 < iVar3) && (iVar3 < local_28)) {
    puVar10 = auStack_d70 + iVar3 * 0x55;
    iVar3 = 0;
    iVar5 = 0x2a;
    uVar8 = *puVar10;
    puVar7 = puVar10;
    puVar9 = param_1 + 0x3d5;
    do {
      uVar6 = puVar7[1];
      *puVar9 = uVar8;
      iVar3 = iVar3 + 8;
      puVar9[1] = uVar6;
      puVar7 = (undefined4 *)((int)puVar10 + iVar3);
      iVar5 = iVar5 + -1;
      uVar8 = *puVar7;
      puVar9 = (undefined4 *)((int)(param_1 + 0x3d5) + iVar3);
    } while (iVar5 != 0);
    *puVar9 = uVar8;
  }
  iVar5 = *(int *)(param_3 + 0x11948);
  iVar4 = (int)*(short *)(param_1 + 0x3c) + *(int *)(param_3 + 0x11944);
  iVar3 = 9999;
  if (iVar4 < 9999) {
    iVar3 = iVar4;
  }
  *(short *)(param_1 + 0x3c) = (short)iVar3;
  iVar5 = *(short *)((int)param_1 + 0xf2) + iVar5;
  uVar2 = 9999;
  if (iVar5 < 9999) {
    uVar2 = (undefined2)iVar5;
  }
  *(undefined2 *)((int)param_1 + 0xf2) = uVar2;
  return;
}

