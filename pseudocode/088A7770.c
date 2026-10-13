/* Entry 0x088A7770 | file offset 0x000A4748 | FUN_088a7770 | bytes 288 */

void FUN_088a7770(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(param_1 + 0xdc) & 1) != 0) {
    if ((*(uint *)(*(int *)(param_1 + 0xc0) + 0x7c) & 0x200) != 0) {
      FUN_088a7890(param_1);
    }
    if ((*(int *)(param_1 + 0xcc) != 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0xd0) + 0x2c),
       piVar1 = (int *)(**(code **)(iVar2 + 0x14))
                                 (*(int *)(param_1 + 0xd0) + (int)*(short *)(iVar2 + 0x10),
                                  *(undefined4 *)(param_1 + 0xf0)), piVar1 != (int *)0x0)) {
      uVar3 = *(undefined4 *)(param_1 + 0xf4);
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),param_1 + 0x120);
      (**(code **)(*piVar1 + 0x14))
                ((int)piVar1 + (int)*(short *)(*piVar1 + 0x10),param_1 + 0x160,uVar3);
      (**(code **)(*piVar1 + 0x1c))
                ((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),param_1 + 0x1a0,uVar3);
      uVar3 = (**(code **)(*piVar1 + 0x24))((int)piVar1 + (int)*(short *)(*piVar1 + 0x20));
      *(undefined4 *)(param_1 + 0x1e0) = uVar3;
      FUN_088a4924(*(undefined4 *)(param_1 + 0xcc),param_1 + 0x110,0);
    }
  }
  return;
}

