/* Entry 0x08907548 | file offset 0x00104520 | FUN_08907548 | bytes 192 */

void FUN_08907548(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 local_70 [96];
  
  puVar5 = local_70;
  FUN_08993560(local_70,0x10,6,FUN_089057bc);
  iVar7 = 0;
  *(int *)(param_1 + 0x16dc) = *(int *)(param_1 + 0x16dc) + 1;
  iVar6 = *(int *)(param_1 + 0x804);
  if (0 < iVar6) {
    puVar4 = (undefined1 *)(param_1 + 4);
    do {
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      *puVar5 = *puVar4;
      uVar3 = puVar4[3];
      puVar5[1] = uVar1;
      uVar1 = puVar4[4];
      puVar5[2] = uVar2;
      uVar2 = puVar4[5];
      puVar5[3] = uVar3;
      puVar5[4] = uVar1;
      puVar5[5] = uVar2;
      iVar6 = *(int *)(param_1 + 0x804);
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 6;
      puVar4 = puVar4 + 0x80;
    } while (iVar7 < iVar6);
  }
  FUN_08906e08(param_1,param_1 + 0x1664,local_70,iVar6,*(undefined4 *)(param_1 + 0x1644));
  return;
}

