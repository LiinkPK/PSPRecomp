/* Entry 0x088EAF9C | file offset 0x000E7F74 | FUN_088eaf9c | bytes 184 */

void FUN_088eaf9c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + *(int *)(param_1 + 0x10) * 8);
  uVar1 = *puVar3;
  if (puVar3[1] != 0) {
    FUN_088a3d14(uVar1);
    puVar3[1] = 0;
    uVar1 = *puVar3;
  }
  uVar1 = FUN_088a3cac(uVar1,*(undefined4 *)(param_1 + *(int *)(param_1 + 0x78) * 8 + 0x2c),
                       *(undefined4 *)(param_1 + 0x70));
  puVar3[1] = uVar1;
  FUN_088a3d30(*puVar3,uVar1,&LAB_088eb0a4,param_1 + *(int *)(param_1 + 0x78) * 8 + 0x2c);
  uVar2 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x10) = uVar2;
  if (1 < uVar2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  uVar1 = FUN_088eb07c(param_1);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  return;
}

