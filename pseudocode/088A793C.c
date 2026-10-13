/* Entry 0x088A793C | file offset 0x000A4914 | FUN_088a793c | bytes 564 */

void FUN_088a793c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_088a7384(&local_50,param_1);
    local_70 = local_50;
    local_6c = local_4c;
    local_68 = local_48;
    local_64 = local_44;
    local_60 = local_50;
    local_5c = local_4c;
    local_58 = local_48;
    local_80 = local_50;
    local_7c = local_4c;
    local_78 = local_48;
    FUN_089a34c0(param_1 + 0x1f0,&local_80);
    iVar4 = 0;
    iVar5 = 0;
    piVar7 = (int *)(param_1 + 0x1fc);
    do {
      piVar6 = (int *)(*(int *)(param_1 + 0xc4) + iVar5);
      bVar1 = false;
      if ((*piVar6 == 0) && (bVar1 = false, piVar6[1] == 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        return;
      }
      if ((((piVar6[4] & 4U) == 0) && (*piVar6 + piVar6[1] != 0)) &&
         (puVar2 = (undefined4 *)FUN_088a24d4(1,*piVar6 + piVar6[1],1,0),
         puVar2 != (undefined4 *)0x0)) {
        puVar2[0xf] = (float)piVar6[2];
        iVar3 = piVar6[3];
        puVar2[0x11] = &LAB_088a8040;
        puVar2[0x12] = param_1;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[0x10] = (float)iVar3;
        puVar2[5] = 0;
        puVar2[0xd] = puVar2[0xd] & 0xfffffdff;
        uVar8 = *(undefined4 *)(param_1 + 500);
        uVar9 = *(undefined4 *)(param_1 + 0x1f8);
        *puVar2 = *(undefined4 *)(param_1 + 0x1f0);
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[0xd] = puVar2[0xd] & 0xfffffdff;
        if (*(undefined4 **)(param_1 + 0xd0) != (undefined4 *)0x0) {
          puVar2[0x15] = **(undefined4 **)(param_1 + 0xd0);
        }
        *piVar7 = (int)puVar2;
        piVar7[1] = (int)piVar6;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x14;
      piVar7 = piVar7 + 2;
    } while (iVar4 < 0x10);
  }
  return;
}

