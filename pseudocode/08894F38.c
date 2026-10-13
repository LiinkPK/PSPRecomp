/* Entry 0x08894F38 | file offset 0x00091F10 | FUN_08894f38 | bytes 404 */

void FUN_08894f38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_0886d2c4(param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  FUN_0886b230(uVar1);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0xc);
  puVar2 = (undefined4 *)FUN_089b0e10(uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  else {
    uVar3 = puVar2[1];
    uVar5 = puVar2[2];
    uVar4 = puVar2[3];
    *(undefined4 *)(param_1 + 0x110) = *puVar2;
    *(undefined4 *)(param_1 + 0x114) = uVar3;
    *(undefined4 *)(param_1 + 0x118) = uVar5;
    *(undefined4 *)(param_1 + 0x11c) = uVar4;
  }
  FUN_089b0dac(uVar1,0x1000,0x1000);
  *(uint *)(*(int *)(param_1 + 0x74) + 0x90) = *(uint *)(*(int *)(param_1 + 0x74) + 0x90) | 8;
  FUN_089a3ebc(param_1 + 0x10);
  FUN_0886e86c(*(undefined4 *)(param_1 + 0x74),param_1 + 0x10,param_1 + 0x60);
  uVar1 = FUN_08940490(param_3,param_4);
  FUN_088950cc(param_1,uVar1);
  return;
}

