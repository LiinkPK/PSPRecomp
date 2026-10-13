/* Entry 0x088A7664 | file offset 0x000A463C | FUN_088a7664 | bytes 176 */

void FUN_088a7664(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(*(int *)(param_1 + 0xc0) + 0x7c) & 0x40) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xcc);
    iVar1 = *(int *)(*(int *)(param_1 + 0xd0) + 0x2c);
    uVar3 = (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0xd0) + (int)*(short *)(iVar1 + 0x18));
    FUN_088a4760(0x3f800000,0x3f800000,0x3f800000,uVar3,uVar2);
    uVar3 = *(undefined4 *)(param_1 + 0xcc);
    iVar1 = *(int *)(*(int *)(param_1 + 0xd0) + 0x2c);
    uVar2 = (**(code **)(iVar1 + 0x44))(*(int *)(param_1 + 0xd0) + (int)*(short *)(iVar1 + 0x40));
    FUN_088a4894(uVar3,uVar2);
  }
  return;
}

