/* Entry 0x088FAEF8 | file offset 0x000F7ED0 | FUN_088faef8 | bytes 304 */

void FUN_088faef8(ushort *param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  ushort uVar4;
  
  *param_1 = 0;
  uVar1 = *param_1;
  iVar3 = FUN_088f47e0(1);
  *param_1 = uVar1 | iVar3 == 0;
  uVar1 = *param_1;
  uVar4 = 0;
  iVar3 = FUN_088f47e0(2);
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  *param_1 = uVar1 | uVar4;
  uVar1 = *param_1;
  uVar4 = 0;
  iVar3 = FUN_088f47e0(3);
  if (iVar3 == 0) {
    uVar4 = 4;
  }
  *param_1 = uVar1 | uVar4;
  uVar1 = *param_1;
  uVar4 = 0;
  iVar3 = FUN_088f47e0(9);
  if (iVar3 == 1) {
    uVar4 = 8;
  }
  *param_1 = uVar1 | uVar4;
  uVar1 = *param_1;
  uVar4 = 0;
  iVar3 = FUN_088f47e0(0x1a);
  if (iVar3 == 0) {
    uVar4 = 0x10;
  }
  *param_1 = uVar1 | uVar4;
  uVar1 = *param_1;
  uVar4 = 0;
  iVar3 = FUN_088f47e0(4);
  if (iVar3 == 0) {
    uVar4 = 0x20;
  }
  *param_1 = uVar1 | uVar4;
  uVar1 = *param_1;
  uVar4 = 0;
  iVar3 = FUN_088f47e0(0x10);
  if (iVar3 == 0) {
    uVar4 = 0x40;
  }
  *param_1 = uVar1 | uVar4;
  uVar2 = FUN_088f47e0(5);
  *(undefined1 *)(param_1 + 1) = uVar2;
  uVar2 = FUN_088f47e0(0x18);
  *(undefined1 *)((int)param_1 + 3) = uVar2;
  return;
}

