/* Entry 0x08842F78 | file offset 0x0003FF50 | FUN_08842f78 | bytes 156 */

void FUN_08842f78(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_08844130(DAT_089d4960,0xec);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_08843c1c(puVar1);
    puVar3 = puVar1;
  }
  uVar2 = FUN_088470b8((int)*(short *)(*param_1 + 4));
  *puVar3 = uVar2;
  FUN_0884333c(puVar3,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  FUN_088459e0(puVar3,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
  return;
}

