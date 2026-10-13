/* Entry 0x088B0BA8 | file offset 0x000ADB80 | FUN_088b0ba8 | bytes 96 */

void FUN_088b0ba8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(DAT_089d7260 + 0x14);
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  *(undefined4 *)(iVar1 + 0xea48) = *param_1;
  uVar3 = param_1[3];
  *(undefined4 *)(iVar1 + 0xea4c) = uVar4;
  uVar4 = param_1[4];
  *(undefined4 *)(iVar1 + 0xea50) = uVar2;
  uVar2 = param_1[5];
  *(undefined4 *)(iVar1 + 0xea54) = uVar3;
  *(undefined4 *)(iVar1 + 0xea58) = uVar4;
  *(undefined4 *)(iVar1 + 0xea5c) = uVar2;
  FUN_088afb08(DAT_089d7260);
  return;
}

