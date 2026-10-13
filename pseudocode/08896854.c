/* Entry 0x08896854 | file offset 0x0009382C | FUN_08896854 | bytes 604 */

void FUN_08896854(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_130 [256];
  
  uVar1 = DAT_089d6c80;
  iVar2 = FUN_08869ab4(param_3,"map_sound_param.bin");
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    *param_1 = iVar2;
    param_1[1] = iVar2 + 0x10;
    param_1[2] = iVar2 + 0x10 + *(int *)(iVar2 + 8) * 0x90;
  }
  FUN_0893476c(auStack_130,"snd_%s.scd",param_2);
  iVar2 = FUN_08869ab4(param_3,auStack_130);
  if (iVar2 != 0) {
    iVar2 = FUN_088a0dbc(uVar1,auStack_130,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),0);
    param_1[4] = iVar2;
  }
  iVar2 = 0;
  iVar5 = 0;
  if (0 < *(int *)(*param_1 + 0xc)) {
    do {
      iVar3 = FUN_08935970(param_2,param_1[2] + iVar5);
      if (iVar3 == 0) {
        param_1[3] = iVar2;
        goto LAB_08896970;
      }
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 0x28;
    } while (iVar2 < *(int *)(*param_1 + 0xc));
  }
  iVar2 = param_1[3];
LAB_08896970:
  if (iVar2 != -1) {
    iVar5 = param_1[2];
    iVar3 = 0;
    piVar6 = param_1;
    do {
      iVar4 = (int)*(char *)(iVar5 + iVar2 * 0x28 + 0x10 + iVar3);
      if (iVar4 != 0) {
        FUN_0893476c(auStack_130,"%s.scd",param_1[1] + iVar4 * 0x90);
        iVar4 = FUN_08869ab4(param_3,auStack_130);
        if (iVar4 != 0) {
          iVar4 = FUN_088a0dbc(uVar1,auStack_130,*(undefined4 *)(iVar4 + 4),
                               *(undefined4 *)(iVar4 + 8),0);
          piVar6[5] = iVar4;
        }
      }
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 < 8);
    iVar2 = param_1[2] + param_1[3] * 0x28;
    iVar5 = DAT_089d6c88 + 0x14;
    FUN_088a097c(*(undefined4 *)(iVar2 + 0x18),0,iVar5);
    FUN_088a09bc(*(undefined4 *)(iVar2 + 0x1c),0,iVar5);
    FUN_088a185c(DAT_089d6c88,*(undefined4 *)(iVar2 + 0x20));
    FUN_088a1878(*(undefined4 *)(iVar2 + 0x24),DAT_089d6c88);
  }
  return;
}

