/* Entry 0x08911368 | file offset 0x0010E340 | FUN_08911368 | bytes 216 */

void FUN_08911368(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = param_1 + 8;
  iVar3 = param_1;
  do {
    (**(code **)(*(int *)(iVar3 + 0x18) + 0x14))(iVar2 + *(short *)(*(int *)(iVar3 + 0x18) + 0x10));
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 0x14;
    iVar2 = iVar2 + 0x14;
  } while (iVar1 < 8);
  iVar1 = 0;
  iVar2 = param_1 + 0xa8;
  iVar3 = param_1;
  do {
    (**(code **)(*(int *)(iVar3 + 0xb8) + 0x14))(iVar2 + *(short *)(*(int *)(iVar3 + 0xb8) + 0x10));
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + 0x28;
    iVar2 = iVar2 + 0x28;
  } while (iVar1 < 4);
  iVar3 = 0;
  iVar1 = param_1 + 0x148;
  do {
    FUN_0892e748(iVar1);
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0x14;
  } while (iVar3 < 1);
  FUN_08911550(param_1);
  FUN_0891162c(param_1);
  return;
}

