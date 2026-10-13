/* Entry 0x088226BC | file offset 0x0001F694 | FUN_088226bc | bytes 132 */

undefined4 FUN_088226bc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x544);
    (**(code **)(iVar2 + 0xec))(*(int *)(param_1 + 0x24) + (int)*(short *)(iVar2 + 0xe8));
    FUN_08823660(param_1);
    FUN_08823870(param_1);
    FUN_088249ec(param_1);
    FUN_088242ec(param_1);
    FUN_088243d0(param_1);
    FUN_088244f4(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

