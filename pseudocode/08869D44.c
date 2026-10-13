/* Entry 0x08869D44 | file offset 0x00066D1C | FUN_08869d44 | bytes 520 */

undefined4 * FUN_08869d44(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  FUN_08869ca0();
  puVar2 = param_2 + 0x29;
  param_1[0x24] = param_2[0x24];
  iVar3 = 0;
  iVar4 = 0xc;
  uVar7 = *puVar2;
  puVar1 = param_1 + 0x29;
  puVar6 = puVar2;
  do {
    uVar5 = puVar6[1];
    *puVar1 = uVar7;
    iVar3 = iVar3 + 8;
    puVar1[1] = uVar5;
    puVar6 = (undefined4 *)((int)puVar2 + iVar3);
    iVar4 = iVar4 + -1;
    uVar7 = *puVar6;
    puVar1 = (undefined4 *)((int)(param_1 + 0x29) + iVar3);
  } while (iVar4 != 0);
  *puVar1 = uVar7;
  FUN_089359a4(param_1 + 0x44,param_2 + 0x44);
  iVar3 = 0;
  if ('\0' < *(char *)(param_2 + 0x23)) {
    puVar6 = param_2 + 1;
    puVar1 = param_1;
    do {
      uVar7 = FUN_089b0220(puVar6[2],0x12);
      puVar1[3] = uVar7;
      puVar1[4] = puVar6[3];
      iVar3 = iVar3 + 1;
      puVar1[1] = *puVar6;
      puVar2 = puVar6 + 1;
      puVar6 = puVar6 + 4;
      puVar1[2] = *puVar2;
      puVar1 = puVar1 + 4;
    } while (iVar3 < *(char *)(param_2 + 0x23));
  }
  param_1[0x21] = param_1 + 1;
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)((int)param_1 + 0x8e) = *(undefined1 *)((int)param_2 + 0x8e);
  uVar7 = FUN_0885c6cc(*(undefined4 *)(DAT_089d5f94 + 4),(uint)*(byte *)((int)param_1 + 0x8e) * 3,0,
                       0,1,0);
  param_1[0x43] = uVar7;
  iVar3 = 0;
  iVar4 = 0;
  if (*(char *)((int)param_1 + 0x8e) != '\0') {
    do {
      *(undefined1 *)(param_1[0x43] + iVar4) = *(undefined1 *)(param_2[0x43] + iVar4);
      *(undefined1 *)(param_1[0x43] + iVar4 + 1) = *(undefined1 *)(param_2[0x43] + iVar4 + 1);
      *(undefined1 *)(param_1[0x43] + iVar4 + 2) = *(undefined1 *)(param_2[0x43] + iVar4 + 2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 3;
    } while (iVar3 < (int)(uint)*(byte *)((int)param_1 + 0x8e));
  }
  iVar3 = FUN_089b0e3c(param_1[3]);
  uVar7 = FUN_0885c6cc(*(undefined4 *)(DAT_089d5f94 + 4),iVar3 << 2,0,0,1,0);
  *param_1 = uVar7;
  FUN_08935524(uVar7,*param_2,iVar3 << 2);
  return param_1;
}

