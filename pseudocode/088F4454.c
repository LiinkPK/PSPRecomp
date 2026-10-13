/* Entry 0x088F4454 | file offset 0x000F142C | FUN_088f4454 | bytes 136 */

void FUN_088f4454(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_08935828(param_1,0,0x108);
  }
  iVar1 = FUN_088c50d4(param_2);
  if (iVar1 != 0) {
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(iVar1 + 8);
    *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(iVar1 + 0x1a);
    uVar2 = FUN_088f4900(0x40,param_1 + 2,iVar1,param_3);
    *param_1 = uVar2;
  }
  return;
}

