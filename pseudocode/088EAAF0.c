/* Entry 0x088EAAF0 | file offset 0x000E7AC8 | FUN_088eaaf0 | bytes 280 */

void FUN_088eaaf0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar6 = 0;
  puVar7 = param_1;
  do {
    uVar1 = FUN_088a3e9c();
    *puVar7 = uVar1;
    uVar6 = uVar6 + 1;
    puVar7 = puVar7 + 2;
  } while (uVar6 < 2);
  uVar6 = 4;
  if (1 < *(byte *)(param_2 + 4)) {
    uVar6 = (uint)*(byte *)(param_2 + 4);
  }
  param_1[0x1b] = uVar6;
  param_1[5] = *(undefined4 *)(param_2 + 0x484);
  param_1[6] = (uint)*(byte *)(param_2 + 3);
  uVar1 = FUN_088a0cb0(0x100000,"TALKEVENT_VOICE");
  param_1[10] = uVar1;
  uVar1 = FUN_088a0cf8(uVar1);
  iVar5 = param_1[0x1b];
  iVar2 = 0x100000;
  param_1[9] = uVar1;
  if (0x100000 % iVar5 != 0) {
    for (iVar2 = 0xffc00; iVar2 % iVar5 != 0; iVar2 = iVar2 + -0x400) {
    }
  }
  iVar3 = 0;
  param_1[0x1c] = iVar2 / iVar5;
  if (0 < iVar5) {
    iVar4 = param_1[9];
    iVar2 = param_1[0x1c];
    do {
      param_1[0xb] = iVar4;
      *(undefined1 *)(param_1 + 0xc) = 1;
      *(undefined1 *)((int)param_1 + 0x31) = 0;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + iVar2;
      param_1 = param_1 + 2;
    } while (iVar3 < iVar5);
  }
  return;
}

