/* Entry 0x0889EE60 | file offset 0x0009BE38 | FUN_0889ee60 | bytes 408 */

void FUN_0889ee60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (DAT_089d5f20 == '\x01') {
    pcVar4 = "prologus_bgm_entry.bin";
  }
  else {
    pcVar4 = "bgm_entry.bin";
  }
  iVar1 = FUN_08869ab4(param_2,pcVar4);
  if (iVar1 != 0) {
    iVar6 = *(int *)(iVar1 + 4);
    iVar7 = *(int *)(iVar1 + 8);
    uVar2 = FUN_088a0cb0(iVar7 + (0x100 - *(int *)(iVar6 + 8)) * 0x2c,pcVar4);
    *param_1 = uVar2;
    uVar2 = FUN_088a0cf8(uVar2);
    param_1[1] = uVar2;
    FUN_08935524(uVar2,*(undefined4 *)(iVar1 + 4),iVar7);
    param_1[2] = param_1[1] + 0x10;
    param_1[0x10] = *(undefined4 *)(param_1[1] + 8);
    iVar6 = 0x100 - *(int *)(iVar6 + 8);
    uVar2 = FUN_088820d8(iVar6 * 0x84);
    iVar1 = 0;
    param_1[0x11] = uVar2;
    if (0 < iVar6) {
      iVar7 = 0;
      do {
        *(undefined2 *)(param_1[0x11] + iVar7) = 0xffff;
        iVar1 = iVar1 + 1;
        *(undefined2 *)(param_1[0x11] + iVar7 + 2) = 0xffff;
        *(undefined2 *)(param_1[0x11] + iVar7 + 4) = 0;
        iVar7 = iVar7 + 0x84;
      } while (iVar1 < iVar6);
    }
  }
  iVar1 = FUN_08869ab4(param_3,"bgm_name.bin");
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(iVar1 + 4);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    uVar2 = FUN_088821c0();
    FUN_0887ac70(param_1 + 3,uVar5,uVar3,uVar2);
  }
  return;
}

